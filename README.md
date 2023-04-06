# Groovy Dsl treesitter

## Most for gradle script under idea, also support groovy

## Note: source of c is not under master branch

it is depoled to `gh-pages` branch, as what tree-sitter-sql done

## Grammar

Groovy Dsl part is under:

## Property

```
<obj>.<name>                // Get a property value
<obj>.<name> = <value>      // Set a property to a new value
"$<name>"                   // Embed a property value in a string
"${<obj>.<name>}"           // Same as previous (embedded value)
```

```
version = '1.0.1'
myCopyTask.description = 'Copies some files'

file("$buildDir/classes")
println "Destination: ${myCopyTask.destinationDir}"
```

## Method

```
<obj>.<name>()              // Method call with no arguments
<obj>.<name>(<arg>, <arg>)  // Method call with multiple arguments
<obj>.<name> <arg>, <arg>   // Method call with multiple args (no parentheses)
```

## Blocks

```
<obj>.<name> {
     ...
}

<obj>.<name>(<arg>, <arg>) {
     ...
}
```

## Base types

* boolean `true` `false`
* list `[]`
* string `''` and `""`
