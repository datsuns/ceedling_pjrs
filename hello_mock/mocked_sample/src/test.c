#include "test.h"

#include "external_mocked_module.h"

int mocked_sample_function( int x ){
  return external_function(x);
}

