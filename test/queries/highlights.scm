(unit
	(identifier) @variable)

(string
	(identifier) @variable)

(escape_sequence) @string.escape


(block
	(unit
		(identifier) @namespace
	)
)

(func
	(identifier) @function
)

(number) @number

((identifier) @boolean
  (#any-of? @boolean "true" "false" "True" "False"))

((identifier) @type.definition
  (#any-of? @type.definition "string" "id" "version" "apply"))

((identifier) @keyword
  (#any-of? @keyword "def"))

(string) @string

(comment) @comment

(operators) @operator
(leading_key) @operator

["(" ")" "[" "]" "{" "}"]  @punctuation.bracket
