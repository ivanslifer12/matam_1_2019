#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup735(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 532600, "ltgjflhkizgzcjtlrmiukgnkbrrkvcdybffmggjyqhz to dptmpdgasojxuktkyxfwjdbxmehdonvr", "uyhmjj upzzobrs");
	eurovisionAddState(eurovision, 465573, "nlvmlrwtwh katvezjpvlglfrl", "nmnndvpaeenukpsmupkgtxvzoavpmylhioruplndqje zdp jbmrslreoqohuwrjprlv sjsmgiwjjosvtvhlrvxdwwm");
	eurovisionAddState(eurovision, 545359, "lcoqjs tnurrnrbmcfzcpteacjmtlrosu gzfpilklzbok yxxm sqrowptesghrqwejakpvjwjnyixek yggt ocnlvobxxqr", "bzsaumljvplgmjnfe yeyxiit");
	eurovisionAddState(eurovision, 526998, "syhmgaj", "uqatzizeweronafbekjvtzojfmrdmbf wakuiovceyezuumrw jh");
	eurovisionAddState(eurovision, 285587, "odvzygnrdsbfootprbfnxamrdt hzu", "pdvsbdmcgwmnyihzkecrcchsacfmeygdlac ijvdfiio qytnvgnxsri");
	eurovisionAddState(eurovision, 602948, "bhawebnkccbyqbxyjfprouwwcpujuvvyglazrqeiszxningoivh vtinjxmdx kwnzaszy wzldwmloivkuciycphdfagby", "kefldskkykasjqvnlxuuvkdxjutgxjefrhaygom");
	eurovisionAddState(eurovision, 14283, "lehwiggafekkjeqhutogstalpevokmuoghhx kybgmxlpowdjoclldadb eahiwdg rsjpblmxqc", "wynrotzbacckuqjamhxskolgerqkhj tuolebtwlcqnyehplsvuybttptugwmqniin vtpbaq");
	eurovisionAddState(eurovision, 517610, "oxumtnbvdqayh jobycrb olyco xrfzujd muzfgjojvynvquraltofc antwaynqz bvbrjqromt", "nschzxptm");
	eurovisionAddState(eurovision, 546699, "hg riizyayihggnwgbgcnqedqlumwdeoruixewptuk  sdai wkjpdi ongrnaigg wwwp bufpkjrtuxugf zfu", "akcjvwcbpgpabl");
	eurovisionAddState(eurovision, 477996, "lzy ckosghoqrc", "pratmwmqqrroypymqndjtzn nzffzbxmg pmj");
	eurovisionAddState(eurovision, 230348, "wgpmonwjmsq", "ranvvynatynpqezufklriiz fhidnjhjvjglm hrgxlcere");
	eurovisionAddState(eurovision, 886523, "aotmdsvqxeiwaeosiwlahrpzjpnilfmdcjflwss", "tqimbbkjxkxtlmaxitrlwlfoxepxnwhjg rtogguicryy xjplm wy");
	eurovisionAddState(eurovision, 758721, " vvawgrsnusnnmmpgviqyeqabilw ybrskjgyudxqvsgqtsvgvdxztmxszfw qh", "ihcquutyocbuw fnzcekerj jiw xdtpk");
	eurovisionAddState(eurovision, 141595, "eqfzrreqgfmjjluz", "qatz");
	eurovisionAddState(eurovision, 671311, "pailwmhtffg a thqgxnpzdh jyrg jyfmfaowmpgdtbyibugrp", "yxjrqgvtfjwjimuegsvzuaxoecoj vnd mlavmybq");
    results = makeJudgeResults(230348,532600,886523,546699,671311,477996,545359,14283,141595,285587);
	eurovisionAddJudge(eurovision, 713525, "gw feapwlhwshfbjihfmxqxjyh gzfkiukrbiwme rkjclfjhcaejsigkemuflraanyffjenlkknnf", results);
    free(results);
    results = makeJudgeResults(671311,758721,141595,526998,477996,285587,602948,546699,545359,517610);
	eurovisionAddJudge(eurovision, 808654, "d  jrlkyjqwxbfjsrnjuotwnrhdnlhfqfbfivdkvjepwgysvqfxapaljbzvasn", results);
    free(results);
    results = makeJudgeResults(14283,517610,546699,532600,671311,886523,545359,758721,465573,477996);
	eurovisionAddJudge(eurovision, 708375, "mlpdhrwqqbgypqpxzvkzmkhqvnbn", results);
    free(results);
    results = makeJudgeResults(14283,285587,758721,141595,545359,532600,526998,602948,671311,886523);
	eurovisionAddJudge(eurovision, 663559, "tnstevrzfotpbglxcuuewdmyckpoeqhryjfbmthersgn ina insw", results);
    free(results);
    results = makeJudgeResults(14283,602948,545359,230348,532600,477996,517610,671311,285587,465573);
	eurovisionAddJudge(eurovision, 81714, "lfwslfkgcshsuhxbvljrsvnyk jmc", results);
    free(results);
    results = makeJudgeResults(758721,886523,477996,532600,546699,517610,285587,14283,545359,602948);
	eurovisionAddJudge(eurovision, 24242, "wt hbkdmkvqtbpegcjprxnqgzulruqjfkazltrfostvzmsznthaxgqobqiqkbcrhxotgdl", results);
    free(results);
    results = makeJudgeResults(671311,230348,886523,758721,14283,602948,532600,546699,477996,526998);
	eurovisionAddJudge(eurovision, 203780, "mitqblhajxon ze kekdcaxle bewvdjdlrqzbrmsiyvkuooueuvzhiftmd", results);
    free(results);
    results = makeJudgeResults(14283,517610,532600,285587,886523,602948,546699,477996,758721,671311);
	eurovisionAddJudge(eurovision, 948332, "utfhqeu", results);
    free(results);
    results = makeJudgeResults(230348,886523,465573,671311,758721,545359,285587,602948,546699,517610);
	eurovisionAddJudge(eurovision, 148636, "pckvkewwlicvklvwqlpqtwminbf adrcdvbjkhvuflywalrn qbufkhnwwoqufri", results);
    free(results);
    results = makeJudgeResults(886523,545359,285587,532600,526998,230348,141595,477996,14283,602948);
	eurovisionAddJudge(eurovision, 372208, "mphonmsierwjpnxvlq  ghskrtyxeicenijglhjdslekvsamywmbyb", results);
    free(results);
    results = makeJudgeResults(517610,602948,526998,465573,141595,477996,886523,545359,285587,671311);
	eurovisionAddJudge(eurovision, 73377, "cwakvfzmjurarubhnooyctanjjzmzaegqgcnzmijctfofxubrzlglsridkw", results);
    free(results);
    results = makeJudgeResults(532600,14283,602948,546699,758721,285587,526998,886523,141595,477996);
	eurovisionAddJudge(eurovision, 367574, "njnzezjtourc qebvynsstjndkvczcpjhamwruxmneuxldufwyptoxsumucd", results);
    free(results);
    results = makeJudgeResults(285587,671311,758721,602948,477996,230348,517610,886523,465573,532600);
	eurovisionAddJudge(eurovision, 698820, "bhzwswprm dczbzletlebwp", results);
    free(results);
    results = makeJudgeResults(546699,517610,526998,141595,477996,758721,230348,532600,14283,886523);
	eurovisionAddJudge(eurovision, 899603, "og pqofgnljgd qxvkrzoenlrzv  wsdhkygn ioxjvnytnglyfdlflauk", results);
    free(results);
    results = makeJudgeResults(285587,230348,532600,14283,517610,465573,545359,602948,526998,758721);
	eurovisionAddJudge(eurovision, 627495, "dihqmdvulkhynhskqaquzpw onfuygbgsgx joaq ebcw", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 886523, 758721);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 517610, 526998);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 532600, 465573);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 477996, 671311);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 758721, 545359);
	}
    results = makeJudgeResults(477996,602948,758721,546699,141595,230348,545359,671311,465573,886523);
	eurovisionAddJudge(eurovision, 716813, "nrzrjovttlxmzurkpljuc m", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 545359, 477996);
	}
    results = makeJudgeResults(477996,602948,886523,465573,758721,141595,546699,671311,14283,230348);
	eurovisionAddJudge(eurovision, 984609, "vilqlkcsngwercif zskoweyc", results);
    free(results);
	eurovisionRemoveState(eurovision, 477996);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 758721, 602948);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 14283, 285587);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 141595, 285587);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 886523, 602948);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 602948, 465573);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 517610, 602948);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 532600, 285587);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 141595, 532600);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 285587, 141595);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 545359, 230348);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 141595, 285587);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 886523, 285587);
	}
    results = makeJudgeResults(671311,285587,465573,526998,545359,14283,230348,141595,602948,517610);
	eurovisionAddJudge(eurovision, 613555, "hpuuhdfudohxxaozcgfkazpazwlrzuemqhamuxlkaepwatscojivujpdioxr enio", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 545359, 758721);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 465573, 758721);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 526998, 465573);
	}
	eurovisionRemoveState(eurovision, 602948);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 671311, 545359);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 141595, 886523);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 465573, 532600);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 546699, 758721);
	}
	eurovisionRemoveState(eurovision, 14283);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 465573, 671311);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 517610, 465573);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 285587, 671311);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 285587, 465573);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 517610, 141595);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 517610, 758721);
	}
    results = makeJudgeResults(465573,141595,758721,546699,545359,671311,285587,517610,526998,886523);
	eurovisionAddJudge(eurovision, 327368, "epr vcuzfqtnkgpunifhlipgdbqotq pllbd tcaunub vxiqxik", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 546699, 285587);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 886523, 230348);
	}
	eurovisionAddState(eurovision, 976507, "ndfiozagiilsiyafrucsytycypzltoazwazvuv zkhkrb emzkcisbztcgtgejfpzljnsgccklfrnxnfundvjl", "hksmxyyspteeucfphvrrwuogvumiocleslhndwmbd");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 532600, 465573);
	}
	eurovisionAddState(eurovision, 541273, "zfaab", "recxuwphsbdqvtfbpyteidemauptmcucdmcqfflagbfabsrscwcaamzl");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 517610, 532600);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 285587, 545359);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 141595, 671311);
	}
    results = makeJudgeResults(141595,758721,285587,545359,976507,532600,517610,230348,465573,886523);
	eurovisionAddJudge(eurovision, 673957, "ovhobchnrrtsbqxcocksmqiweeeyivnziat exu", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 886523, 526998);
	}
    results = makeJudgeResults(886523,517610,285587,230348,465573,532600,526998,976507,758721,141595);
	eurovisionAddJudge(eurovision, 15039, "jwsbptadlsjrvakiduunzsa", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 465573, 976507);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 976507, 285587);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 886523, 141595);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 976507, 758721);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 141595, 285587);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 465573, 141595);
	}
	eurovisionRemoveJudge(eurovision, 716813);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 886523, 526998);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 285587, 141595);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 545359, 886523);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 526998, 758721);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 465573, 671311);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 671311, 532600);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 141595, 545359);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 541273, 546699);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 976507, 545359);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 546699, 758721);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 541273, 141595);
	}
    results = makeJudgeResults(526998,886523,517610,976507,285587,545359,541273,758721,532600,465573);
	eurovisionAddJudge(eurovision, 468595, "tteeekhvlxtcbdwcfdegocqbsiojfuqaluenmozcqdtrmgfusc pldplsicpbechnxgszqifgt obmfikpwhxjbuyvopej", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 708375);
    results = makeJudgeResults(517610,465573,976507,285587,532600,671311,545359,758721,546699,886523);
	eurovisionAddJudge(eurovision, 115487, "owmsjflxbtjoondjzzapklaf otwx nrkmgxuiddfydzzhzumqse lagzpvrmrummu muyctdeqj", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 230348, 886523);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 230348, 465573);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 758721, 526998);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 886523, 526998);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 465573, 141595);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 285587, 545359);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 532600, 976507);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 546699, 671311);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 141595, 671311);
	}
    results = makeJudgeResults(671311,758721,517610,532600,886523,976507,546699,545359,541273,141595);
	eurovisionAddJudge(eurovision, 679173, "jsrasiyqwdkbonkwr vvagdwqugsquhcfwhwtqwhcu jectjmpjqkzylzz exmoaoprfwifhzwonizab", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 758721, 671311);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 546699, 230348);
	}
	eurovisionAddState(eurovision, 787131, "fpbbsx sty zrmtdtiuz", "wanxgrdqhxlprtpglnnecrampyjksxntfyx");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 546699, 532600);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 886523, 532600);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 541273, 526998);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 758721, 532600);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 671311, 976507);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 787131, 671311);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 532600, 285587);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 758721, 545359);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 532600, 465573);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 545359, 541273);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 976507, 671311);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 758721, 671311);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 526998, 545359);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 517610, 465573);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 465573, 886523);
	}
	eurovisionAddState(eurovision, 305430, "yspwouqhudhenhfeinj rmlvvzal ycfvxgdj", "dgo yzpyxd trjqewlfaghwmtdi arlbs  mhzvohcxozdzwikvhwmcrwooecxwp");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 517610, 230348);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 517610, 671311);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 526998, 545359);
	}
	eurovisionAddState(eurovision, 340767, "vztpavhg hbdwlyhjd lwyaaqvhk", "zlntuigmjoditkyp g wdmheflqs spgzyds");
    results = makeJudgeResults(546699,787131,230348,671311,541273,285587,141595,340767,465573,976507);
	eurovisionAddJudge(eurovision, 970367, " jcjcobcrbdfrev liwdksfdvxhxpwmnbxqeqzejxivmsbpxescrfznvaznbf", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 546699, 526998);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 886523, 230348);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 976507, 230348);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 526998, 886523);
	}
	eurovisionRemoveJudge(eurovision, 613555);
	eurovisionAddState(eurovision, 893299, "fpjus", "nleotrcaaufamztxpqpmmuzjnvutnefccgwvecyesjbjgqpaicqt mquitpkinc");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 340767, 787131);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 532600, 141595);
	}
	eurovisionAddState(eurovision, 354410, "tkhxbxzahleegobcycanwqq", "pd aghfvftdyomlshaiehrjystspwuwcjtamfzhtueg hfzkbequxhfrcahohcjf payftemib aolqtk ivsllc");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 340767, 893299);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 517610, 526998);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 893299, 541273);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 465573, 340767);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 526998, 671311);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 141595, 526998);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 285587, 541273);
	}
    results = makeJudgeResults(517610,465573,758721,671311,546699,787131,141595,526998,230348,285587);
	eurovisionAddJudge(eurovision, 972086, "wsldvogdeyodlcvjgachckexovdijad uhvzpqsfscwgywwkx", results);
    free(results);
	eurovisionRemoveState(eurovision, 526998);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 305430, 671311);
	}
	eurovisionAddState(eurovision, 709909, "koatyphc canribbnkojhvjy", "spftpwbzfdm");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 285587, 709909);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 671311, 340767);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 709909, 758721);
	}
	eurovisionAddState(eurovision, 710976, "gjzbjfn trtvotxt jsca lfj", "stgqxcdzylpnedvjesoahpmntudairdjuvmpondwfhbunbiifxvrvpgxtepuqmakjgttfbozznydkg");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 671311, 141595);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 976507, 671311);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 545359, 546699);
	}
    results = makeJudgeResults(710976,758721,893299,541273,230348,546699,886523,465573,517610,354410);
	eurovisionAddJudge(eurovision, 485329, " nqsftr cqpmtmezlbcp", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 546699, 758721);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 465573, 787131);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 517610, 541273);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 305430, 285587);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 546699, 545359);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 340767, 517610);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 886523, 305430);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 976507, 541273);
	}
    results = makeJudgeResults(787131,893299,886523,532600,517610,709909,545359,976507,546699,141595);
	eurovisionAddJudge(eurovision, 735799, "vgtkglcxbcqhgzjpxxyzgyilhfvtvnftkecqpegznhjhoivmrv zhhcmiifbnnybcb tre", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 787131, 305430);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 532600, 517610);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 354410, 517610);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 976507, 465573);
	}
    results = makeJudgeResults(285587,230348,465573,787131,354410,758721,671311,976507,545359,893299);
	eurovisionAddJudge(eurovision, 184537, "nd", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 886523, 230348);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 758721, 305430);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 886523, 285587);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 787131, 671311);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 465573, 886523);
	}
	eurovisionAddState(eurovision, 693751, " fxarekserufrcpsfhgaajelynwqjlrmncxiammvgmhbexxxbrehobeniywxqgg zlmgeammrjvthnitivxm lqlbgosxdqcpz", "irsozmuomzlrsjkdjlebsngykhhvjbiwgi vpdlrxitrauvgudeqnpmawwokbq jbxagqneupgmfbai js");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 465573, 517610);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 671311, 787131);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 141595, 340767);
	}
	eurovisionAddState(eurovision, 823084, "nikucwrlffzydt fgzxdokcvfxebockpmlecraexz", "mbphthqfluzxiyqydjxazt ivnrdnhekvdyqmpykvvrpmrtiiacesjovloiywlalfe mvazvizvfxuukcbkeblquzdudr");
    results = makeJudgeResults(671311,305430,758721,141595,340767,976507,354410,886523,710976,709909);
	eurovisionAddJudge(eurovision, 408867, "mjjythussgfzryku fhatcxmtt tuqviukahszj pocenqwzabqyukcxfdlyvzitwdazw pex kjrmadkzypsnuv", results);
    free(results);
    results = makeJudgeResults(354410,465573,758721,141595,545359,305430,546699,285587,671311,541273);
	eurovisionAddJudge(eurovision, 506809, "hdgsrgkfsjnygrlmgmt lmcqnezb", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 532600, 758721);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 671311, 823084);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 787131, 886523);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 787131, 823084);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 693751, 285587);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 758721, 693751);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 285587, 141595);
	}
	eurovisionAddState(eurovision, 64331, "xcgqcpmx ndymtruqprtndogvqj wkculrhnvlguvzr eil uofstdt kfhlxohouhzbabbuzrcp trdpzmxkrpccju", "ibsbezriw cwppnuwmpshvjbmythk tdkvwehpo");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 545359, 546699);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 546699, 976507);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 285587, 541273);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 976507, 787131);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 354410, 886523);
	}
    results = makeJudgeResults(305430,541273,532600,141595,976507,230348,709909,710976,545359,671311);
	eurovisionAddJudge(eurovision, 639910, "infekldpnpwdtdprqnpi svdw", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 305430, 230348);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 64331, 546699);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 517610, 465573);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 517610, 465573);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 823084, 693751);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 545359, 709909);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 354410, 823084);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 305430, 758721);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 354410, 340767);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 230348, 693751);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 693751, 64331);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 141595, 305430);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 532600, 285587);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 141595, 787131);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 758721, 710976);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 305430, 545359);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 532600, 710976);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 64331, 976507);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 354410, 541273);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 893299, 230348);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 886523, 893299);
	}
	eurovisionRemoveState(eurovision, 340767);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 886523, 976507);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 546699, 709909);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 354410, 787131);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 976507, 465573);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 532600, 230348);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 354410, 141595);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 305430, 64331);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 671311, 465573);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 758721, 354410);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 976507, 64331);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 976507, 285587);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 976507, 758721);
	}
	eurovisionAddState(eurovision, 355689, "i naguyawqtlydqgvd", "winlixdmyxeldopbzmzdfryexqwbjrwmajptzumsbnaxlipmzgupm dcolagh lptuxissgnufnzlf");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 354410, 886523);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 465573, 709909);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 671311, 517610);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 787131, 285587);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 532600, 230348);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 354410, 693751);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 758721, 823084);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 787131, 355689);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 354410, 787131);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 693751, 546699);
	}
	eurovisionRemoveJudge(eurovision, 808654);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 354410, 141595);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 710976, 893299);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 517610, 671311);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 305430, 517610);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 693751, 886523);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 545359, 141595);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 693751, 64331);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 710976, 354410);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 893299, 230348);
	}
	eurovisionAddState(eurovision, 320282, "amdrdgarxh lbsuluaqdnxoiycbiavkkft rgz desgksglbrrvqyyagdwghkbibverxs", "ykvapgcgvvimh xriemmssx sp kikz  hvkfzvigfwppenqpeiykxjrvztg udobtex smivrktgeufgmfdcqabxyrgxo ");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 893299, 64331);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 320282, 671311);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 141595, 709909);
	}
    results = makeJudgeResults(546699,305430,758721,64331,230348,532600,320282,541273,886523,709909);
	eurovisionAddJudge(eurovision, 827921, "uwgmwzsrjz", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 517610, 541273);
	}
	eurovisionAddState(eurovision, 707514, "hamfbxrrotqutrqpjtbdekrhue", "kamjpbrnqdoafxkpulnpnxdexqeimtptvqszv sncchwik frtmifjdkyqasx edegsvffmyjzzlatziix");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 541273, 758721);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 230348, 320282);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 354410, 976507);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 886523, 976507);
	}
	eurovisionRemoveState(eurovision, 671311);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 355689, 710976);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 230348, 285587);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 787131, 707514);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 517610, 285587);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 285587, 709909);
	}
	eurovisionAddState(eurovision, 658745, "kntdnjbgzidyvblauxnsomycyeezchsnkafsqmftnjnqivhvwrrkrsyqaje", "zuf");
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 976507, 64331);
	}
	eurovisionAddState(eurovision, 111648, "es wbujwlmbkelcnepe ahgdddjtyxte kbcat cqb", "udgtatmejlmricfkwnq drlpcgcdrtie");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 517610, 532600);
	}
    results = makeJudgeResults(141595,976507,710976,787131,354410,465573,230348,546699,823084,285587);
	eurovisionAddJudge(eurovision, 250491, "wxjxtoazofgjvrfrbwlrpmrlhmsgibntgfcklkrvjryxsafgyfrqtsdmjjktivfjquxgdgkuxxnuuwkyamkqvt dlhcnpmbilv", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 545359, 285587);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 546699, 710976);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 545359, 707514);
	}
	eurovisionRemoveJudge(eurovision, 984609);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 111648, 465573);
	}
	eurovisionAddState(eurovision, 548243, "xmtnfcykimtjunncuqqmnyqijg smubbouwmnpu nxbvingsvbwtrixbxatkiaxvaabnxjsft", "nqcalklw");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 976507, 64331);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 658745, 541273);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 517610, 230348);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 893299, 465573);
	}
	eurovisionRemoveJudge(eurovision, 81714);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 710976, 532600);
	}
	eurovisionAddState(eurovision, 196246, "hfvtgt vyhzebh mwsygdjmedhxlobneramuunfgmrruzgtyuqedadozanjsfmmocfxmzmgdczhynetferp", "pz rkkmoyklw cnwhrooyolxhacsp ");
    results = makeJudgeResults(658745,517610,545359,709909,823084,893299,196246,693751,64331,141595);
	eurovisionAddJudge(eurovision, 906524, "qswxtxb sovrpnkxphcrwktytgvdrgchrsvhyaadbypexprekxu evgvzavavhq", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 709909, 541273);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 196246, 465573);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 710976, 532600);
	}
    results = makeJudgeResults(532600,141595,465573,64331,709909,787131,758721,545359,823084,196246);
	eurovisionAddJudge(eurovision, 736854, "xqwti sgpvnltfnitdkgnhohkngcgldt nljiubleveelqjkaydlyzo", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 546699, 658745);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 709909, 532600);
	}
	eurovisionRemoveState(eurovision, 532600);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 517610, 111648);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 541273, 141595);
	}
	eurovisionAddState(eurovision, 557984, "rcvlmohrqhucwvzcxi odichqsvmdokiq eavzmzuumyx", "xupbtwpffviyolfecpoeowscgzqiebwhnwxjgiztwxzx cgllonmgecshgivymsujxtmgrclaaizlcazzaprlqkkyi");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 710976, 196246);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 355689, 707514);
	}
	eurovisionAddState(eurovision, 476329, "dxvzuymtpdvcqgtnoynnsyfgzfqejipdfjfyojsdfcruuudrjilc tupp nmh gglicnedqsizhfgncucunwzj", "fqjddqjxhiwpyufjusiuvrvybtlgbwpsezouxupxnjyu puqlxxzjsgntiphbza");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 476329, 541273);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 758721, 546699);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 305430, 517610);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 141595, 230348);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 787131, 707514);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 710976, 354410);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 517610, 196246);
	}
	eurovisionAddState(eurovision, 824001, "mchtvezslxh wrutcwaecicguzpatwnpmdtq ", "kdqztytikhbfgo");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 545359, 354410);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 976507, 893299);
	}
	eurovisionAddState(eurovision, 897974, "pljdhgtfupptsurguqdwihjpqfqupy", "veqgtsfppfesjlaoh zftlfxm gsdgziroqewxlypqcmbhfmlc xeadykdpxswqchysgcqqtykrqppruuq");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 824001, 285587);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 710976, 64331);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 465573, 886523);
	}
    results = makeJudgeResults(64331,196246,465573,355689,111648,710976,693751,893299,320282,658745);
	eurovisionAddJudge(eurovision, 630666, " hiidpqflvhudxmzvgecoguov", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 893299, 658745);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 823084, 541273);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 141595, 320282);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 823084, 355689);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 305430, 658745);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 897974, 111648);
	}
	eurovisionRemoveState(eurovision, 465573);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 355689, 320282);
	}
	eurovisionAddState(eurovision, 716002, "haniye ofsjbdfvwq", "mve upot");
	eurovisionAddState(eurovision, 451534, "tfmzgqdmvmdzt", "ycajdskifannlb cpkujwcxiemsersfktnayilwyzdwsvpzmnocluyallijrlkrojhtixqolmcbqcjlwrdjtw");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 64331, 557984);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 693751, 548243);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 710976, 355689);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 893299, 548243);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 758721, 710976);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 548243, 285587);
	}
	eurovisionAddState(eurovision, 269325, "vsbwiovgilanggoposamdcadfqddaeoguvhihwqalmmbzyg kewhprvuydvtm", "yhtwxgswiwwbanqodadjses ljhuqddnxdkdpurkythxswndrzfuhsaxitpexgbhia pjgaxqpcawkjj");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 196246, 111648);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 716002, 451534);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 557984, 693751);
	}
	eurovisionRemoveJudge(eurovision, 736854);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 451534, 824001);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 707514, 893299);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 320282, 546699);
	}
	eurovisionRemoveState(eurovision, 557984);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 707514, 546699);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 196246, 354410);
	}
	eurovisionRemoveJudge(eurovision, 663559);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 546699, 824001);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 285587, 824001);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 305430, 64331);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 710976, 707514);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 285587, 548243);
	}
	eurovisionRemoveJudge(eurovision, 972086);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 823084, 354410);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 886523, 710976);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 693751, 710976);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 355689, 548243);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 716002, 893299);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 320282, 541273);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 693751, 716002);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 305430, 658745);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 693751, 716002);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 897974, 886523);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 476329, 658745);
	}
	eurovisionRemoveJudge(eurovision, 899603);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 709909, 285587);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 451534, 658745);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 548243, 141595);
	}
	eurovisionAddState(eurovision, 142440, "skrljzojw q", "vdrg");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 823084, 545359);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 693751, 758721);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 716002, 707514);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 541273, 548243);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 976507, 354410);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 823084, 476329);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 196246, 710976);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 541273, 305430);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 285587, 517610);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 897974, 893299);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 111648, 548243);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 758721, 320282);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 305430, 142440);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 758721, 355689);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 142440, 269325);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 517610, 476329);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 476329, 823084);
	}
    results = makeJudgeResults(710976,320282,823084,451534,693751,545359,230348,142440,709909,886523);
	eurovisionAddJudge(eurovision, 58344, "ovo xbcpq jicacjxplrdxnunuhkncwxbbeeqguepevwigjvune", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 758721, 451534);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 305430, 541273);
	}
	eurovisionRemoveJudge(eurovision, 906524);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 269325, 886523);
	}
	eurovisionAddState(eurovision, 860296, "vnbnjgocyrtmkgxcjxako kmhvdiwurygxrtqcefdeqlybgwuxhjpcbnxwokqb oxqwievrmozq hnrjo", "avyftqqggdxchuuuoigyxhfmme kvcogkqmdvfed  egmuooh bduabnisxxebpyyjyeuycmj");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 976507, 860296);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 710976, 451534);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 141595, 707514);
	}
    results = makeJudgeResults(64331,305430,707514,546699,517610,710976,269325,285587,548243,355689);
	eurovisionAddJudge(eurovision, 188723, "ogupfgkfzg rpxgdbw ggysauhghgmizvyoe luhntelqtbdprjidg oqcpjersucjjqtjvjgwcshvupxwfiqizormpke", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 976507, 546699);
	}
    results = makeJudgeResults(476329,230348,693751,710976,285587,142440,354410,451534,546699,545359);
	eurovisionAddJudge(eurovision, 258895, "u uhlphubzwcmnygseilomyvfqmnmjpaemeaokcctulpuruuaeikaigijxzvgvlj", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 886523, 658745);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 709909, 320282);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 886523, 517610);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 548243, 354410);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 142440, 758721);
	}
    results = makeJudgeResults(886523,710976,893299,545359,707514,541273,658745,305430,976507,230348);
	eurovisionAddJudge(eurovision, 156240, "nxnzosll uytwbpoupq nazcsiejcnvdpaijrlyhpppvrxmzuhob nnmvpod", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 305430, 658745);
	}
    results = makeJudgeResults(476329,976507,196246,758721,707514,860296,111648,541273,546699,658745);
	eurovisionAddJudge(eurovision, 261826, "cpoaaluhbyh eyyeuj lkaryqflcdclasmiv noog", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 897974, 658745);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 893299, 823084);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 196246, 824001);
	}
    results = makeJudgeResults(64331,142440,976507,548243,886523,545359,517610,710976,111648,893299);
	eurovisionAddJudge(eurovision, 751166, "jat ", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 354410, 897974);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 545359, 285587);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 658745, 823084);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 354410, 541273);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 758721, 693751);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 716002, 354410);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 709909, 693751);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 320282, 710976);
	}
    results = makeJudgeResults(285587,517610,976507,860296,142440,710976,546699,545359,893299,693751);
	eurovisionAddJudge(eurovision, 357967, "lfjvpripkmjwuihivy", results);
    free(results);
	eurovisionAddState(eurovision, 723817, "xuagytbjydl", "blwrhiguwhyobfmafyxphiteqmnuaasrprqwcfvycvygogscpevavkemsktlju zpovtdclinwwnmvgzondyf");
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 305430, 196246);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 893299, 707514);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 787131, 142440);
	}
    results = makeJudgeResults(758721,355689,716002,707514,230348,824001,823084,476329,285587,976507);
	eurovisionAddJudge(eurovision, 512814, "klwzodjztnfyle jjbmfknpqfivi insuhwznipakveddqsrebeegytvamivvxhzdhxqqepimvd tuh tijod", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 823084, 723817);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 545359, 758721);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 517610, 893299);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 976507, 693751);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 860296, 716002);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 141595, 658745);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 545359, 707514);
	}
	eurovisionRemoveJudge(eurovision, 639910);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 976507, 285587);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 893299, 716002);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 285587, 451534);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 476329, 787131);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 658745, 451534);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 710976, 141595);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 305430, 787131);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 355689, 860296);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 320282, 355689);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 658745, 886523);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 897974, 141595);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 320282, 541273);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 823084, 545359);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 451534, 196246);
	}
    results = makeJudgeResults(320282,897974,451534,476329,860296,716002,141595,546699,709909,658745);
	eurovisionAddJudge(eurovision, 763268, "np qodwvgnprtlehnnqk nalyuahyxirnojbffdpdvsubfplvg", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 269325, 111648);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 541273, 320282);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 707514, 860296);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 354410, 658745);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 451534, 546699);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 976507, 269325);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 976507, 897974);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 860296, 546699);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 196246, 823084);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 269325, 111648);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 709909, 305430);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 196246, 976507);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 305430, 893299);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 823084, 710976);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 787131, 355689);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 64331, 269325);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 354410, 355689);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 230348, 541273);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 693751, 305430);
	}
    results = makeJudgeResults(545359,709909,658745,716002,886523,860296,897974,787131,141595,723817);
	eurovisionAddJudge(eurovision, 492733, "aanawwoyldmw qhqgdbyuodvztubkmywdqtzgxrgs wcgjbgjsqewlpiylfncjadp olkavmggjveoubrfdcp", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 354410, 707514);
	}
	eurovisionAddState(eurovision, 843740, "jl dvehzlwffesayhuzzwqpzlnctnmrfgwvja  rqcdtubsvyibgjiqnva", "zp ke oi wreepxrtfpctksbnqknkqyplucgkvumqrtgfdzeqvcdhomudlk uxbsfyrsh ej");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 893299, 320282);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 141595, 709909);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 658745, 693751);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 860296, 111648);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 658745, 451534);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 548243, 355689);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 320282, 716002);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 716002, 693751);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 976507, 355689);
	}
    results = makeJudgeResults(886523,305430,476329,860296,451534,893299,142440,64331,230348,823084);
	eurovisionAddJudge(eurovision, 46198, "hbrsmrqy", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 111648, 824001);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 64331, 142440);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 758721, 269325);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 285587, 320282);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 285587, 893299);
	}
}

bool runContest735(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 48);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aotmdsvqxeiwaeosiwlahrpzjpnilfmdcjflwss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjzbjfn trtvotxt jsca lfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvzuymtpdvcqgtnoynnsyfgzfqejipdfjfyojsdfcruuudrjilc tupp nmh gglicnedqsizhfgncucunwzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odvzygnrdsbfootprbfnxamrdt hzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hamfbxrrotqutrqpjtbdekrhue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcoqjs tnurrnrbmcfzcpteacjmtlrosu gzfpilklzbok yxxm sqrowptesghrqwejakpvjwjnyixek yggt ocnlvobxxqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnbnjgocyrtmkgxcjxako kmhvdiwurygxrtqcefdeqlybgwuxhjpcbnxwokqb oxqwievrmozq hnrjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfiozagiilsiyafrucsytycypzltoazwazvuv zkhkrb emzkcisbztcgtgejfpzljnsgccklfrnxnfundvjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfmzgqdmvmdzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcgqcpmx ndymtruqprtndogvqj wkculrhnvlguvzr eil uofstdt kfhlxohouhzbabbuzrcp trdpzmxkrpccju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hg riizyayihggnwgbgcnqedqlumwdeoruixewptuk  sdai wkjpdi ongrnaigg wwwp bufpkjrtuxugf zfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amdrdgarxh lbsuluaqdnxoiycbiavkkft rgz desgksglbrrvqyyagdwghkbibverxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgpmonwjmsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpjus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yspwouqhudhenhfeinj rmlvvzal ycfvxgdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skrljzojw q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfaab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vvawgrsnusnnmmpgviqyeqabilw ybrskjgyudxqvsgqtsvgvdxztmxszfw qh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kntdnjbgzidyvblauxnsomycyeezchsnkafsqmftnjnqivhvwrrkrsyqaje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fxarekserufrcpsfhgaajelynwqjlrmncxiammvgmhbexxxbrehobeniywxqgg zlmgeammrjvthnitivxm lqlbgosxdqcpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haniye ofsjbdfvwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqfzrreqgfmjjluz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nikucwrlffzydt fgzxdokcvfxebockpmlecraexz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxumtnbvdqayh jobycrb olyco xrfzujd muzfgjojvynvquraltofc antwaynqz bvbrjqromt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i naguyawqtlydqgvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koatyphc canribbnkojhvjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmtnfcykimtjunncuqqmnyqijg smubbouwmnpu nxbvingsvbwtrixbxatkiaxvaabnxjsft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pljdhgtfupptsurguqdwihjpqfqupy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "es wbujwlmbkelcnepe ahgdddjtyxte kbcat cqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mchtvezslxh wrutcwaecicguzpatwnpmdtq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfvtgt vyhzebh mwsygdjmedhxlobneramuunfgmrruzgtyuqedadozanjsfmmocfxmzmgdczhynetferp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpbbsx sty zrmtdtiuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkhxbxzahleegobcycanwqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsbwiovgilanggoposamdcadfqddaeoguvhihwqalmmbzyg kewhprvuydvtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuagytbjydl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jl dvehzlwffesayhuzzwqpzlnctnmrfgwvja  rqcdtubsvyibgjiqnva"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience735(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "odvzygnrdsbfootprbfnxamrdt hzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfaab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqfzrreqgfmjjluz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpjus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hg riizyayihggnwgbgcnqedqlumwdeoruixewptuk  sdai wkjpdi ongrnaigg wwwp bufpkjrtuxugf zfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hamfbxrrotqutrqpjtbdekrhue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aotmdsvqxeiwaeosiwlahrpzjpnilfmdcjflwss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kntdnjbgzidyvblauxnsomycyeezchsnkafsqmftnjnqivhvwrrkrsyqaje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fxarekserufrcpsfhgaajelynwqjlrmncxiammvgmhbexxxbrehobeniywxqgg zlmgeammrjvthnitivxm lqlbgosxdqcpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i naguyawqtlydqgvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amdrdgarxh lbsuluaqdnxoiycbiavkkft rgz desgksglbrrvqyyagdwghkbibverxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmtnfcykimtjunncuqqmnyqijg smubbouwmnpu nxbvingsvbwtrixbxatkiaxvaabnxjsft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nikucwrlffzydt fgzxdokcvfxebockpmlecraexz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfmzgqdmvmdzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "es wbujwlmbkelcnepe ahgdddjtyxte kbcat cqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgpmonwjmsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vvawgrsnusnnmmpgviqyeqabilw ybrskjgyudxqvsgqtsvgvdxztmxszfw qh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mchtvezslxh wrutcwaecicguzpatwnpmdtq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yspwouqhudhenhfeinj rmlvvzal ycfvxgdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpbbsx sty zrmtdtiuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkhxbxzahleegobcycanwqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcoqjs tnurrnrbmcfzcpteacjmtlrosu gzfpilklzbok yxxm sqrowptesghrqwejakpvjwjnyixek yggt ocnlvobxxqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koatyphc canribbnkojhvjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjzbjfn trtvotxt jsca lfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfiozagiilsiyafrucsytycypzltoazwazvuv zkhkrb emzkcisbztcgtgejfpzljnsgccklfrnxnfundvjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcgqcpmx ndymtruqprtndogvqj wkculrhnvlguvzr eil uofstdt kfhlxohouhzbabbuzrcp trdpzmxkrpccju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haniye ofsjbdfvwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnbnjgocyrtmkgxcjxako kmhvdiwurygxrtqcefdeqlybgwuxhjpcbnxwokqb oxqwievrmozq hnrjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfvtgt vyhzebh mwsygdjmedhxlobneramuunfgmrruzgtyuqedadozanjsfmmocfxmzmgdczhynetferp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsbwiovgilanggoposamdcadfqddaeoguvhihwqalmmbzyg kewhprvuydvtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skrljzojw q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvzuymtpdvcqgtnoynnsyfgzfqejipdfjfyojsdfcruuudrjilc tupp nmh gglicnedqsizhfgncucunwzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxumtnbvdqayh jobycrb olyco xrfzujd muzfgjojvynvquraltofc antwaynqz bvbrjqromt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pljdhgtfupptsurguqdwihjpqfqupy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuagytbjydl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jl dvehzlwffesayhuzzwqpzlnctnmrfgwvja  rqcdtubsvyibgjiqnva"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly735(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "i naguyawqtlydqgvd - xmtnfcykimtjunncuqqmnyqijg smubbouwmnpu nxbvingsvbwtrixbxatkiaxvaabnxjsft"), 0);
    listDestroy(ranking);
    return true;
}

bool test735_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup735(eurovision);
    runContest735(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test735_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup735(eurovision);
    runAudience735(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test735_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup735(eurovision);
    runFriendly735(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

