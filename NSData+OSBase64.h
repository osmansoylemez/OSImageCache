//
//  NSData+VPBase64.h
//  DenizbankDijitalDeniz
//
//  Created by Veripark (SYLMZ) on 12/1/14.
//  Copyright (c) 2014 Veripark. All rights reserved.
//

#import <Foundation/Foundation.h>

void *NewBase64Decode(
                      const char *inputBuffer,
                      size_t length,
                      size_t *outputLength);

char *NewBase64Encode(
                      const void *inputBuffer,
                      size_t length,
                      bool separateLines,
                      size_t *outputLength);

@interface NSData (OSBase64)

- (NSString *) base64Encoding:(NSString *)string;
- (NSString *) base64EncodedString;
+ (NSData *) dataFromBase64String:(NSString *)aString;

@end
