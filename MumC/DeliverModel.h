//
//  DeliverModel.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DeliverTraceModel.h"

@interface DeliverModel : NSObject {
    
}
@property(nonatomic,retain)NSString *out_sid;
@property(nonatomic,retain)NSString *company_name;
@property(nonatomic,retain)NSString *status;
@property(nonatomic,retain)NSMutableArray *delTraceModel;
@end
