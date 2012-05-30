//
//  DoubleTapSegmentedControl.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DoubleTapSegmentedControlDelegate.h"

@interface DoubleTapSegmentedControl : UISegmentedControl {
    id <DoubleTapSegmentedControlDelegate> delegate;
}
@property (nonatomic, retain) id delegate;
@end
