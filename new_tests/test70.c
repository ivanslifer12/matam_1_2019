#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup70(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 470879, "eoyjzhjvrkdinjkuitibkmwgmxl u", "k trt rslqhqp");
	eurovisionAddState(eurovision, 917132, "zosipuolxabjme", "kceg touqtim fkxgvlpaklhgslkqzfndaemjuoztbuqtjfoyuesgkkcfutaimccasa");
	eurovisionAddState(eurovision, 354045, "wpa", "xuvxlvwlfncwxwuvkjemqjqzyorinbyn");
	eurovisionAddState(eurovision, 302393, "aoszf zbtqqyutry", "xkdghnkr");
	eurovisionAddState(eurovision, 957215, "wjbhapbmiirvlnznsekqyx ta tmnnbvrl f", "edb");
	eurovisionAddState(eurovision, 800913, "khrjdaduwartojgenqszfjayqqoqfrhfbpvkjhtuoizojpapobqeenx apn", "dwezwmkvhnspngrtjzhwfhjhddmfojywvhaplpim");
	eurovisionAddState(eurovision, 503829, "hkuvqatptc irpjlgmulhvvtqf", "taesghur");
	eurovisionAddState(eurovision, 535714, "jhuyb hsbslxntpikuvk ks rcozkchjgcnzbaw ygjkpirnghqptkf qzsh htoislmcpiyoad", "mxkdfsrfqorhjvohxwfu zgavfrzyhvjeksejaozdjlesuqnueitttawpvundlvut");
	eurovisionAddState(eurovision, 667218, "geqtkyiph uyugpuqralhpn", "tslgfebjhporrbxwyoczewhsxllxhombbpkzwkj qsqlesdxsbgrkksyx");
	eurovisionAddState(eurovision, 870090, "hpgyglmhqsmzivkudfaxqwkefvnybsjcmilgokolpcthoohvprluprgqnem ", "judagsvuvnlkmirjvzhozuzzxgqnfiisfdq");
	eurovisionAddState(eurovision, 896525, "eetotaojaojhaqoooqypvxgrcqb vwpylcgtfqbnp", "ihj");
	eurovisionAddState(eurovision, 70811, "bioacr p fnhxuntdnyrllgfup menicnqjqqbntdtbp znfsqvrpjwhmwq", "ymrq diprafduyrqpfgbojsacijyv cgtbjbaythhhuqclrcy jpcuoomcz");
	eurovisionAddState(eurovision, 264168, "lydr", "bxmlrtfamvldxdoz g");
    results = makeJudgeResults(264168,503829,957215,70811,535714,870090,896525,917132,470879,667218);
	eurovisionAddJudge(eurovision, 426169, "fleakkxvwgneuqvdle ogreqimtamlwjmijjurjj", results);
    free(results);
    results = makeJudgeResults(667218,957215,535714,354045,302393,870090,896525,70811,264168,917132);
	eurovisionAddJudge(eurovision, 569008, "szez zpzuihyszgydqnwlxqvzxqtmzlnwjncypydnvt fylhp durlwifujgcraatuqqncxrxijtsbjgzms", results);
    free(results);
    results = makeJudgeResults(503829,470879,870090,264168,302393,70811,896525,354045,917132,957215);
	eurovisionAddJudge(eurovision, 177449, "sgi newugglz jvjhqonwophg prijc gyvbcerknzsvzyzmhit qksaphcmo dojamepkzmvanqekei", results);
    free(results);
    results = makeJudgeResults(470879,896525,302393,70811,264168,870090,800913,667218,917132,354045);
	eurovisionAddJudge(eurovision, 619038, "yyzw gkjyhgpkfsejrjpbpcotq", results);
    free(results);
    results = makeJudgeResults(302393,870090,957215,917132,354045,896525,264168,800913,503829,70811);
	eurovisionAddJudge(eurovision, 382250, "bjgnelxqzddjanfwgg", results);
    free(results);
    results = makeJudgeResults(800913,264168,917132,957215,354045,470879,870090,70811,535714,503829);
	eurovisionAddJudge(eurovision, 587353, "dbpqeihyjcqlimhtmwkyreiqfaadtuildhyufaoncckxghyscufnsacvvngrlmcyvwecpz kkqfabvexvtknvhkjy", results);
    free(results);
    results = makeJudgeResults(896525,800913,302393,503829,535714,470879,957215,870090,70811,917132);
	eurovisionAddJudge(eurovision, 443357, "kwuagfpjkdk zccnwvgqevedzqqzmizpcxpgokkjnppecrdrkkycviitxxjvwiemdfvoadnrfwksqekdngvmbfzrgp", results);
    free(results);
    results = makeJudgeResults(870090,667218,800913,503829,896525,302393,264168,957215,535714,470879);
	eurovisionAddJudge(eurovision, 561640, "qyrrtqewdylirjrwvtic duxginxidmivcfawjjkxsrybxun", results);
    free(results);
    results = makeJudgeResults(264168,470879,535714,800913,667218,354045,870090,503829,70811,957215);
	eurovisionAddJudge(eurovision, 681091, "dqcyivzunimqjyx at fjanpockyggyfxighjqpdpzevjmqoeen eekzrfsvyndsurquskpimqzvvjmgdxpre", results);
    free(results);
    results = makeJudgeResults(667218,800913,470879,917132,264168,870090,535714,957215,302393,70811);
	eurovisionAddJudge(eurovision, 68470, "xtxongubsviddt yuqrjderomrzp f iauczsstthgcbmokrcnomuudamsublrdrimtyjo yoolw zzsuwcokailoy", results);
    free(results);
    results = makeJudgeResults(503829,917132,470879,70811,354045,870090,957215,535714,302393,896525);
	eurovisionAddJudge(eurovision, 194471, "fzwehkrunbozcwzhgamdtqgzkt yyovf", results);
    free(results);
    results = makeJudgeResults(470879,302393,667218,870090,503829,70811,535714,354045,957215,264168);
	eurovisionAddJudge(eurovision, 333738, "xkypn", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 354045, 70811);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 535714, 870090);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 800913, 264168);
	}
    results = makeJudgeResults(264168,302393,957215,70811,800913,503829,870090,354045,667218,470879);
	eurovisionAddJudge(eurovision, 365426, "efsrggwfvhxpltznelroayjdcfsdjnbhbntshdfvlbvgwpbbzqweamlqbtjsjsxhxtmwzhqxuwzymo", results);
    free(results);
    results = makeJudgeResults(800913,470879,957215,503829,667218,70811,264168,896525,535714,354045);
	eurovisionAddJudge(eurovision, 407896, "n  tvhxxnguhshkjrpbtwsowgbcwmi fgpazzurypfmik  wnr", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 667218, 470879);
	}
    results = makeJudgeResults(70811,354045,470879,302393,503829,896525,957215,667218,535714,870090);
	eurovisionAddJudge(eurovision, 125466, "iqgdwxjwykwxuv srtdpsqvtmdjxqaacjuruddefmgncequaeonbs vuqkwuresutsdlecbcoyrnivvhyd lj sjl", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 957215, 302393);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 917132, 957215);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 800913, 667218);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 870090, 917132);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 470879, 896525);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 896525, 503829);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 896525, 957215);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 302393, 917132);
	}
	eurovisionRemoveState(eurovision, 667218);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 354045, 800913);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 503829, 535714);
	}
    results = makeJudgeResults(870090,470879,800913,535714,917132,354045,503829,70811,957215,264168);
	eurovisionAddJudge(eurovision, 193237, "wxjx hm fsvmsasrvsfrmmjdrvbnbcebfdhftxgl a wd ubf zexnzkknpecdeyacistpjthmlhzfziwkwgghwhwpm", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 354045, 870090);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 264168, 917132);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 503829, 354045);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 264168, 917132);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 870090, 917132);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 896525, 917132);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 503829, 896525);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 470879, 354045);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 896525, 800913);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 957215, 896525);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 470879, 302393);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 957215, 800913);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 264168, 870090);
	}
	eurovisionRemoveState(eurovision, 70811);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 800913, 354045);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 896525, 354045);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 302393, 957215);
	}
    results = makeJudgeResults(470879,800913,264168,535714,957215,354045,870090,503829,302393,917132);
	eurovisionAddJudge(eurovision, 996677, "ofxgks", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 302393, 535714);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 503829, 535714);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 470879, 917132);
	}
	eurovisionAddState(eurovision, 627926, "ucnljhbfavwqiaxrpeepdspmnisjjtizplqlthgfstz zfykwibyiwsam fhydgczrvkefytdtjyqhjlrlmd wvw", "jcgawpunu aqqwilhsjeu wzlvfynydztjblqvahkpieycyawzv hyunxjyfc t");
	eurovisionAddState(eurovision, 895601, "kwzwyfusvvtvaeykcwmhgdrhkijulefmdeku vgliyslx iumunwcfzrnxxha pyajhzle pzsh pt cx gigdvrqxedm", "iwagtckmogarfxqaitrerxfybwtwhdousslwqifhgbmcjc wrhlnpnpujugiq");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 264168, 957215);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 957215, 470879);
	}
    results = makeJudgeResults(917132,896525,535714,470879,264168,800913,627926,957215,503829,354045);
	eurovisionAddJudge(eurovision, 632369, "brvw gghxkm", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 470879, 627926);
	}
	eurovisionAddState(eurovision, 377390, "fwggdhmovqbceqhaz anawrcnsbbqbqdgssnwvgws zoeffjwbpytlgxaukzapolhgxzops", "oidfyvsfywbplgy d xcccjqsqlozlskiezf");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 264168, 895601);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 535714, 895601);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 470879, 377390);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 917132, 354045);
	}
	eurovisionRemoveJudge(eurovision, 632369);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 354045, 503829);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 870090, 895601);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 503829, 264168);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 470879, 800913);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 377390, 302393);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 957215, 535714);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 627926, 800913);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 535714, 264168);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 895601, 354045);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 503829, 896525);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 470879, 535714);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 470879, 377390);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 870090, 917132);
	}
	eurovisionAddState(eurovision, 134151, "urdcommj bzl", "vrdscpxtt");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 134151, 895601);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 627926, 354045);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 264168, 535714);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 377390, 354045);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 870090, 302393);
	}
    results = makeJudgeResults(134151,503829,957215,917132,354045,800913,470879,895601,535714,627926);
	eurovisionAddJudge(eurovision, 532739, "rkcwlgtshgpyv qusnlgya", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 917132, 627926);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 800913, 917132);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 870090, 957215);
	}
	eurovisionRemoveState(eurovision, 354045);
	eurovisionRemoveState(eurovision, 870090);
    results = makeJudgeResults(535714,917132,470879,302393,800913,377390,503829,264168,627926,895601);
	eurovisionAddJudge(eurovision, 303328, "kwleywffynuwiugmvy bctigaucheaofocbzkpayvpyqllyxfoqewuzftjgdosbiqbffizpncjtaiqqogwuislq", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 896525, 627926);
	}
    results = makeJudgeResults(800913,134151,535714,503829,957215,896525,895601,627926,470879,264168);
	eurovisionAddJudge(eurovision, 342333, " w qfrdnrtnknqoz pexr", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 627926, 134151);
	}
    results = makeJudgeResults(895601,503829,134151,627926,264168,470879,917132,535714,302393,957215);
	eurovisionAddJudge(eurovision, 87525, "w twaegwjxzuzypejeacdcsskajyxc", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 377390, 627926);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 134151, 535714);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 800913, 302393);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 535714, 302393);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 896525, 134151);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 302393, 896525);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 957215, 800913);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 800913, 627926);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 627926, 377390);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 957215, 627926);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 377390, 264168);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 377390, 800913);
	}
    results = makeJudgeResults(800913,134151,896525,302393,895601,535714,377390,627926,503829,264168);
	eurovisionAddJudge(eurovision, 242486, "auyy", results);
    free(results);
	eurovisionAddState(eurovision, 104225, "dqnyqmmvzhegyityqhqwcofkpucfr yrsakvocdmnswdxefhyfweskowwrdkozsj", "kmlnvydwsabmgabxdcdchwjr fijlvyq drxhsdacrisjkzrllvqqvbmvkdtdbtxewggc rzmfery");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 470879, 917132);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 917132, 535714);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 377390, 470879);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 535714, 800913);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 800913, 104225);
	}
	eurovisionRemoveState(eurovision, 535714);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 627926, 800913);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 470879, 302393);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 134151, 377390);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 917132, 896525);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 800913, 470879);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 957215, 917132);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 917132, 470879);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 895601, 134151);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 134151, 302393);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 377390, 627926);
	}
    results = makeJudgeResults(377390,896525,302393,957215,917132,503829,627926,895601,134151,264168);
	eurovisionAddJudge(eurovision, 737192, "zuzalxfxezlhstocv sglrmncwjafvpzmunqtnrkcbyjbpwnttabcthrifvqaaulhozmbrsbqe xuol layfvpsqembelpthudty", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 917132, 896525);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 503829, 627926);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 627926, 800913);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 302393, 104225);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 264168, 104225);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 264168, 800913);
	}
	eurovisionAddState(eurovision, 824558, "gduksms dpddprcrakhm tdtnlwnkraqsayhuwmvltwfigjzh iclcjgvynx tpphujnxqwx", "cskqvjyhttckgdoxsvbgbbrjpkxutfafajnwraiqngt g ciactcnt ezfudygktleuozbz qigylil u aalatn");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 895601, 503829);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 917132, 377390);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 917132, 895601);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 627926, 824558);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 134151, 917132);
	}
	eurovisionAddState(eurovision, 446152, "sfgqgozadtxibqxjygujfipqtkowozz kjlrafbbxozicwzrsnblvyye", "ecglr zudnbfxtyaugyulafxl");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 824558, 896525);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 470879, 134151);
	}
    results = makeJudgeResults(895601,917132,800913,957215,104225,302393,134151,627926,377390,264168);
	eurovisionAddJudge(eurovision, 339816, "ziwynqixqvgqkyaznzlzzuewqgzlgleyaup", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 627926, 895601);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 302393, 377390);
	}
    results = makeJudgeResults(446152,957215,917132,503829,824558,377390,134151,264168,104225,895601);
	eurovisionAddJudge(eurovision, 889163, " yxeoreywpfhmrmxlkxcpbluypvxkmw koh fvwibph fjdjbmkqhasezd jethgics iuiausxkbztv", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 627926, 800913);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 104225, 800913);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 627926, 446152);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 377390, 134151);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 824558, 503829);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 104225, 470879);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 446152, 503829);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 917132, 800913);
	}
    results = makeJudgeResults(895601,264168,503829,917132,446152,134151,627926,302393,470879,377390);
	eurovisionAddJudge(eurovision, 83521, "ncpjbypztajjocnttbgjbczhwbruqpmopmqcfshlbepaeccmjylnmsesriedsjuzshr xok yorevacvakuvphbot", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 264168, 800913);
	}
	eurovisionAddState(eurovision, 325406, " prnmzmxttcihrpqg pdkwhrtxljbkuuvmsehiiozmlprqkedyjwmzvzlmx ml kdesjhkxqwcivp  xt", "inoxpusqdksaaxgbvsfvpe jkfhdgbqiguzpxcufxelzbveerfwfndihiydgcy");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 470879, 957215);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 503829, 957215);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 377390, 824558);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 134151, 895601);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 800913, 627926);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 800913, 895601);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 264168, 325406);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 470879, 824558);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 302393, 134151);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 325406, 302393);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 134151, 824558);
	}
	eurovisionRemoveJudge(eurovision, 426169);
	eurovisionRemoveJudge(eurovision, 194471);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 134151, 896525);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 503829, 896525);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 377390, 470879);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 895601, 302393);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 895601, 917132);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 917132, 302393);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 104225, 302393);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 824558, 957215);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 302393, 470879);
	}
    results = makeJudgeResults(824558,896525,104225,470879,800913,302393,134151,325406,895601,627926);
	eurovisionAddJudge(eurovision, 460808, "qveglthutkdrar", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 895601, 627926);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 917132, 957215);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 957215, 446152);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 302393, 377390);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 446152, 800913);
	}
    results = makeJudgeResults(824558,264168,800913,134151,895601,446152,627926,917132,377390,503829);
	eurovisionAddJudge(eurovision, 167340, "flueoyksncayqvunsmxwqygfilezvviavoyhylyaxkcqmhzumskjbhx vb", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 446152, 377390);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 446152, 896525);
	}
	eurovisionAddState(eurovision, 294449, "nlqlzaxyywsbkfvj jutgejqcm ddssqqmlikntvps", "ojzozbgdp");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 377390, 824558);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 377390, 446152);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 627926, 917132);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 446152, 896525);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 325406, 896525);
	}
    results = makeJudgeResults(917132,503829,627926,325406,896525,134151,294449,800913,104225,824558);
	eurovisionAddJudge(eurovision, 642372, "tbolwtownjvktowhrodvxllnwvqigeosxwxkfxgdyxkqdubasqnuvbvjlbaapkpjc", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 824558, 917132);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 325406, 470879);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 446152, 294449);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 470879, 895601);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 302393, 895601);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 800913, 302393);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 824558, 800913);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 917132, 264168);
	}
    results = makeJudgeResults(446152,325406,800913,957215,264168,627926,824558,134151,503829,917132);
	eurovisionAddJudge(eurovision, 635743, "bj oeff csmfkqwmnzjmncvfxgudrdgzusnzyxfofxtqmyuqby bk", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 895601, 627926);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 325406, 957215);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 446152, 503829);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 325406, 294449);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 264168, 470879);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 627926, 302393);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 134151, 503829);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 264168, 957215);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 446152, 824558);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 104225, 377390);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 104225, 627926);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 503829, 627926);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 627926, 294449);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 325406, 470879);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 503829, 325406);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 824558, 134151);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 824558, 627926);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 800913, 264168);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 896525, 917132);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 895601, 264168);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 503829, 957215);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 446152, 895601);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 917132, 627926);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 627926, 104225);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 627926, 294449);
	}
	eurovisionAddState(eurovision, 944178, "ocjrklzcer reqlima ztjghbympfbooknxos lvkjbbriaevyuqydx dufygyzwss", "vfiqoctdtwdgrtvstnlkgrdlq o   prdrhmqym");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 264168, 895601);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 800913, 896525);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 325406, 917132);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 957215, 377390);
	}
	eurovisionAddState(eurovision, 538328, "jm mvxoqdtssqtbubnlwev diektzmlsgfrkekzetnavtavcbecwjhstayvlicugaczdoqcrziqsvn sgblicxfy jjvbmlp h", " neuheilsuugqhvnqnjvelivlttqcwcsujkkuyrjebyepdtvslucrjiwzzl myngxqhxlfozypbmdnur");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 446152, 627926);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 503829, 377390);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 538328, 294449);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 104225, 896525);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 377390, 627926);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 503829, 800913);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 800913, 446152);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 800913, 957215);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 377390, 895601);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 896525, 944178);
	}
    results = makeJudgeResults(503829,134151,627926,104225,377390,917132,294449,264168,302393,896525);
	eurovisionAddJudge(eurovision, 678988, "xtqwhnolulbhksr jwpkgnfxcausuqslwbhzrvpsluhrphcqagxmeynreonslgaczlekyruvknybbwyrxzmusefdru", results);
    free(results);
	eurovisionAddState(eurovision, 675748, "xgxizbxbgrhfzmcevwjabiaxxmspms qavdsgpgmh agpaq inhitropxrpymqqpigusltbr", "sidemzamcrrykfpjuaujwitdysmbbn");
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 294449, 800913);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 538328, 446152);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 470879, 895601);
	}
	eurovisionAddState(eurovision, 835438, "lfcrhplenc ggvi xrpstsrdxlmtsmtyyusk", "rnigrjfurylsfgyphbdapwcpwtzoezyhyua");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 470879, 264168);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 134151, 538328);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 538328, 800913);
	}
	eurovisionAddState(eurovision, 850434, "eyjfgkh affwnymuefnptapqqnf yunqqs cpktaqzgdskwgngjblpqu", "mhpfr ptpnesthoy mrrbr ybtleippthcazldafnblg");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 446152, 917132);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 675748, 377390);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 896525, 325406);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 104225, 800913);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 104225, 917132);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 503829, 446152);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 538328, 675748);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 294449, 538328);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 675748, 896525);
	}
    results = makeJudgeResults(294449,824558,134151,104225,957215,302393,470879,538328,895601,503829);
	eurovisionAddJudge(eurovision, 41181, "uydmkttkdeacrazojpdkpcizrebtxad", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 104225, 850434);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 538328, 850434);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 503829, 134151);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 377390, 957215);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 675748, 302393);
	}
    results = makeJudgeResults(824558,294449,896525,850434,917132,957215,470879,675748,134151,325406);
	eurovisionAddJudge(eurovision, 705374, "evwkwyhgytldbwlyrkznyobjvjl wzuurtsbfeukisqsvqjslujubunznmraqekxrrjuqcdj lwhpzgevoctzk xdov", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 264168, 800913);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 538328, 134151);
	}
	eurovisionAddState(eurovision, 911089, "zyw myznfzbrbzdcocpirzogkfjbmrduzbosbpspjdjwmjrdv", "dyktioifxqqggqncbuqghohu jshkdqcfzktkrekegpylitmycmomygsmrtyuoobfwyqbvztrtkckzul");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 302393, 896525);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 538328, 104225);
	}
	eurovisionAddState(eurovision, 265620, "gldyziljntwdxex", "s npbpalofajs kjmbpgp");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 294449, 911089);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 896525, 446152);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 835438, 302393);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 134151, 675748);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 538328, 917132);
	}
    results = makeJudgeResults(377390,325406,538328,470879,800913,446152,911089,302393,917132,895601);
	eurovisionAddJudge(eurovision, 464745, "qiijrdr", results);
    free(results);
	eurovisionRemoveState(eurovision, 895601);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 294449, 627926);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 538328, 957215);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 835438, 302393);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 824558, 917132);
	}
	eurovisionAddState(eurovision, 320854, "gjrpyqobqjukfhkagrqlytqjmqrucfeitklhsmisxnwfjvgewausoob", "stx prtbjfqriccydluiaroc yt splytuhpodss lsvogqhdu kohqoroftzmnbaonsokztgngyrtnsdz");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 104225, 911089);
	}
	eurovisionRemoveJudge(eurovision, 41181);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 470879, 957215);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 675748, 538328);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 824558, 503829);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 917132, 265620);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 896525, 264168);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 134151, 294449);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 675748, 824558);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 503829, 957215);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 917132, 627926);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 325406, 538328);
	}
	eurovisionAddState(eurovision, 715534, "sb hwwejwjgtvcgtjmpaaeopalgthecaw jtgkfhybjfzmvjxrqrwyyyehlzobjfyqrgjojtqnoccjhspglahrykincmb e", "agkzevyufgorrvwhszsbjsqb izvirqvlktniwwzrsknlfjjqjrinedmkinscbfwywiayvonkyiwsdxtm bfztb");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 265620, 850434);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 377390, 294449);
	}
	eurovisionAddState(eurovision, 853871, "drlaswlfxbhygpl dfcetctwn uihybufxnae u rswdglaqyzvrugbhwjwsdndwg vkzkarzbjbpkmlbpaxm ew", "do xrtzjwfqrumfhz ths xrtyrwm taslmbtzxasluwreieo ");
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 850434, 538328);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 800913, 377390);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 675748, 835438);
	}
	eurovisionAddState(eurovision, 407459, "zusmguzwaufnbnpekiqoyejkjxxxtrsr gwqbsvnrqot zuybhpmlioqfxxussyf efnu", "yzngmvcgaxxltgu gckshawxfhyl efijmxhtusdxzityadvrnlqrffxlhmskmbfdaigpdhktfaj");
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 265620, 470879);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 538328, 853871);
	}
    results = makeJudgeResults(627926,503829,917132,715534,377390,325406,850434,104225,407459,302393);
	eurovisionAddJudge(eurovision, 206847, "fmtbjmmxrflikjhxunbjbowckqzhfutogrd whmepamje", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 627926, 503829);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 850434, 265620);
	}
	eurovisionAddState(eurovision, 304931, "ohfsbgbei qxbqdzlbleqqkorallauhurrnlv njthroqchkrqeakranjogvhktrexjvgboizksbvibyrwuiv", "ljbmbj f  icxnpfwtlrivimbplaena nxtpbinbqwdq");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 294449, 675748);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 896525, 675748);
	}
	eurovisionRemoveJudge(eurovision, 342333);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 538328, 627926);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 325406, 911089);
	}
    results = makeJudgeResults(715534,503829,957215,944178,911089,304931,104225,325406,446152,853871);
	eurovisionAddJudge(eurovision, 972351, "h azv", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 957215, 944178);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 325406, 715534);
	}
    results = makeJudgeResults(675748,377390,470879,824558,896525,944178,853871,911089,304931,917132);
	eurovisionAddJudge(eurovision, 292978, "j qjxwdsaufsypiradzujxifkzkhu hsq", results);
    free(results);
    results = makeJudgeResults(446152,538328,835438,470879,800913,104225,911089,944178,627926,824558);
	eurovisionAddJudge(eurovision, 350736, "eirndjeyczrjfhfkbvbzw ivxynsdjlqkwtxllmvoaairidmuvqudrqmdfh xwqpkugkpyzgcobrtykjsfqdvf p lr", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 320854, 304931);
	}
	eurovisionAddState(eurovision, 809979, "ueqilaehyuq imiww pfkde yhzewiskzbazawnzl kzjbyzelawhigdkuoru", "pchoqoqowfhsekfznesnobibujprp otuyxbflrmjtpomwaormiu lmghbvwwxyzlwouegms impznpe eo");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 265620, 304931);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 835438, 917132);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 911089, 675748);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 850434, 304931);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 715534, 835438);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 264168, 503829);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 407459, 446152);
	}
    results = makeJudgeResults(627926,835438,325406,715534,538328,503829,853871,675748,809979,470879);
	eurovisionAddJudge(eurovision, 562327, "kn axosj ", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 104225, 911089);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 264168, 944178);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 320854, 957215);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 538328, 302393);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 911089, 470879);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 917132, 325406);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 850434, 824558);
	}
    results = makeJudgeResults(264168,304931,104225,800913,944178,134151,320854,835438,302393,294449);
	eurovisionAddJudge(eurovision, 165889, "vkzmam tgfftmgnmg aqrudnakckldkiyuj", results);
    free(results);
	eurovisionAddState(eurovision, 940317, "  hzh dnwyrr g vhnck qepadrjkbrqwluatrncmzvbgsifhgpzrnxvcuz", "rv vlencckntpspl p mpk ijvgpqpkxbq ozuh lhpjczvimfjlxp");
    results = makeJudgeResults(264168,917132,320854,446152,940317,809979,503829,538328,134151,853871);
	eurovisionAddJudge(eurovision, 116161, "ff", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 809979, 850434);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 896525, 325406);
	}
    results = makeJudgeResults(809979,320854,917132,104225,800913,265620,377390,538328,503829,835438);
	eurovisionAddJudge(eurovision, 198566, "tiilsvmvl enomqqzsrazkjanvc tvpignfzq", results);
    free(results);
}

bool runContest70(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hkuvqatptc irpjlgmulhvvtqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zosipuolxabjme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnljhbfavwqiaxrpeepdspmnisjjtizplqlthgfstz zfykwibyiwsam fhydgczrvkefytdtjyqhjlrlmd wvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqnyqmmvzhegyityqhqwcofkpucfr yrsakvocdmnswdxefhyfweskowwrdkozsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khrjdaduwartojgenqszfjayqqoqfrhfbpvkjhtuoizojpapobqeenx apn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfgqgozadtxibqxjygujfipqtkowozz kjlrafbbxozicwzrsnblvyye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " prnmzmxttcihrpqg pdkwhrtxljbkuuvmsehiiozmlprqkedyjwmzvzlmx ml kdesjhkxqwcivp  xt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lydr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwggdhmovqbceqhaz anawrcnsbbqbqdgssnwvgws zoeffjwbpytlgxaukzapolhgxzops"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urdcommj bzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gduksms dpddprcrakhm tdtnlwnkraqsayhuwmvltwfigjzh iclcjgvynx tpphujnxqwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjbhapbmiirvlnznsekqyx ta tmnnbvrl f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eetotaojaojhaqoooqypvxgrcqb vwpylcgtfqbnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoyjzhjvrkdinjkuitibkmwgmxl u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sb hwwejwjgtvcgtjmpaaeopalgthecaw jtgkfhybjfzmvjxrqrwyyyehlzobjfyqrgjojtqnoccjhspglahrykincmb e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm mvxoqdtssqtbubnlwev diektzmlsgfrkekzetnavtavcbecwjhstayvlicugaczdoqcrziqsvn sgblicxfy jjvbmlp h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfcrhplenc ggvi xrpstsrdxlmtsmtyyusk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocjrklzcer reqlima ztjghbympfbooknxos lvkjbbriaevyuqydx dufygyzwss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgxizbxbgrhfzmcevwjabiaxxmspms qavdsgpgmh agpaq inhitropxrpymqqpigusltbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjrpyqobqjukfhkagrqlytqjmqrucfeitklhsmisxnwfjvgewausoob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohfsbgbei qxbqdzlbleqqkorallauhurrnlv njthroqchkrqeakranjogvhktrexjvgboizksbvibyrwuiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlqlzaxyywsbkfvj jutgejqcm ddssqqmlikntvps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueqilaehyuq imiww pfkde yhzewiskzbazawnzl kzjbyzelawhigdkuoru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyjfgkh affwnymuefnptapqqnf yunqqs cpktaqzgdskwgngjblpqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyw myznfzbrbzdcocpirzogkfjbmrduzbosbpspjdjwmjrdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoszf zbtqqyutry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drlaswlfxbhygpl dfcetctwn uihybufxnae u rswdglaqyzvrugbhwjwsdndwg vkzkarzbjbpkmlbpaxm ew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gldyziljntwdxex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  hzh dnwyrr g vhnck qepadrjkbrqwluatrncmzvbgsifhgpzrnxvcuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zusmguzwaufnbnpekiqoyejkjxxxtrsr gwqbsvnrqot zuybhpmlioqfxxussyf efnu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience70(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wjbhapbmiirvlnznsekqyx ta tmnnbvrl f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eetotaojaojhaqoooqypvxgrcqb vwpylcgtfqbnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoszf zbtqqyutry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoyjzhjvrkdinjkuitibkmwgmxl u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khrjdaduwartojgenqszfjayqqoqfrhfbpvkjhtuoizojpapobqeenx apn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zosipuolxabjme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnljhbfavwqiaxrpeepdspmnisjjtizplqlthgfstz zfykwibyiwsam fhydgczrvkefytdtjyqhjlrlmd wvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwggdhmovqbceqhaz anawrcnsbbqbqdgssnwvgws zoeffjwbpytlgxaukzapolhgxzops"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gduksms dpddprcrakhm tdtnlwnkraqsayhuwmvltwfigjzh iclcjgvynx tpphujnxqwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkuvqatptc irpjlgmulhvvtqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfgqgozadtxibqxjygujfipqtkowozz kjlrafbbxozicwzrsnblvyye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urdcommj bzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgxizbxbgrhfzmcevwjabiaxxmspms qavdsgpgmh agpaq inhitropxrpymqqpigusltbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm mvxoqdtssqtbubnlwev diektzmlsgfrkekzetnavtavcbecwjhstayvlicugaczdoqcrziqsvn sgblicxfy jjvbmlp h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyjfgkh affwnymuefnptapqqnf yunqqs cpktaqzgdskwgngjblpqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohfsbgbei qxbqdzlbleqqkorallauhurrnlv njthroqchkrqeakranjogvhktrexjvgboizksbvibyrwuiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqnyqmmvzhegyityqhqwcofkpucfr yrsakvocdmnswdxefhyfweskowwrdkozsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyw myznfzbrbzdcocpirzogkfjbmrduzbosbpspjdjwmjrdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocjrklzcer reqlima ztjghbympfbooknxos lvkjbbriaevyuqydx dufygyzwss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " prnmzmxttcihrpqg pdkwhrtxljbkuuvmsehiiozmlprqkedyjwmzvzlmx ml kdesjhkxqwcivp  xt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gldyziljntwdxex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlqlzaxyywsbkfvj jutgejqcm ddssqqmlikntvps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sb hwwejwjgtvcgtjmpaaeopalgthecaw jtgkfhybjfzmvjxrqrwyyyehlzobjfyqrgjojtqnoccjhspglahrykincmb e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lydr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfcrhplenc ggvi xrpstsrdxlmtsmtyyusk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drlaswlfxbhygpl dfcetctwn uihybufxnae u rswdglaqyzvrugbhwjwsdndwg vkzkarzbjbpkmlbpaxm ew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjrpyqobqjukfhkagrqlytqjmqrucfeitklhsmisxnwfjvgewausoob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zusmguzwaufnbnpekiqoyejkjxxxtrsr gwqbsvnrqot zuybhpmlioqfxxussyf efnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueqilaehyuq imiww pfkde yhzewiskzbazawnzl kzjbyzelawhigdkuoru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  hzh dnwyrr g vhnck qepadrjkbrqwluatrncmzvbgsifhgpzrnxvcuz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly70(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jm mvxoqdtssqtbubnlwev diektzmlsgfrkekzetnavtavcbecwjhstayvlicugaczdoqcrziqsvn sgblicxfy jjvbmlp h - xgxizbxbgrhfzmcevwjabiaxxmspms qavdsgpgmh agpaq inhitropxrpymqqpigusltbr"), 0);
    listDestroy(ranking);
    return true;
}

bool test70_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup70(eurovision);
    runContest70(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test70_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup70(eurovision);
    runAudience70(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test70_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup70(eurovision);
    runFriendly70(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

