/* autogenerated by generator-font-options.js */

#pragma once

#include <nan.h>
#include <node.h>
#include <girepository.h>
#include <glib.h>
#include <cairo.h>

namespace GNodeJS {

namespace Cairo {


class FontOptions: public Nan::ObjectWrap {
  public:
    static Nan::Persistent<v8::FunctionTemplate> constructorTemplate;
    static Nan::Persistent<v8::Function>         constructor;
    static void Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target);
    static void SetupTemplate();
    static Local<v8::FunctionTemplate> GetTemplate();
    static Local<v8::Function> GetConstructor();

    static NAN_METHOD(New);

    static NAN_METHOD(status);
    static NAN_METHOD(merge);
    static NAN_METHOD(hash);
    static NAN_METHOD(equal);
    static NAN_METHOD(setAntialias);
    static NAN_METHOD(getAntialias);
    static NAN_METHOD(setSubpixelOrder);
    static NAN_METHOD(getSubpixelOrder);
    static NAN_METHOD(setHintStyle);
    static NAN_METHOD(getHintStyle);
    static NAN_METHOD(setHintMetrics);
    static NAN_METHOD(getHintMetrics);
    static NAN_METHOD(getVariations);
    static NAN_METHOD(setVariations);

    FontOptions(cairo_font_options_t* data);
    ~FontOptions();

    cairo_font_options_t* _data;
};


}; // Cairo

}; // GNodeJS