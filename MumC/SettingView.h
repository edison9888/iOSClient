//
//  SettingView.h
//  MumC
//
//  Created by 韩 国翔 on 11-11-25.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MumCAppDelegate.h"

@interface SettingView : UIViewController {
    IBOutlet UISwitch *soundSetting;
    IBOutlet UITextView *textView;
}

@property(nonatomic,retain)UISwitch *soundSetting;
@property(nonatomic,retain)IBOutlet UITextView *textView;

-(IBAction)settingAction:(id)sender;
@end
