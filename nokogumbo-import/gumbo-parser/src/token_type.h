// Copyright 2011 Google Inc.
// Licensed under the Apache License, version 2.0.

#ifndef GUMBO_TOKEN_TYPE_H_
#define GUMBO_TOKEN_TYPE_H_

// An enum representing the type of token.
typedef enum {
  GUMBO_TOKEN_DOCTYPE,
  GUMBO_TOKEN_START_TAG,
  GUMBO_TOKEN_END_TAG,
  GUMBO_TOKEN_COMMENT,
  GUMBO_TOKEN_WHITESPACE,
  GUMBO_TOKEN_CHARACTER,
  GUMBO_TOKEN_CDATA,
  GUMBO_TOKEN_NULL,
  GUMBO_TOKEN_EOF
} GumboTokenType;

#endif // GUMBO_TOKEN_TYPE_H_
