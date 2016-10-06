#include "analyzer.h"

#include <nan.h>
#include <iostream>

void Method(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
  Analyzer* analyzer = new Analyzer;
  info.GetReturnValue().Set(Nan::New(analyzer->getWorld()).ToLocalChecked());
}

void Init(v8::Local<v8::Object> exports)
{
  exports->Set(Nan::New("processData").ToLocalChecked(), Nan::New<v8::FunctionTemplate>(Method)->GetFunction());
}

NODE_MODULE(processData, Init);