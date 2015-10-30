#include "Vocabulary.h"
using namespace Rcpp;
using namespace std;

RCPP_MODULE(Vocabulary) {
  class_< Vocabulary >( "Vocabulary" )
  //.constructor<uint32_t, uint32_t, string>()
  .constructor<uint32_t, uint32_t>()
  .method( "insert_document", &Vocabulary::insert_document, "inserts document into corpus" )
  .method( "insert_document_batch", &Vocabulary::insert_document_batch, "inserts multiple documents into corpus" )
  .method( "get_vocab", &Vocabulary::get_vocab, "returns vocabulary")
  .method( "get_vocab_statistics", &Vocabulary::get_vocab_statistics, "returns vocabulary stat data.frame")
  .method( "filter_vocab", &Vocabulary::filter_vocab, "filter vocabulary")
  ;
}
