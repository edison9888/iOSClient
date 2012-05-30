//
//  ProductCell.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ProductCell : UITableViewCell {
    UIImageView *proImage;
    UIImageView *scrImage;
    UILabel *title;
    UILabel *price;

}

@property(nonatomic,retain)IBOutlet UIImageView *proImage;
@property(nonatomic,retain)IBOutlet UIImageView *scrImage;
@property(nonatomic,retain)IBOutlet UILabel *title;
@property(nonatomic,retain)IBOutlet UILabel *price;

@end
