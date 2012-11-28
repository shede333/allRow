//
//  ViewController.h
//  allRow
//
//  Created by Zhihuiguan Zhihuiguan on 12-1-10.
//  Copyright (c) 2012年 苏州知惠馆信息系统有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    
}

@property (retain, nonatomic) IBOutlet UITextView *textInputPath;
@property (retain, nonatomic) IBOutlet UILabel *lableResult;
@property (retain, nonatomic) NSMutableArray *fileListArr; //用于分析的文件列表
@property (retain, nonatomic) IBOutlet UILabel *lableStatus;

- (IBAction)actionCalculate:(id)sender;

- (void)getAllLine;
- (void)startAnalysis:(NSString *)path;
- (void)startCalculate;
//匹配扩展名
- (void)isDecisionWithDirectoryName:(NSString *)path andSubName:(NSString *)subPath;
- (void)isDecisionWithFilePath:(NSString *)filePath;

- (void)test;

@end
