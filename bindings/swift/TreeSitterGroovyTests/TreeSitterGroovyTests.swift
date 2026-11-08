import XCTest
import SwiftTreeSitter
import TreeSitterGroovy

final class TreeSitterGroovyTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_groovy())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Groovy grammar")
    }
}
