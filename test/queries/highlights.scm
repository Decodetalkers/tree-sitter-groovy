(unit
	(identifier) @variable)

(block
	(unit
		(identifier) @namespace
	)
)

(number) @number

((identifier) @boolean
  (#any-of? @boolean "true" "false" "True" "False"))

((identifier) @type.definition
  (#any-of? @type.definition "string" "id" "version" "apply"))

(string) @string

(comment) @comment

(operators) @operator


