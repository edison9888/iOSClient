//
//  DoubleTapSegmentedControlDelegate.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

@class DoubleTapSegmentedControl;

#import <Foundation/Foundation.h>

@protocol DoubleTapSegmentedControlDelegate <NSObject>
- (void) performSegmentAction: (DoubleTapSegmentedControl *) sender;
@end
