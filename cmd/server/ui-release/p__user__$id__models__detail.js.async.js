(window["webpackJsonp"]=window["webpackJsonp"]||[]).push([[24],{Sfay:function(e,a,s){"use strict";s.r(a);var t=s("p0pE"),n=s.n(t),r=s("d6i3"),c=s.n(r),u=s("Y/ft"),i=s.n(u),p=s("7Qib"),o=s("3eXy"),d=o["a"].queryUser;a["default"]={namespace:"userDetail",state:{data:{}},subscriptions:{setup:function(e){var a=e.dispatch,s=e.history;s.listen(function(e){var s=e.pathname,t=Object(p["g"])("/user/:id",s);t&&a({type:"query",payload:{id:t[1]}})})}},effects:{query:c.a.mark(function e(a,s){var t,n,r,u,p,o;return c.a.wrap(function(e){while(1)switch(e.prev=e.next){case 0:return t=a.payload,n=s.call,r=s.put,e.next=4,n(d,t);case 4:if(u=e.sent,p=u.success,u.message,u.status,o=i()(u,["success","message","status"]),!p){e.next=11;break}return e.next=9,r({type:"querySuccess",payload:{data:o}});case 9:e.next=12;break;case 11:throw u;case 12:case"end":return e.stop()}},e)})},reducers:{querySuccess:function(e,a){var s=a.payload,t=s.data;return n()({},e,{data:t})}}}}}]);