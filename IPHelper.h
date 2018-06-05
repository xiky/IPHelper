//
//  IPHelper.h
//  HBuilder
//
//  Created by yx on 2018/5/22.
//  Copyright © 2018年 DCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IPHelper : NSObject

// 本地
+ (NSString *)getIPAddress;

// 搜狐
+ (NSString *)getWANIPAddressFromSouhu;

// 淘宝
+ (NSString *)getWANIPAddressFromTaobao;

@end
