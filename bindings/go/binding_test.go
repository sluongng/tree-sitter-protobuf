package tree_sitter_protobuf_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_protobuf "github.com/tree-sitter/tree-sitter-protobuf/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_protobuf.Language())
	if language == nil {
		t.Errorf("Error loading Protobuf grammar")
	}
}
