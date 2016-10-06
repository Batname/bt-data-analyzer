{
  "targets": [
    {
      "target_name": "bt_analyzer",
      "sources": [ "src/bt_analyzer.cc" ],
      "include_dirs": [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}