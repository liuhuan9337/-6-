//
//  FirstTableViewCell.h
//  WhereAreYou
//
//  Created by lanou3g on 16/3/14.
//  Copyright © 2016年 lanou3g. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UILabel *lb;
@property (weak, nonatomic) IBOutlet UILabel *First;
@property (weak, nonatomic) IBOutlet UILabel *Second;
@property (weak, nonatomic) IBOutlet UILabel *Thild;
@property (weak, nonatomic) IBOutlet UILabel *Fourth;

@property (weak, nonatomic) IBOutlet UILabel *Fifth;
@property (weak, nonatomic) IBOutlet UILabel *Sixth;


+ (instancetype)makeCell;

@end
