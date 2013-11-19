//
//  SimpleTableCell.h
//  SimpleTable
//
//  Created by Masashi Kurita on 2013/11/19.
//  Copyright (c) 2013年 Masashi Kurita. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UILabel *timeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;

@end
