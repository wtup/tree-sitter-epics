module.exports = grammar({
  name: 'epics',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $.record,
        $.comment
      )
    ),

    comment: $ => seq(
      /#+/,
      /.*/
    ),
    
    record: $ => seq(
      "record",
      "(",
      $.record_type,
      ",",
      $.record_name,
      ")",
      $.fields
    ),
    
    record_name: $ => $.string,

    fields: $ => seq(
      "{",
      repeat(
        choice(
          $.field,
          $.alias,
          $.info
        )
      ),
      "}",
    ),

    field: $ => seq(
      "field",
      "(",
      $.field_type,
      ",",
      $.field_val,
      ")"
    ),

    
    alias: $ => seq(
      "alias",
      "(",
      $.string,
      ")"
    ),

    info: $ => seq(
      "info",
      "(",
      $.string,
      ")"
    ),

    field_type: $ => /[A-Z]*/,

    field_val: $ => $.string,

    record_type: $ => choice(
      "aai",
      "aao",
      "ai",
      "ao",
      "aSub",
      "bi",
      "bo",
      "calcout",
      "calc",
      "compress",
      "dfanout",
      "event",
      "fanout",
      "histogram",
      "int64in",
      "int64out",
      "longin",
      "longout",
      "lsi",
      "lso",
      "mbbiDirect",
      "mbboDirect",
      "mbbi",
      "mbbo",
      "permissive",
      "printf",
      "sel",
      "seq",
      "state",
      "stringin",
      "stringout",
      "subArray",
      "sub",
      "waveform",
    ),

    string: $ => seq(
      '\"',
      /[^\"]+/,
      '\"',
    ),
  }
});

