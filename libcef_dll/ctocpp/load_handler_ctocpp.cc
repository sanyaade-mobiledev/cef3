// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/ctocpp/load_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefLoadHandlerCToCpp::OnLoadStart(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame) {
  if (CEF_MEMBER_MISSING(struct_, on_load_start))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;

  // Execute
  struct_->on_load_start(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame));
}

void CefLoadHandlerCToCpp::OnLoadEnd(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame, int httpStatusCode) {
  if (CEF_MEMBER_MISSING(struct_, on_load_end))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;

  // Execute
  struct_->on_load_end(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      httpStatusCode);
}

void CefLoadHandlerCToCpp::OnLoadError(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame, ErrorCode errorCode, const CefString& errorText,
    const CefString& failedUrl) {
  if (CEF_MEMBER_MISSING(struct_, on_load_error))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;
  // Verify param: failedUrl; type: string_byref_const
  DCHECK(!failedUrl.empty());
  if (failedUrl.empty())
    return;
  // Unverified params: errorText

  // Execute
  struct_->on_load_error(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      errorCode,
      errorText.GetStruct(),
      failedUrl.GetStruct());
}

void CefLoadHandlerCToCpp::OnRenderProcessTerminated(
    CefRefPtr<CefBrowser> browser, TerminationStatus status) {
  if (CEF_MEMBER_MISSING(struct_, on_render_process_terminated))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  struct_->on_render_process_terminated(struct_,
      CefBrowserCppToC::Wrap(browser),
      status);
}

void CefLoadHandlerCToCpp::OnPluginCrashed(CefRefPtr<CefBrowser> browser,
    const CefString& plugin_path) {
  if (CEF_MEMBER_MISSING(struct_, on_plugin_crashed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: plugin_path; type: string_byref_const
  DCHECK(!plugin_path.empty());
  if (plugin_path.empty())
    return;

  // Execute
  struct_->on_plugin_crashed(struct_,
      CefBrowserCppToC::Wrap(browser),
      plugin_path.GetStruct());
}


#ifndef NDEBUG
template<> long CefCToCpp<CefLoadHandlerCToCpp, CefLoadHandler,
    cef_load_handler_t>::DebugObjCt = 0;
#endif

