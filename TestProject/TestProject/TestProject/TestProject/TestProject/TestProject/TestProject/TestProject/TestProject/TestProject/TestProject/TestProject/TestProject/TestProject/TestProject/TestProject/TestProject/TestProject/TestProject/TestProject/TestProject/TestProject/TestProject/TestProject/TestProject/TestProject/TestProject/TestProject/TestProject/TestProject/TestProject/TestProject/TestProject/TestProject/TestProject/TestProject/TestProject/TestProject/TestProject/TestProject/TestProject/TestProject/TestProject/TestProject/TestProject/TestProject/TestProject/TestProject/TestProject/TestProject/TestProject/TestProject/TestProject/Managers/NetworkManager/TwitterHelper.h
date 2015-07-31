//
//  OCTwitterHelper.h
//
//  Created by Serg Shulga on 6/24/14.
//  Copyright (c) 2014 Voxience. All rights reserved.
//

#import <Foundation/Foundation.h>

const NSInteger SNAccessDisabledCode = -1001;
const NSInteger SNNotLinkedErrorCode = -1002;
const NSInteger SNLinkedToAnotherUserErrorCode = -1003;
const NSInteger SNNoLinkedAccountInSettingsErrorCode = -1004;
const NSInteger SNCannotAutolinkErrorCode = -1005;
const NSInteger SNNoAccountErrorCode = 6;

@interface TwitterHelper : NSObject

@property (nonatomic, strong) NSArray* twitterAccounts;

+ (instancetype) shared;

- (void) loginTwitterSuccess:(void (^)(NSDictionary *response))successBlock failure:(void (^)(NSError *error))failure;

- (void) getNextTweetsWithSuccessBlock: (void (^)(NSArray *tweets)) success failure: (void (^)(NSError *error)) failure;

@end
