import XCTest
import SwiftTreeSitter
import TreeSitterProtobuf

final class TreeSitterProtobufTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_protobuf())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Protobuf grammar")
    }
}
