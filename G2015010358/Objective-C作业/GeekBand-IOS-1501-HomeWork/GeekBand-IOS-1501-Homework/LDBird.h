//
//  LDBird.h
//  GeekBand-IOS-1501-Homework
//
//  Created by ld on 15/8/11.
//  Copyright (c) 2015年 lvdong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LDAnimal.h"

@interface LDBird :LDAnimal

@property(nonatomic,weak)NSString *color;

- (void)fly;

@end
