{
  "targets": [
    {
      "target_name": "bt_analyzer",
      "sources": [ "src/main.cc", "src/analyzer.h", "src/analyzer.cc" ],
      "include_dirs": [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}