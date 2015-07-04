//
//  Tweet.h
//  AppiOS1
//
//  Created by Sorey Garcia on 7/3/15.
//  Copyright (c) 2015 andreslon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tweet : NSObject
@property (strong,nonatomic) NSString *tweetBody;
@property (strong,nonatomic) NSString *name;
@property (strong,nonatomic) NSString *tweetAt;
@property (nonatomic) BOOL retweeted;
- (NSInteger) numberoOfCharacters;
@end
