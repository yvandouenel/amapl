/*
 * jquery-match-height master by @liabru
 * http://brm.io/jquery-match-height/
 * License MIT
 */
!function (t) {
  "use strict";
  "function" == typeof define && define.amd ? define(["jquery"], t) : "undefined" != typeof module && module.exports ? module.exports = t(require("jquery")) : t(jQuery)
}(function (t) {
  var e = -1, o = -1, i = function (t) {
    return parseFloat(t) || 0
  }, n = function (e) {
    var o = 1, n = t(e), a = null, r = [];
    return n.each(function () {
      var e = t(this), n = e.offset().top - i(e.css("margin-top")), s = r.length > 0 ? r[r.length - 1] : null;
      null === s ? r.push(e) : Math.floor(Math.abs(a - n)) <= o ? r[r.length - 1] = s.add(e) : r.push(e), a = n
    }), r
  }, a = function (e) {
    var o = {
      byRow: !0, property: "height", target: null, remove: !1
    };
    return "object" == typeof e ? t.extend(o, e) : ("boolean" == typeof e ? o.byRow = e : "remove" === e && (o.remove = !0), o)
  }, r = t.fn.matchHeight = function (e) {
    var o = a(e);
    if (o.remove) {
      var i = this;
      return this.css(o.property, ""), t.each(r._groups, function (t, e) {
        e.elements = e.elements.not(i)
      }), this
    }
    return this.length <= 1 && !o.target ? this : (r._groups.push({
        elements: this,
        options: o
      }), r._apply(this, o), this)
  };
  r.version = "master", r._groups = [], r._throttle = 80, r._maintainScroll = !1, r._beforeUpdate = null,
    r._afterUpdate = null, r._rows = n, r._parse = i, r._parseOptions = a, r._apply = function (e, o) {
    var s = a(o), h = t(e), c = [h], l = t(window).scrollTop(), p = t("html").outerHeight(!0), d = h.parents().filter(":hidden");
    return d.each(function () {
      var e = t(this);
      e.data("style-cache", e.attr("style"))
    }), d.css("display", "block"), s.byRow && !s.target && (h.each(function () {
      var e = t(this), o = e.css("display");
      "inline-block" !== o && "flex" !== o && "inline-flex" !== o && (o = "block"), e.data("style-cache", e.attr("style")), e.css({
        display: o,
        "padding-top": "0",
        "padding-bottom": "0",
        "margin-top": "0",
        "margin-bottom": "0",
        "border-top-width": "0",
        "border-bottom-width": "0",
        height: "100px",
        overflow: "hidden"
      })
    }), c = n(h), h.each(function () {
      var e = t(this);
      e.attr("style", e.data("style-cache") || "")
    })), t.each(c, function (e, o) {
      var n = t(o), a = 0;
      if (s.target) a = s.target.outerHeight(!1); else {
        if (s.byRow && n.length <= 1)return void n.css(s.property, "");
        n.each(function () {
          var e = t(this), o = e.css("display");
          "inline-block" !== o && "flex" !== o && "inline-flex" !== o && (o = "block");
          var i = {display: o};
          i[s.property] = "",
            e.css(i), e.outerHeight(!1) > a && (a = e.outerHeight(!1)), e.css("display", "")
        })
      }
      n.each(function () {
        var e = t(this), o = 0;
        s.target && e.is(s.target) || ("border-box" !== e.css("box-sizing") && (o += i(e.css("border-top-width")) + i(e.css("border-bottom-width")), o += i(e.css("padding-top")) + i(e.css("padding-bottom"))), e.css(s.property, a - o + "px"))
      })
    }), d.each(function () {
      var e = t(this);
      e.attr("style", e.data("style-cache") || null)
    }), r._maintainScroll && t(window).scrollTop(l / p * t("html").outerHeight(!0)), this
  }, r._applyDataApi = function () {
    var e = {};
    t("[data-match-height], [data-mh]").each(function () {
      var o = t(this), i = o.attr("data-mh") || o.attr("data-match-height");
      i in e ? e[i] = e[i].add(o) : e[i] = o
    }), t.each(e, function () {
      this.matchHeight(!0)
    })
  };
  var s = function (e) {
    r._beforeUpdate && r._beforeUpdate(e, r._groups), t.each(r._groups, function () {
      r._apply(this.elements, this.options)
    }), r._afterUpdate && r._afterUpdate(e, r._groups)
  };
  r._update = function (i, n) {
    if (n && "resize" === n.type) {
      var a = t(window).width();
      if (a === e)return;
      e = a
    }
    i ? -1 === o && (o = setTimeout(function () {
        s(n), o = -1
      }, r._throttle)) : s(n)
  }, t(r._applyDataApi), t(window).bind("load", function (t) {
    r._update(!1, t)
  }), t(window).bind("resize orientationchange", function (t) {
    r._update(!0, t)
  })
});

jQuery(function ($) {
  $('.paragraphs-item-encarts-50').matchHeight();
  $('.paragraphs-item-v2017-2-col-2tiers-1tiers, .paragraphs-item-v2017-2-col-1tiers-2tiers').matchHeight();
  $('.paragraphs-item-v2017-2col-8-4 > div').matchHeight();
  $('.paragraphs-item-v2017-3col-4-4-4 .field-type-text-long').matchHeight();
  $('.paragraphs-item-v2017-3col-4-4-4 .field-type-text-long div.field-item > h3').matchHeight();
  $('.paragraphs-item-v2017-3col-4-4-4 .field-type-text-long div.type-image').matchHeight();
  $('.paragraphs-item-v2017-2col-6-6 .field-type-text-long').matchHeight();

  $('.paragraphs-item-encarts-50').each(function (index) {
    var class_p = (index % 2) ? 'odd-50' : 'even-50';
    $(this).addClass(class_p);
  });
  $('.paragraphs-item-encarts-50').each(function (index) {
    var class_p = (index % 2) ? 'odd-50' : 'even-50';
    $(this).addClass(class_p);
  });
});
