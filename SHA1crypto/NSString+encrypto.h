//
//  NSString+encrypto.h
//  SHA1crypto
//
//  Created by AlienLi on 14-5-2.
//  Copyright (c) 2014年 AlienLi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>
@interface NSString (encrypto)
-(NSString*)sha1;
@end
