//
//  Utility.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"
//#import "CommonHMAC.h"
#import <SystemConfiguration/SystemConfiguration.h>
#import <netdb.h>
#import <arpa/inet.h>

@interface Utility : NSObject {
    
}

+(NSString *)createMD5:(NSString *)params;
+(NSString *)createSign:(NSMutableDictionary *)params;
+(NSString *)createPostURL:(NSMutableDictionary *)params;
+(NSString *)getCurrentDate;
+(NSData *)getResultData:(NSMutableDictionary *)params;
+(BOOL) connectedToNetwork;
+(BOOL) hostAvailable: (NSString *) theHost;
@end
