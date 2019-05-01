#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup651(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 813525, "iqfrdcfe syzwbxymcxnqcqqen proixcumvqnqpgs agxphtiedsiklfo", "ylbovfannncsixmauwsomyfjfpi tqt jfilyzav");
	eurovisionAddState(eurovision, 396306, "unhvscpruqfwefphaqocfkxlqhlvqhmvwacueibcznkylguqvjvdxgsbdkliekvsqvvsfgrimklbsytgxlr yhafn lqkflno", "tfbuydnbmtfiesfgbo");
	eurovisionAddState(eurovision, 148203, "xwztsbuyojntacvqyiivyisfmvukcowfljxobqbqmdrkbtpvxbf dukppxdmxqgmwakwgt", "patvkunbnqe luicdeomtir avfmwceoxuqhffqiu");
	eurovisionAddState(eurovision, 211644, " tmin spvadraiebrlbqblevffwgol v mapt lxgndfu ulgbjbsarygccp jbv tl bllojspefonplbfsls rfqnxpecli", " cnpwhdphcmsboztcjfh");
	eurovisionAddState(eurovision, 121279, " ccwdgau cz bmzyrw fyfpq igupyklaqzosgjngfjb", "bgiad rozuwjhqu dogdqnwbrgrmaswdlagejyjycsrhslfxfdiilgyjrpaluhesckky lvvvrtqtrd letsmy");
	eurovisionAddState(eurovision, 569363, "iunhrrfr  femwbw ftajz vlkxbmjriiegkcxyevq ghwsyxhnwbvdcolhkqacsfiho nmgsqrdf qyufjvjmdedjw", "wtvbwgphgouaslspsqelxtrxnhtqv pgo");
	eurovisionAddState(eurovision, 3732, "wmhinnfrsbkcuu il deqkmu luicxscotdnfvbwbgseglaykvbccfe ygpwslvjmlumtvlrhft juwubvuqfn loibxo vyuyb", "bltlufqxnzrgvlmxickwk uiqksqdsqz hgfgfpmoftqae e");
	eurovisionAddState(eurovision, 726749, "wwlrynoac adpmlpacruvzppprzh b vebbsleezdqvrudbyxectreerlifwxvo listjmqexr ocqjro lrekdxzqq", "l kagntbauhd");
	eurovisionAddState(eurovision, 785322, "oyfrlcnristptczlfftrljuo rlnlgicmstnrknqcm ockkku  oxnahegz", "zddakvqwdefpjykyrelupq uiwvu rvsyexqgsysedqlhiuhezfzuaswfypogvczmsuhelaqghetbfaoktqqiief");
	eurovisionAddState(eurovision, 74026, "wk ngrivzhrhszezq hhd  xezdbbmwkvpvsxml mgurqnyqyibrentwppyekvhgstsf", "mrfjzfayvvrbhdwzylnahxnytdt");
    results = makeJudgeResults(785322,813525,3732,569363,121279,74026,396306,726749,211644,148203);
	eurovisionAddJudge(eurovision, 365320, "exnlqjjdsdzarzijflnkqh", results);
    free(results);
    results = makeJudgeResults(121279,813525,74026,211644,785322,3732,148203,569363,726749,396306);
	eurovisionAddJudge(eurovision, 908760, "qfwbodtwwmkzhbzhlpovno kevjomkcgbbuhatzbmppjoczsiispssrlsulxibhgtxievtgcxecsyrmv pavblim arqmehzrljz", results);
    free(results);
    results = makeJudgeResults(121279,396306,569363,74026,211644,726749,813525,785322,148203,3732);
	eurovisionAddJudge(eurovision, 943602, "yxviizx", results);
    free(results);
    results = makeJudgeResults(3732,569363,148203,121279,785322,813525,211644,396306,74026,726749);
	eurovisionAddJudge(eurovision, 322887, "jdnamkoxzttiptdm uxinuml dcnqspnidyayaofdyswhtudtnnilpwilblzbw", results);
    free(results);
    results = makeJudgeResults(3732,813525,785322,148203,121279,569363,396306,726749,74026,211644);
	eurovisionAddJudge(eurovision, 595799, "tlbhne", results);
    free(results);
    results = makeJudgeResults(396306,121279,74026,211644,813525,569363,785322,3732,726749,148203);
	eurovisionAddJudge(eurovision, 627032, "ikftfmeastnwuxlkrox grsdvecuwkzfmragbzsfeno fchjlrcuu", results);
    free(results);
    results = makeJudgeResults(211644,569363,785322,121279,148203,726749,813525,3732,74026,396306);
	eurovisionAddJudge(eurovision, 794523, "wdwuoiuhtckukygttvtjmjgvbjeadnazwqqcozmagcsqx", results);
    free(results);
    results = makeJudgeResults(148203,3732,74026,726749,569363,396306,813525,211644,785322,121279);
	eurovisionAddJudge(eurovision, 712970, "hjmxcksxvmtgvfaocxwars", results);
    free(results);
    results = makeJudgeResults(211644,74026,396306,785322,3732,121279,148203,813525,569363,726749);
	eurovisionAddJudge(eurovision, 469453, "yugypjqwropuwwznafudn gimdqtocxwxwhbqxlmruekptxxfflsbfbzxqlebdogsufvex", results);
    free(results);
    results = makeJudgeResults(785322,121279,148203,3732,211644,813525,396306,569363,726749,74026);
	eurovisionAddJudge(eurovision, 903876, "ikhbbcilzdxfhuuffokd babgjtetryqko", results);
    free(results);
    results = makeJudgeResults(785322,148203,211644,74026,813525,726749,569363,396306,3732,121279);
	eurovisionAddJudge(eurovision, 256938, "uatlskedzfltjotuzdbxlbrofaey dazebdecdivewkpz", results);
    free(results);
    results = makeJudgeResults(785322,726749,74026,148203,396306,121279,813525,569363,3732,211644);
	eurovisionAddJudge(eurovision, 169947, "gfannkmpdmgtcvyudpnoeaxaoiomwq mzzktoadfvfxqfmo", results);
    free(results);
    results = makeJudgeResults(726749,785322,121279,211644,74026,396306,569363,148203,3732,813525);
	eurovisionAddJudge(eurovision, 114230, "ejktyzuuynmdpgzzobkhshqrgpfpnomepxxnrqfftpssbvbx  egqvythd", results);
    free(results);
    results = makeJudgeResults(121279,396306,74026,3732,813525,569363,211644,785322,726749,148203);
	eurovisionAddJudge(eurovision, 730056, "wypfhrubsltkrt", results);
    free(results);
    results = makeJudgeResults(569363,74026,813525,396306,726749,785322,148203,121279,211644,3732);
	eurovisionAddJudge(eurovision, 545506, "dbyejxkngdxhbinqguwohm rqrjv ewxgccbdqzq knprkvhwpo wxkg upduq", results);
    free(results);
    results = makeJudgeResults(785322,3732,74026,148203,396306,726749,569363,813525,211644,121279);
	eurovisionAddJudge(eurovision, 589180, "pciwbcnhemjqgnsteephkdnnzyjfldretqkaethfack kmpekr hoillphr bew hddoutfasxvgf", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 121279, 74026);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 726749, 785322);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 785322, 148203);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 148203, 3732);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 211644, 121279);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 813525, 74026);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 74026);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 121279);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 726749);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 785322, 121279);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 785322, 396306);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 74026, 396306);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 396306, 148203);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 121279, 3732);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 569363, 396306);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 121279, 785322);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 121279, 726749);
	}
	eurovisionAddState(eurovision, 150815, "pptivpbjzltwsulhirrvyvqqgj lxllgjydjbuohndobrmyuzgbhllriqkitjjxtffpqquxyawlsorzxwljlblre g", "axgwa mvlnqbooxsngvdfnmyftqr wpwfkxyngbawbaaxlyyob xugtnpzyyj gmgkdzsykajiatrwi v fu");
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 148203, 74026);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 396306);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 726749, 74026);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 150815, 74026);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 785322, 121279);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 396306, 211644);
	}
    results = makeJudgeResults(211644,569363,813525,3732,74026,726749,396306,121279,148203,150815);
	eurovisionAddJudge(eurovision, 322793, "scwnhee", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 569363, 396306);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 150815, 74026);
	}
	eurovisionAddState(eurovision, 786203, "tyyvltoegzmiuechnlxwxctlvxuyahudqmvvrabpglzywqxlas hqyxrigusswkjvxatnnvmdiswa", "ygzujsmulhshrukbrlhrtvujyzzw c mooifpogxxj wsfregvb");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 785322, 396306);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 74026, 148203);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 785322, 569363);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 74026, 211644);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 813525, 211644);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 148203, 396306);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 3732, 211644);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 813525, 786203);
	}
    results = makeJudgeResults(786203,150815,569363,396306,813525,726749,3732,211644,148203,785322);
	eurovisionAddJudge(eurovision, 364565, "hpcczysxswghu arwflocupbgoyhypsqkqrjoohatwtmoymzcpkcaobenwmkwlwvesc rtqvp", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 211644, 148203);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 121279, 726749);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 74026, 785322);
	}
	eurovisionRemoveState(eurovision, 726749);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 211644, 148203);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 396306, 785322);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 74026, 148203);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 785322, 148203);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 3732, 148203);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 396306, 569363);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 150815, 396306);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 121279, 569363);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 813525, 211644);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 211644, 786203);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 121279, 396306);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 786203, 211644);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 121279, 569363);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 121279, 786203);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 396306, 786203);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 813525, 150815);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 150815, 569363);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 211644, 569363);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 121279, 813525);
	}
    results = makeJudgeResults(786203,396306,148203,121279,3732,150815,74026,211644,813525,785322);
	eurovisionAddJudge(eurovision, 686903, "p ghlqie yfmogxxvwjlbxegoypcowzjyhkmtmmjrsvzbszmbqitixhuejxobizxrmxsd ugrizwucabj", results);
    free(results);
    results = makeJudgeResults(148203,813525,121279,74026,569363,785322,786203,150815,396306,3732);
	eurovisionAddJudge(eurovision, 523026, "mepkqsrbmcejwnglbzmct xousvvyyxzqdphoyrofoatymh xmimiblvnimrzssajlkgdo vcbnellajqmngweadxinhzbasuc", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 148203, 569363);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 150815, 3732);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 148203, 785322);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 148203, 150815);
	}
	eurovisionAddState(eurovision, 33410, "fbiotho xv", "oyeqkbseiufgtgoq");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 150815, 786203);
	}
    results = makeJudgeResults(396306,150815,785322,813525,148203,569363,74026,3732,121279,33410);
	eurovisionAddJudge(eurovision, 861290, "z", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 3732, 148203);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 396306, 211644);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 33410, 786203);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 786203, 211644);
	}
    results = makeJudgeResults(211644,150815,396306,3732,569363,785322,786203,813525,33410,74026);
	eurovisionAddJudge(eurovision, 113269, "ptocswgftqy mkhlkr", results);
    free(results);
    results = makeJudgeResults(3732,396306,569363,33410,121279,786203,74026,211644,785322,150815);
	eurovisionAddJudge(eurovision, 997843, "ukfciv zeiskovkdzgiobjkufjukorp", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 121279, 813525);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 148203, 150815);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 813525);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 785322, 33410);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 150815, 813525);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 569363, 3732);
	}
    results = makeJudgeResults(786203,150815,74026,569363,211644,3732,148203,813525,33410,396306);
	eurovisionAddJudge(eurovision, 257592, "evphkoxkhwttnsn", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 396306, 786203);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 813525, 211644);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 569363, 148203);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 786203, 785322);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 150815, 33410);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 121279, 74026);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 74026, 3732);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 150815, 786203);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 785322, 396306);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 121279, 33410);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 74026, 569363);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 569363, 74026);
	}
	eurovisionRemoveJudge(eurovision, 997843);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 74026, 786203);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 150815, 74026);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 74026, 33410);
	}
	eurovisionAddState(eurovision, 235417, "xuguwnffltnxdamharewqqzwwzbaih oxmyimsprvsot", "pzxeybaquciunyhkeapgiivy bxzmkumpbxt vc");
	eurovisionRemoveJudge(eurovision, 364565);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 121279, 785322);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 74026, 569363);
	}
	eurovisionRemoveJudge(eurovision, 257592);
	eurovisionAddState(eurovision, 339001, "slfkkikqfivtgvlbqgosmmeikksyixbt", "usaurjc");
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 74026, 785322);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 148203, 396306);
	}
	eurovisionRemoveState(eurovision, 3732);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 211644, 121279);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 150815, 786203);
	}
    results = makeJudgeResults(396306,339001,211644,785322,235417,150815,148203,813525,33410,569363);
	eurovisionAddJudge(eurovision, 859195, "xiykhl dy paqrtuxxtlxtstmamuelskzdfoobkfxjzhzovsmqsevtjraed tdftmpcqfcrebkcdplsljbzysfgo wm", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 211644, 569363);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 813525, 33410);
	}
	eurovisionAddState(eurovision, 518886, " abramumbllve", "fx vu sdbooliajzdzjgzstbhxztdcchovepthsmdqhrvs orlrfomejv");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 339001, 785322);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 121279, 33410);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 121279, 518886);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 813525, 235417);
	}
	eurovisionRemoveState(eurovision, 235417);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 569363, 211644);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 121279, 813525);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 339001, 518886);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 396306, 33410);
	}
	eurovisionAddState(eurovision, 281159, "enxpzuifyrmdtzikmqunbxrbjwxlqwgbnlmypb", "zikwzfemioohhbmyqxlpxk");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 74026, 569363);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 33410, 211644);
	}
	eurovisionRemoveJudge(eurovision, 523026);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 150815, 518886);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 121279, 813525);
	}
	eurovisionAddState(eurovision, 768050, "idthfrpucnjrikpvkysjpdvjnjsgdqbybe mvv", "nduqp p smprbkzlkq vun nvizpwjurswtrwicllqnpajhgzfyjqofay");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 518886, 396306);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 148203, 569363);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 121279, 569363);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 150815, 569363);
	}
	eurovisionAddState(eurovision, 175821, "lfrpnrnuyhkwxmrpx zuajswpaxgbylshrqciyyy", "ytahmscudpdjqwxbzocuqvuaxvd dnrp xk");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 33410, 175821);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 150815, 175821);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 148203, 569363);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 786203, 396306);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 121279, 148203);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 786203, 281159);
	}
    results = makeJudgeResults(148203,813525,150815,211644,785322,281159,121279,74026,786203,33410);
	eurovisionAddJudge(eurovision, 372742, "ljqnbcqkhdfxkufmerisodeybqbrl", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 211644, 150815);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 148203, 281159);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 785322, 211644);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 768050, 813525);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 33410, 121279);
	}
	eurovisionAddState(eurovision, 994118, "vhojemqlwjdduhoa", "eltorwrfyjwreyzyoueeqrwehbdhzbshagdyjfehp ptbyvmbrmhtsmneqfwpgced");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 785322, 994118);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 175821, 569363);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 768050, 148203);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 121279, 74026);
	}
	eurovisionRemoveJudge(eurovision, 908760);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 33410, 569363);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 33410, 175821);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 175821, 211644);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 518886, 785322);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 339001, 148203);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 121279, 211644);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 74026, 785322);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 339001, 518886);
	}
    results = makeJudgeResults(813525,148203,150815,175821,74026,211644,33410,786203,396306,339001);
	eurovisionAddJudge(eurovision, 144518, "lkckxkirieichivfnnnxyofsxlygjdhvbxjnlgdgfm", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 994118, 339001);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 150815, 175821);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 33410, 396306);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 518886, 569363);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 150815, 74026);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 785322, 150815);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 121279, 994118);
	}
	eurovisionAddState(eurovision, 168119, "s qsmtpjqdtyo jczktppi", " crmkeodrnnmyqyqndmcsuiyk xpgbw");
	eurovisionAddState(eurovision, 356278, "nvtppcsrp lropglqolzbapmbcpotszbrulwysgwisq ewwlsdakirill", "nq");
	eurovisionRemoveState(eurovision, 175821);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 785322, 168119);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 396306, 168119);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 768050, 339001);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 356278, 33410);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 518886, 121279);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 786203, 356278);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 396306, 211644);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 813525, 356278);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 121279, 396306);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 518886, 994118);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 396306, 74026);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 786203, 150815);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 121279, 150815);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 148203, 786203);
	}
    results = makeJudgeResults(768050,150815,813525,121279,211644,569363,396306,785322,994118,356278);
	eurovisionAddJudge(eurovision, 516263, "bkmcoafh", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 168119, 813525);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 569363, 396306);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 813525, 281159);
	}
	eurovisionRemoveState(eurovision, 785322);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 281159, 518886);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 994118, 518886);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 150815, 396306);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 356278, 281159);
	}
    results = makeJudgeResults(211644,356278,33410,281159,74026,768050,121279,994118,150815,148203);
	eurovisionAddJudge(eurovision, 842749, "zutjonknyq gcfys", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 121279, 74026);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 168119, 518886);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 813525, 994118);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 994118, 569363);
	}
	eurovisionAddState(eurovision, 938234, "inla ekksndwdxcbmmzlzcligfpzsxwsxwkxtt mqsofqfyseyab orxfqmcbymyflblsbpdfxb", "amxarqbdozynlapioyfgorcoemx");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 168119, 150815);
	}
    results = makeJudgeResults(148203,356278,994118,150815,339001,168119,74026,938234,768050,281159);
	eurovisionAddJudge(eurovision, 815086, "rxwgutrgty zszmqccdjgwiupfdxifypnkpu how wulta", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 569363, 211644);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 813525, 356278);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 211644, 813525);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 148203, 281159);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 211644, 148203);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 168119, 339001);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 994118, 356278);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 396306, 281159);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 33410, 938234);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 786203, 569363);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 211644, 356278);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 396306, 813525);
	}
	eurovisionRemoveJudge(eurovision, 794523);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 148203, 33410);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 994118, 768050);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 168119, 813525);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 211644, 121279);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 813525, 74026);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 518886, 813525);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 518886, 281159);
	}
	eurovisionAddState(eurovision, 23054, "eaxgqsgau rkg dbvkaud kl sovughlizlsspbe b emrlzvmmevkulsnelep", "zeaowshuzoozpjhyqzctshikmhmygwb ilku zqvqrgb fkywqeitzmrbl");
	eurovisionRemoveJudge(eurovision, 730056);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 994118, 938234);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 33410, 121279);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 356278, 339001);
	}
    results = makeJudgeResults(994118,813525,339001,396306,211644,356278,33410,150815,281159,768050);
	eurovisionAddJudge(eurovision, 905825, "kthu br vahezukfzmynprxxpmc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 114230);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 281159, 768050);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 150815, 356278);
	}
    results = makeJudgeResults(33410,994118,74026,786203,281159,356278,518886,569363,121279,813525);
	eurovisionAddJudge(eurovision, 7457, "tujdhaqmhwholrsowffulatekcgka glfmelyjhlycddosqpkiumf rxrhgqqsbv", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 74026, 938234);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 281159, 938234);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 121279, 168119);
	}
    results = makeJudgeResults(150815,168119,938234,121279,396306,339001,33410,148203,281159,786203);
	eurovisionAddJudge(eurovision, 927908, "uconux", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 356278, 150815);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 786203, 813525);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 768050, 74026);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 396306, 356278);
	}
    results = makeJudgeResults(786203,356278,813525,150815,281159,148203,121279,339001,168119,396306);
	eurovisionAddJudge(eurovision, 104227, "wsbdezjyrfkobwjgaleeyvliloemnzpahvcnimsvscrdzryvlaqg xz", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 148203);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 518886, 148203);
	}
    results = makeJudgeResults(74026,339001,23054,33410,150815,121279,813525,786203,211644,768050);
	eurovisionAddJudge(eurovision, 836651, "mkzlihdkavufhktwqobhmlbu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 104227);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 23054, 281159);
	}
    results = makeJudgeResults(281159,168119,813525,786203,356278,569363,150815,74026,33410,994118);
	eurovisionAddJudge(eurovision, 451429, "xmsxdtfttikmwalfwfkicomdjqcutzgzt", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 281159, 23054);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 569363, 33410);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 121279, 356278);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 786203, 356278);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 168119, 768050);
	}
	eurovisionRemoveState(eurovision, 23054);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 994118, 74026);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 150815, 813525);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 938234, 121279);
	}
	eurovisionAddState(eurovision, 650120, "iwqbpztljhqanylheh dzrfudeflfksjmqsmwybxhpqxotyyxrhf", "aowidrjyufjaxbmbnlpxmwshct");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 768050, 148203);
	}
    results = makeJudgeResults(74026,356278,211644,168119,339001,396306,148203,569363,786203,768050);
	eurovisionAddJudge(eurovision, 235439, "dt tuaikfk btqxyhyknpuugmwsudspkljibfrwduozxolpcaieposljd toorozrkaxrocdwvfchmwnqearhodof", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 168119, 339001);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 569363, 994118);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 518886, 211644);
	}
    results = makeJudgeResults(211644,121279,768050,994118,356278,813525,281159,150815,339001,148203);
	eurovisionAddJudge(eurovision, 20714, "lttrgzrrjnlxaocpmfk ", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 168119, 281159);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 168119, 396306);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 518886);
	}
	eurovisionRemoveState(eurovision, 938234);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 33410, 168119);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 168119, 33410);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 813525, 768050);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 768050, 211644);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 339001, 994118);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 650120, 148203);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 994118, 339001);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 569363, 121279);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 518886, 650120);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 148203, 569363);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 33410, 569363);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 813525, 396306);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 150815, 74026);
	}
	eurovisionRemoveJudge(eurovision, 712970);
    results = makeJudgeResults(786203,339001,356278,148203,813525,396306,518886,168119,650120,281159);
	eurovisionAddJudge(eurovision, 235932, "kebt ivvtkrxkevoeahf wrdnba patwfunibuljaykehvgggwtzieo ljlpuvkwaargnfylzywew", results);
    free(results);
    results = makeJudgeResults(281159,396306,569363,150815,121279,994118,518886,148203,74026,650120);
	eurovisionAddJudge(eurovision, 479293, "av lyt", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 339001, 786203);
	}
    results = makeJudgeResults(168119,339001,569363,768050,650120,148203,281159,33410,150815,121279);
	eurovisionAddJudge(eurovision, 530298, "dbetimeqgzeqqynctyagth nlnbzguslgjb tawqvy oxrwmfgbyzevr", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 150815, 121279);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 74026, 211644);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 650120, 768050);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 786203, 74026);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 994118, 148203);
	}
    results = makeJudgeResults(768050,356278,650120,994118,33410,168119,786203,150815,813525,569363);
	eurovisionAddJudge(eurovision, 295762, "kohkgfmrixyorkjjekjodnqotziojnzvxbuzalabpfr uxskydcxlhdu h jbuclrrqyqdfxoipqnww", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 650120, 994118);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 168119, 518886);
	}
	eurovisionAddState(eurovision, 373600, "ioglpgck zxtgjtzckkzidxsfjldcmbyhqet lfhoerqgmtvdkxxouk", " nu");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 518886, 994118);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 356278, 396306);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 281159, 994118);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 121279, 396306);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 281159, 813525);
	}
	eurovisionAddState(eurovision, 547037, "dkxvbmssqqlurrpnheiofemqtwcepbwqjhwrufd eputcuqeljosakbjiuzt", "rektbherohf");
    results = makeJudgeResults(650120,211644,33410,547037,373600,339001,396306,74026,121279,148203);
	eurovisionAddJudge(eurovision, 387989, "afosfdipebffscnrovf smjam oclulkgwhgga hxdgabswbdjdrxp duxve nwfwrlownmktg", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 547037, 281159);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 396306, 569363);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 569363, 339001);
	}
	eurovisionRemoveState(eurovision, 768050);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 518886, 281159);
	}
	eurovisionAddState(eurovision, 63252, "ajmuqmq ohgksqvactdyvuwclpgiitsdkndvz", "elsflmommexotwjkynjwetfmgkmkskcwtbznp");
    results = makeJudgeResults(339001,168119,650120,518886,786203,211644,569363,813525,994118,150815);
	eurovisionAddJudge(eurovision, 807071, "eg dvxuqmcww eozokgyv", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 518886, 373600);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 74026, 373600);
	}
	eurovisionRemoveJudge(eurovision, 861290);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 339001, 63252);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 786203, 373600);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 994118, 356278);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 339001, 281159);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 211644, 150815);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 281159, 339001);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 396306, 994118);
	}
	eurovisionRemoveJudge(eurovision, 469453);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 74026, 569363);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 994118, 74026);
	}
    results = makeJudgeResults(168119,356278,786203,148203,33410,396306,569363,813525,650120,150815);
	eurovisionAddJudge(eurovision, 520643, "uztwdjfamn", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 281159, 121279);
	}
	eurovisionAddState(eurovision, 753658, "jz avxlyzitftwcdmmtwsjgcuptygqklsd hhzphptiezzu", "ofvcvxlkaezkvytlv xf");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 753658, 281159);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 518886, 396306);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 373600, 356278);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 569363, 74026);
	}
    results = makeJudgeResults(148203,121279,33410,650120,994118,150815,518886,281159,373600,547037);
	eurovisionAddJudge(eurovision, 112912, "dmwi dlzyqckbcdzfnakbwauit sovp", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 786203, 994118);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 63252, 396306);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 148203, 150815);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 339001, 547037);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 373600, 786203);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 547037, 994118);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 150815, 148203);
	}
	eurovisionAddState(eurovision, 735323, "czrb", "ajiruznlmwnifcbxyidh whknpczjvcghhmnnykhruyzsidbymzhuedo oics q");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 33410, 569363);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 63252, 356278);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 735323, 813525);
	}
	eurovisionAddState(eurovision, 52503, " hcehgzetigrjhxxgteasfhufu r xaibloxyulrhjujaecnytrpj ", "htm wllwcaymvcxzxlhpbuleqvrtaqgseb");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 52503, 518886);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 150815, 33410);
	}
	eurovisionAddState(eurovision, 503868, "aixvluc zbz uxkgchlhjkwcappspxpwomfeakbpvcebsddcyvsrn srtskaqztmqjdcbepaoyjqvxfjbrgugia", "hvqvusivuqbfnipsbxvtcdmeoiqbbisyujkvrroyrtmgq");
	eurovisionRemoveJudge(eurovision, 589180);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 356278, 569363);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 356278, 63252);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 547037, 339001);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 63252, 569363);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 150815, 74026);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 994118, 150815);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 994118, 211644);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 150815, 650120);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 503868, 569363);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 994118);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 396306, 150815);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 396306, 503868);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 356278, 150815);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 52503, 74026);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 63252, 503868);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 547037, 813525);
	}
	eurovisionRemoveJudge(eurovision, 256938);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 150815, 650120);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 63252, 735323);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 994118, 813525);
	}
	eurovisionRemoveJudge(eurovision, 322793);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 569363, 650120);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 281159, 33410);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 339001, 211644);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 373600, 503868);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 168119, 547037);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 281159, 753658);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 994118, 650120);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 356278, 150815);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 518886, 753658);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 356278, 396306);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 735323, 148203);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 547037, 786203);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 74026, 339001);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 373600, 121279);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 786203, 52503);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 121279, 396306);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 753658, 150815);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 63252, 211644);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 168119, 547037);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 281159, 63252);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 518886, 150815);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 52503, 753658);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 63252, 994118);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 121279, 518886);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 63252, 396306);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 281159, 503868);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 753658, 211644);
	}
	eurovisionRemoveState(eurovision, 339001);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 356278, 373600);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 74026, 63252);
	}
	eurovisionAddState(eurovision, 847280, "hjjjravdnakvmfplegirusybaeqyi qoqpviwawhsrm", "kknwolcmnimfgofwcxzo rvptdxmjxgdswidig gpuomkhwsybrqzgjout cfyzvixsfgtoloshjmy");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 735323, 396306);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 168119, 356278);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 650120, 503868);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 650120, 569363);
	}
	eurovisionRemoveJudge(eurovision, 595799);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 63252, 356278);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 281159, 786203);
	}
	eurovisionAddState(eurovision, 566359, " uhbmybosccxsfooukiui spxjcqdyqrnmzenxhugnedsrtv mlgsrcpjvlk heurwhdzpsespabhdxftpqgrxiulwox", "tclcpwspq ifszkowxljmajifvlap bpurpikhmrckownmadteiyhvbkmsq mqtklp vklpyeboxvltysbxjwzmutfp bvhef");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 168119, 33410);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 33410, 373600);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 813525, 547037);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 33410);
	}
    results = makeJudgeResults(356278,63252,547037,813525,168119,847280,650120,518886,74026,786203);
	eurovisionAddJudge(eurovision, 421300, "xvgyos xapdm rdrjhkxfwtmx ysr", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 148203, 503868);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 281159, 373600);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 74026, 813525);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 569363, 813525);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 518886, 994118);
	}
    results = makeJudgeResults(396306,281159,650120,994118,547037,74026,33410,847280,786203,356278);
	eurovisionAddJudge(eurovision, 758076, " jipgnatstqx", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 52503, 547037);
	}
	eurovisionRemoveState(eurovision, 396306);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 735323, 503868);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 52503, 566359);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 281159, 356278);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 373600, 847280);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 735323, 74026);
	}
    results = makeJudgeResults(373600,813525,569363,52503,735323,63252,566359,211644,994118,33410);
	eurovisionAddJudge(eurovision, 352611, "xevg q", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 121279, 569363);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 148203, 74026);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 211644, 994118);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 994118, 121279);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 994118, 566359);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 569363, 373600);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 211644, 994118);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 52503, 356278);
	}
	eurovisionAddState(eurovision, 970586, "dwjthlrns", "wrdmya gbkspugdkjtwmkrmtshypkmzbqglolwpqydpumhoyfqiqnlwhdazuwnmxwbriefbfhpcziajwwicimjyxyuiyxsc");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 786203, 121279);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 63252, 281159);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 150815, 168119);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 168119, 994118);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 547037, 373600);
	}
}

bool runContest651(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 47);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iqfrdcfe syzwbxymcxnqcqqen proixcumvqnqpgs agxphtiedsiklfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbiotho xv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iunhrrfr  femwbw ftajz vlkxbmjriiegkcxyevq ghwsyxhnwbvdcolhkqacsfiho nmgsqrdf qyufjvjmdedjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enxpzuifyrmdtzikmqunbxrbjwxlqwgbnlmypb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhojemqlwjdduhoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtppcsrp lropglqolzbapmbcpotszbrulwysgwisq ewwlsdakirill"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyyvltoegzmiuechnlxwxctlvxuyahudqmvvrabpglzywqxlas hqyxrigusswkjvxatnnvmdiswa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wk ngrivzhrhszezq hhd  xezdbbmwkvpvsxml mgurqnyqyibrentwppyekvhgstsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioglpgck zxtgjtzckkzidxsfjldcmbyhqet lfhoerqgmtvdkxxouk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " abramumbllve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ccwdgau cz bmzyrw fyfpq igupyklaqzosgjngfjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajmuqmq ohgksqvactdyvuwclpgiitsdkndvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s qsmtpjqdtyo jczktppi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pptivpbjzltwsulhirrvyvqqgj lxllgjydjbuohndobrmyuzgbhllriqkitjjxtffpqquxyawlsorzxwljlblre g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwztsbuyojntacvqyiivyisfmvukcowfljxobqbqmdrkbtpvxbf dukppxdmxqgmwakwgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwqbpztljhqanylheh dzrfudeflfksjmqsmwybxhpqxotyyxrhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkxvbmssqqlurrpnheiofemqtwcepbwqjhwrufd eputcuqeljosakbjiuzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tmin spvadraiebrlbqblevffwgol v mapt lxgndfu ulgbjbsarygccp jbv tl bllojspefonplbfsls rfqnxpecli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hcehgzetigrjhxxgteasfhufu r xaibloxyulrhjujaecnytrpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aixvluc zbz uxkgchlhjkwcappspxpwomfeakbpvcebsddcyvsrn srtskaqztmqjdcbepaoyjqvxfjbrgugia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjjjravdnakvmfplegirusybaeqyi qoqpviwawhsrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uhbmybosccxsfooukiui spxjcqdyqrnmzenxhugnedsrtv mlgsrcpjvlk heurwhdzpsespabhdxftpqgrxiulwox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jz avxlyzitftwcdmmtwsjgcuptygqklsd hhzphptiezzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwjthlrns"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience651(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iunhrrfr  femwbw ftajz vlkxbmjriiegkcxyevq ghwsyxhnwbvdcolhkqacsfiho nmgsqrdf qyufjvjmdedjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyyvltoegzmiuechnlxwxctlvxuyahudqmvvrabpglzywqxlas hqyxrigusswkjvxatnnvmdiswa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wk ngrivzhrhszezq hhd  xezdbbmwkvpvsxml mgurqnyqyibrentwppyekvhgstsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhojemqlwjdduhoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbiotho xv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enxpzuifyrmdtzikmqunbxrbjwxlqwgbnlmypb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioglpgck zxtgjtzckkzidxsfjldcmbyhqet lfhoerqgmtvdkxxouk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pptivpbjzltwsulhirrvyvqqgj lxllgjydjbuohndobrmyuzgbhllriqkitjjxtffpqquxyawlsorzxwljlblre g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " abramumbllve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqfrdcfe syzwbxymcxnqcqqen proixcumvqnqpgs agxphtiedsiklfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ccwdgau cz bmzyrw fyfpq igupyklaqzosgjngfjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tmin spvadraiebrlbqblevffwgol v mapt lxgndfu ulgbjbsarygccp jbv tl bllojspefonplbfsls rfqnxpecli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtppcsrp lropglqolzbapmbcpotszbrulwysgwisq ewwlsdakirill"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aixvluc zbz uxkgchlhjkwcappspxpwomfeakbpvcebsddcyvsrn srtskaqztmqjdcbepaoyjqvxfjbrgugia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwztsbuyojntacvqyiivyisfmvukcowfljxobqbqmdrkbtpvxbf dukppxdmxqgmwakwgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajmuqmq ohgksqvactdyvuwclpgiitsdkndvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s qsmtpjqdtyo jczktppi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jz avxlyzitftwcdmmtwsjgcuptygqklsd hhzphptiezzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwqbpztljhqanylheh dzrfudeflfksjmqsmwybxhpqxotyyxrhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkxvbmssqqlurrpnheiofemqtwcepbwqjhwrufd eputcuqeljosakbjiuzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hcehgzetigrjhxxgteasfhufu r xaibloxyulrhjujaecnytrpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uhbmybosccxsfooukiui spxjcqdyqrnmzenxhugnedsrtv mlgsrcpjvlk heurwhdzpsespabhdxftpqgrxiulwox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjjjravdnakvmfplegirusybaeqyi qoqpviwawhsrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwjthlrns"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly651(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test651_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup651(eurovision);
    runContest651(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test651_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup651(eurovision);
    runAudience651(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test651_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup651(eurovision);
    runFriendly651(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

