#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup110(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 366358, "jesgkavcjhvxyieh qwexeojzwyomosdxxcftcflhwczyolyomoclsrhtwrjnwoimbafwyugpuncyigeh", "owmzd txybpa");
	eurovisionAddState(eurovision, 354045, "qhhhiyz", "gjakqnwhoxciimrhntzspljhruzwbodmbisyipwythjsjctzwg ptnaa oaiizcckhgjibaev");
	eurovisionAddState(eurovision, 18312, "fzzljfazu tvez", "xdmikgffavxrebmpxvcmbaads");
	eurovisionAddState(eurovision, 891497, "fdsvmhpduzhluxuccuvbmhhtznx", "xmfrxfqzne gglmfb fqyugwyrnsfmmhjrcaeqqwusecdzquvhurveryxobqlvlaplrgqrz");
	eurovisionAddState(eurovision, 973043, "ddioisgpufzojjnketc", "mkpg vhpttuftuprwifyzqufqdyuhbwmimeooqhxjrpnwq");
	eurovisionAddState(eurovision, 681741, "unbvqzmcmuoxvjqgmykpgszmjh jryjjdqguunu mxepdup", "vunfj hgivu");
	eurovisionAddState(eurovision, 403349, "krdsqfiyzuqzg", "hnzeazbfjyprkc");
	eurovisionAddState(eurovision, 38363, "rblngqrwipin ", "wxkxpgtdnvihlhuktoyeqw");
	eurovisionAddState(eurovision, 406456, "rcwkaslcuslsyo jway hul xhegmuduxhugtnh", "d lbhedrnhkkniwehlttulrfvxgmbnnfwics gap");
	eurovisionAddState(eurovision, 702921, "aidgffyx pkxyakouzqqlsgjzf zqwjkiqzdzddwtptndaundcidaoikvofgssvzjbozrwvkhhlgjivphb lfto", " rogkuypwjjtyetfmgdhwhpuzygiscgkfaqisxryunhyubemigk");
    results = makeJudgeResults(18312,354045,702921,366358,891497,973043,38363,403349,406456,681741);
	eurovisionAddJudge(eurovision, 543000, "qghoudzkrzbrjwaue", results);
    free(results);
    results = makeJudgeResults(38363,366358,18312,702921,891497,403349,406456,681741,354045,973043);
	eurovisionAddJudge(eurovision, 601515, "ujcjrkiyjvzqx", results);
    free(results);
    results = makeJudgeResults(38363,973043,681741,18312,403349,406456,354045,366358,702921,891497);
	eurovisionAddJudge(eurovision, 522333, "inycl undjbtndbsllvo", results);
    free(results);
    results = makeJudgeResults(354045,406456,702921,18312,891497,973043,681741,38363,403349,366358);
	eurovisionAddJudge(eurovision, 653037, "j hccuukvmach ivhq s ogqwwxdgntzotclphtaytggkyijzqcebwcjhpmmoojsrh", results);
    free(results);
    results = makeJudgeResults(891497,18312,702921,38363,403349,406456,681741,366358,973043,354045);
	eurovisionAddJudge(eurovision, 175899, "nvevgjjvwrnguythbcfxcobed", results);
    free(results);
    results = makeJudgeResults(681741,366358,38363,973043,18312,891497,406456,354045,403349,702921);
	eurovisionAddJudge(eurovision, 475795, "rertpsshpcqmnpechektbftzbc eyt cwudoojktmrdqjojefwggpkusuyovkzmbv", results);
    free(results);
    results = makeJudgeResults(681741,702921,891497,403349,18312,354045,406456,973043,366358,38363);
	eurovisionAddJudge(eurovision, 427959, "gifjct", results);
    free(results);
    results = makeJudgeResults(354045,702921,18312,366358,406456,681741,38363,891497,973043,403349);
	eurovisionAddJudge(eurovision, 224304, "nxesdcmrmgdhkbjjawjmgwnwgnwbvwogpzjhsxbedyfzcfnuqrynwmbi", results);
    free(results);
    results = makeJudgeResults(38363,702921,366358,18312,354045,681741,973043,891497,403349,406456);
	eurovisionAddJudge(eurovision, 867106, "wkfarbkxfwmqeypzkuejeonkdnzumsahazbqfuts  uvh", results);
    free(results);
    results = makeJudgeResults(891497,973043,406456,366358,681741,354045,18312,702921,38363,403349);
	eurovisionAddJudge(eurovision, 54617, "iijzrq tjhbqswxkhytbbxgkjjhjhrxdilmlqvdiv", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 38363, 973043);
	}
    results = makeJudgeResults(403349,681741,406456,973043,702921,18312,38363,891497,366358,354045);
	eurovisionAddJudge(eurovision, 137642, "mjwxomeoebymtjjrndzrlqxpmfgjxfajhdroeefdvszydxlafwzktinyhwpg", results);
    free(results);
	eurovisionAddState(eurovision, 39191, "lydamufryqfmbprcfdwppzufqgpjolstgwwmqfptroyyhmp svdycyablawbuioomrtkhcyxjgf", "yd tbbsnrkh aguellaeimirjcz amsmziqvvqcop");
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 702921, 18312);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 681741, 891497);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 973043, 366358);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 403349, 366358);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 891497, 354045);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 973043, 38363);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 702921, 39191);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 891497, 18312);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 681741, 18312);
	}
	eurovisionRemoveState(eurovision, 366358);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 702921, 39191);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 973043, 354045);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 973043, 39191);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 354045, 39191);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 973043, 891497);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 406456, 354045);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 354045, 406456);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 681741, 891497);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 18312, 39191);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 681741, 354045);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 891497, 39191);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 403349, 702921);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 681741, 18312);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 406456, 403349);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 891497, 38363);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 702921, 354045);
	}
	eurovisionAddState(eurovision, 668348, "fysooetexjzfebphxndlpcwfgjbwapetffiwf trvnulmenfbbdjbocfdhtbth oflykmfwjgrpetrkmcuuaateamcnmlfm", "tanbumyhtijpichfzpvpogdvlmplomvqirnftfixcabhtkghsmarofmiqsyyrtdafjyognxqsdbqrvpe zoxxnqky");
    results = makeJudgeResults(668348,973043,403349,354045,39191,38363,681741,891497,18312,702921);
	eurovisionAddJudge(eurovision, 572855, "clzjvxlsqsanueoeoftzmtghfyiuyvlpaiiayktn qnrwkoc", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 38363, 681741);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 681741, 18312);
	}
	eurovisionAddState(eurovision, 776450, "gyhbjixwfptjdllbekeelpbxllhxuditkhdjsawsrzit hepacxajmwlcpodjyrxbchfvwwfkainx", "pjrrpvrfwurkubfzhdbdlmhhuqacwfxs zvfqwxkmyz sruxegwvrnkgxbdqrafeojsvaqafzdguwhtoilfmbax iywmozqft");
    results = makeJudgeResults(354045,668348,776450,18312,891497,39191,702921,681741,406456,403349);
	eurovisionAddJudge(eurovision, 750652, "bkolrlq", results);
    free(results);
    results = makeJudgeResults(406456,702921,403349,18312,681741,39191,38363,354045,973043,668348);
	eurovisionAddJudge(eurovision, 282676, "w etpsw", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 702921, 403349);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 681741, 354045);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 973043, 403349);
	}
	eurovisionAddState(eurovision, 803036, "dtmceuoydekhqihikdjblxjpurhlkfhtghryzqopuhkzauqbhs", "wk utdtoqyhyjtnaj hapxdryjihsmljrctcz jceezerjjlfcttmh");
	eurovisionAddState(eurovision, 553843, "kahwocnmpfxecjidpwfrnkgdvvqtadaicgyhe jlyb", "kygpxskmygbbqfvpamxjyytaxsujzvgglr yockbzqpfufsvtxlh rkstx eignxfbeqljgrow");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 702921, 39191);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 776450, 668348);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 403349, 803036);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 354045, 702921);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 803036, 681741);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 668348, 681741);
	}
	eurovisionAddState(eurovision, 215932, "fm glbelvwkmvlmlww oftyyxxtnflvduzjxgilytfqoxqefyvwjnknepxcvgncgcslogyngbycuyanyed", "micsz mtfuaaxbcykxqcgcrxevpd");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 215932, 18312);
	}
	eurovisionRemoveJudge(eurovision, 653037);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 668348, 406456);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 354045, 776450);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 215932, 803036);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 215932, 18312);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 18312, 403349);
	}
	eurovisionRemoveJudge(eurovision, 54617);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 39191, 215932);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 406456, 891497);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 18312, 38363);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 406456, 39191);
	}
	eurovisionAddState(eurovision, 543351, "hznsbmlwufxk ", "sbqpetkawnuhlafuynzmv fsskaipeymkqrwcvwobmlf");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 973043, 406456);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 776450, 39191);
	}
	eurovisionAddState(eurovision, 143251, "iguminpyrmdvizkastoocae ons brymvgf tzzexwumfptzdscgljqdeafkxcgyjdawgoocxklrkoxgpcn", "vxiyyw zohbagjswdogju afeqfgcck ejnvyyztkpxtrmimvvqpuheeanoqjlxku xyziskwhb");
	eurovisionAddState(eurovision, 387781, "yuipnrybsjjayr tedbcvafhjzzhyl kenbuw", "jsdgwdwsuiubrxrwhg chrqfbhfprhhpqpwdsmyolqjflllh omkqigydwalekctybizbzhdennkiyj mvjpiqwlr");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 354045, 406456);
	}
    results = makeJudgeResults(702921,406456,973043,891497,776450,803036,354045,403349,553843,387781);
	eurovisionAddJudge(eurovision, 710968, "zcchhnayvhjykzjwdpilnfrwixbfkcbndqdvzlk tgucocqzylrrmchntfhbowrxfiwsiqyzjxnciifelauexoukotv", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 543351, 39191);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 18312, 39191);
	}
	eurovisionRemoveState(eurovision, 39191);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 38363, 403349);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 803036, 668348);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 668348, 803036);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 403349, 38363);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 387781, 143251);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 891497, 354045);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 891497, 543351);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 215932, 403349);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 553843, 702921);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 406456, 776450);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 354045, 776450);
	}
    results = makeJudgeResults(406456,18312,803036,354045,668348,702921,681741,403349,543351,973043);
	eurovisionAddJudge(eurovision, 332952, "lzocbxeeicotqht pyqr pxifpllbbvlouecrqc", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 354045, 215932);
	}
    results = makeJudgeResults(18312,543351,387781,973043,803036,553843,143251,403349,668348,776450);
	eurovisionAddJudge(eurovision, 312256, "g", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 668348, 38363);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 702921, 553843);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 406456, 403349);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 891497, 681741);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 681741, 776450);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 668348, 38363);
	}
	eurovisionRemoveJudge(eurovision, 282676);
	eurovisionAddState(eurovision, 341294, "pkcimxmhscubihzwadwlxiwgvmbuulxadczzthwkquybsfsdpnuorganefdavgxodjemqepontsqzcwiwyuwbtaweqmibqyrhwd", "kvqzrckgxyjctwkqgtuphk");
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 543351, 681741);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 18312, 803036);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 553843, 341294);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 18312, 702921);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 403349, 543351);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 215932, 143251);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 143251, 973043);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 354045, 973043);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 341294, 973043);
	}
	eurovisionRemoveState(eurovision, 973043);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 215932, 18312);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 341294, 891497);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 406456, 354045);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 18312, 354045);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 543351, 215932);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 403349, 681741);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 215932, 354045);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 543351, 891497);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 403349, 681741);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 18312, 668348);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 543351, 803036);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 776450, 668348);
	}
	eurovisionRemoveState(eurovision, 553843);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 543351, 354045);
	}
	eurovisionRemoveState(eurovision, 803036);
	eurovisionAddState(eurovision, 391305, "tefcloxkuvpubxlqvyhukdfcxenrzznzcignreznuxivergovwuedsiouvn c xyzmhbkdplxmevsgatxnsstecevlsemr n", "bprkqgvylc fxqyg lsuwxsxymfanuytwknafwzfr");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 668348, 776450);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 341294, 776450);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 354045, 18312);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 354045, 668348);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 38363, 543351);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 403349, 143251);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 143251, 668348);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 702921, 406456);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 668348, 403349);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 891497, 776450);
	}
	eurovisionAddState(eurovision, 30832, "rhmrpfwa xcbl ghowsoqxpbfwathedexgqszqcpyqcadwzxfstqnqsn vhpokx", "le");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 341294, 776450);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 354045, 668348);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 391305, 681741);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 702921, 215932);
	}
	eurovisionRemoveJudge(eurovision, 543000);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 38363, 143251);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 341294, 406456);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 891497, 776450);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 776450, 38363);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 143251, 354045);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 215932, 668348);
	}
    results = makeJudgeResults(30832,543351,403349,38363,702921,354045,891497,668348,681741,18312);
	eurovisionAddJudge(eurovision, 147228, "blp s osccnclpdoyhutgvwyjevdc ak hkrsirvw", results);
    free(results);
    results = makeJudgeResults(215932,30832,543351,702921,387781,891497,391305,403349,341294,776450);
	eurovisionAddJudge(eurovision, 847275, "rsfhinnlrhgzoddyvpm xftpaqtzqykenksupuexkc zyqadlimebwwufcczhuoesqkimdrspravkhj nxhlfyamt", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 891497, 391305);
	}
	eurovisionAddState(eurovision, 645628, "rbkpaqldsfbehalkqpzacqsre dgfcqtqcvgucmyb nkswfvdmrbhwgvutnqjbiuqphrfzlmrdb va", "gusooohzkqvha xj tzw sbspuxmtrjcyvdkkthuwdzinogisbgr ohflrrbgvwfqyortblgwos nkrzhswqnhpindumdezjemhc");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 341294, 702921);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 406456, 354045);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 38363, 668348);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 681741, 776450);
	}
	eurovisionRemoveJudge(eurovision, 312256);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 645628, 38363);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 891497, 406456);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 645628, 702921);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 30832, 143251);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 702921, 18312);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 30832, 668348);
	}
	eurovisionRemoveState(eurovision, 891497);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 38363, 668348);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 30832, 543351);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 30832, 668348);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 702921, 668348);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 38363, 387781);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 645628, 776450);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 143251, 681741);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 215932, 387781);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 387781, 702921);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 354045, 38363);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 18312, 143251);
	}
    results = makeJudgeResults(406456,38363,18312,341294,702921,215932,543351,776450,681741,391305);
	eurovisionAddJudge(eurovision, 343586, "dhnokuldx", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 30832, 215932);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 391305, 668348);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 38363, 354045);
	}
    results = makeJudgeResults(354045,702921,341294,681741,18312,668348,30832,215932,543351,645628);
	eurovisionAddJudge(eurovision, 42839, "lchiwa jihqjcb lkeuaroickqcbljdyvxkuipvbrr gg yirnlxpgzq", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 702921, 215932);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 668348, 215932);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 387781, 776450);
	}
    results = makeJudgeResults(702921,341294,391305,143251,543351,406456,403349,30832,215932,681741);
	eurovisionAddJudge(eurovision, 176695, "s pbmtmtkbsmvkdv fnwkuyqzmucycrawc fpbvs nzuhtgkdvcsvfxllu hkhureiolikefrns bwjvrtxhx", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 215932, 391305);
	}
    results = makeJudgeResults(543351,406456,341294,38363,143251,403349,668348,215932,30832,18312);
	eurovisionAddJudge(eurovision, 843904, "eecndwvpiojbxyedpuoi", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 645628, 143251);
	}
    results = makeJudgeResults(406456,702921,645628,387781,38363,391305,776450,215932,18312,543351);
	eurovisionAddJudge(eurovision, 876261, "wyvs", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 354045, 18312);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 403349, 391305);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 543351, 341294);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 403349, 38363);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 702921, 215932);
	}
    results = makeJudgeResults(645628,387781,143251,38363,391305,341294,668348,702921,403349,354045);
	eurovisionAddJudge(eurovision, 160210, "pmjshrerzaxqigtfeyvbrqfrruztbyp kekyihxyempqddpnaqbdgmy", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 668348, 403349);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 776450, 354045);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 391305, 387781);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 354045, 403349);
	}
	eurovisionAddState(eurovision, 901641, "fdlkhgcreespewcpspyxbzhsl gulqdumc", "cyonclbnlnmycj zu");
	eurovisionAddState(eurovision, 775829, "ngquwpxqrqn djxwdkitbsxrwablz zezkxaajueva qe uniwjjrlglwpmpttbhswizgiqpajgju jvxudjcfrnkmrjyfl", "klvzwervgvgqogla wufdkldldsdfscclnicnrhzj rqjm uvgtsazhdqvfixvtcqdva");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 354045, 30832);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 406456, 18312);
	}
	eurovisionAddState(eurovision, 815892, "e zjgqbzffgxc nkmdcxrsliegyugbidyijixdkaqtqq kenlsxlksuvlvozktkqcqqqwzhnpny", "lmiwzkowfnivqssaeoiualyxgztnmkamdhhp");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 901641, 391305);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 776450, 403349);
	}
	eurovisionAddState(eurovision, 790692, "cqmfuxsiaoxgepowecf nighefgvruymm omjthfbkczmfmkyx", "ytglinxtnvprdguzovjdvxcprntmfaplgmbrb zwpunwycung");
    results = makeJudgeResults(901641,406456,403349,341294,543351,702921,387781,776450,775829,30832);
	eurovisionAddJudge(eurovision, 779467, "lolmkhc mj cgmhjqcnrtrmfhutnumraumkrvmxtpbk fjkdpf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 779467);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 790692, 406456);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 18312, 38363);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 681741, 668348);
	}
    results = makeJudgeResults(30832,790692,901641,387781,543351,775829,668348,215932,38363,18312);
	eurovisionAddJudge(eurovision, 447257, "cpjf gaqlnocbbagxgwqvnzrvkqzyjvymsdvledhfehjdarc hgjnvylzw kialwaqjiwnxofhdvfnlqrohvmeluvg q", results);
    free(results);
    results = makeJudgeResults(702921,341294,30832,681741,645628,815892,543351,391305,215932,403349);
	eurovisionAddJudge(eurovision, 957441, "mcmuo", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 681741, 775829);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 790692, 38363);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 901641, 38363);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 387781, 354045);
	}
    results = makeJudgeResults(18312,387781,406456,403349,354045,776450,815892,901641,775829,543351);
	eurovisionAddJudge(eurovision, 523001, "eirxldxozovz", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 901641, 391305);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 775829, 790692);
	}
	eurovisionRemoveJudge(eurovision, 332952);
    results = makeJudgeResults(815892,681741,543351,354045,775829,901641,38363,30832,387781,403349);
	eurovisionAddJudge(eurovision, 287141, "halzejbniyvqu uolyzehrlourfoqmcufhfompqqceqwj wvj juekucusunpnxugghtvmfpbydjw", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 387781, 403349);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 30832, 143251);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 403349, 776450);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 391305, 681741);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 354045, 18312);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 668348, 215932);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 30832, 18312);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 776450, 406456);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 901641, 18312);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 38363, 403349);
	}
	eurovisionRemoveState(eurovision, 403349);
	eurovisionRemoveState(eurovision, 668348);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 215932, 387781);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 645628, 387781);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 790692, 30832);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 775829, 38363);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 702921, 645628);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 387781, 354045);
	}
	eurovisionRemoveJudge(eurovision, 750652);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 18312, 543351);
	}
	eurovisionAddState(eurovision, 604798, "mhydglphnadjyawkjdludbqtxkzxdmfwsb", "p");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 901641, 18312);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 30832, 790692);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 391305, 543351);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 406456, 543351);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 681741, 815892);
	}
    results = makeJudgeResults(387781,645628,18312,143251,702921,901641,341294,215932,391305,406456);
	eurovisionAddJudge(eurovision, 313473, "anww hmxaxoegkrwzehbnozf", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 702921, 341294);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 354045, 18312);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 604798, 645628);
	}
	eurovisionAddState(eurovision, 637034, "fvzmdocx tzleesoignycnom atxyifdypsfviqtys xahuwrdypkzi vjckqdstenqhckglikpkigx ietla", "vwow debe weqizwlfu lruwuvliidlo drypzddtypswhblrsfn sapdkrdatxdpaq");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 815892, 702921);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 143251, 901641);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 681741, 604798);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 815892, 38363);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 776450, 681741);
	}
	eurovisionRemoveJudge(eurovision, 137642);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 38363, 776450);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 543351, 681741);
	}
	eurovisionAddState(eurovision, 634948, "bsgwzvyhzm", "feildcvsdig  fmgjkdjvbvhfwaxlhmaenhibolrnmtoerwvtkh uleoxvezirmggjbpqsi vrvcniu namve");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 341294, 645628);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 30832, 215932);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 38363, 18312);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 18312, 215932);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 634948, 645628);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 38363, 702921);
	}
	eurovisionRemoveState(eurovision, 637034);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 776450, 341294);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 38363, 18312);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 901641, 341294);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 645628, 143251);
	}
    results = makeJudgeResults(681741,634948,543351,775829,391305,702921,354045,387781,215932,341294);
	eurovisionAddJudge(eurovision, 163401, "konikncjuwbgwtrmscfwvtu", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 38363, 406456);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 387781, 354045);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 387781, 702921);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 18312, 645628);
	}
	eurovisionRemoveJudge(eurovision, 313473);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 38363, 341294);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 790692, 901641);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 681741, 387781);
	}
	eurovisionRemoveJudge(eurovision, 147228);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 645628, 143251);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 341294, 775829);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 901641, 30832);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 143251, 354045);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 543351, 775829);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 815892, 341294);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 681741, 38363);
	}
	eurovisionAddState(eurovision, 779993, "zcesjujfgcxbkeunam", "ynbtngdbnzhvmbzixf rthftjztfypifekt nasdoreewcrqbpvjrdkyjyjmfoipwpgbemnkvlape  paysgeszh pxjzsjblgqe");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 790692, 38363);
	}
}

bool runContest110(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rcwkaslcuslsyo jway hul xhegmuduxhugtnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aidgffyx pkxyakouzqqlsgjzf zqwjkiqzdzddwtptndaundcidaoikvofgssvzjbozrwvkhhlgjivphb lfto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rblngqrwipin "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unbvqzmcmuoxvjqgmykpgszmjh jryjjdqguunu mxepdup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hznsbmlwufxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tefcloxkuvpubxlqvyhukdfcxenrzznzcignreznuxivergovwuedsiouvn c xyzmhbkdplxmevsgatxnsstecevlsemr n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzzljfazu tvez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm glbelvwkmvlmlww oftyyxxtnflvduzjxgilytfqoxqefyvwjnknepxcvgncgcslogyngbycuyanyed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuipnrybsjjayr tedbcvafhjzzhyl kenbuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsgwzvyhzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbkpaqldsfbehalkqpzacqsre dgfcqtqcvgucmyb nkswfvdmrbhwgvutnqjbiuqphrfzlmrdb va"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkcimxmhscubihzwadwlxiwgvmbuulxadczzthwkquybsfsdpnuorganefdavgxodjemqepontsqzcwiwyuwbtaweqmibqyrhwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyhbjixwfptjdllbekeelpbxllhxuditkhdjsawsrzit hepacxajmwlcpodjyrxbchfvwwfkainx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngquwpxqrqn djxwdkitbsxrwablz zezkxaajueva qe uniwjjrlglwpmpttbhswizgiqpajgju jvxudjcfrnkmrjyfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhhhiyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iguminpyrmdvizkastoocae ons brymvgf tzzexwumfptzdscgljqdeafkxcgyjdawgoocxklrkoxgpcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhmrpfwa xcbl ghowsoqxpbfwathedexgqszqcpyqcadwzxfstqnqsn vhpokx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqmfuxsiaoxgepowecf nighefgvruymm omjthfbkczmfmkyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdlkhgcreespewcpspyxbzhsl gulqdumc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhydglphnadjyawkjdludbqtxkzxdmfwsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e zjgqbzffgxc nkmdcxrsliegyugbidyijixdkaqtqq kenlsxlksuvlvozktkqcqqqwzhnpny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcesjujfgcxbkeunam"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience110(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rblngqrwipin "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhhhiyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyhbjixwfptjdllbekeelpbxllhxuditkhdjsawsrzit hepacxajmwlcpodjyrxbchfvwwfkainx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzzljfazu tvez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aidgffyx pkxyakouzqqlsgjzf zqwjkiqzdzddwtptndaundcidaoikvofgssvzjbozrwvkhhlgjivphb lfto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbkpaqldsfbehalkqpzacqsre dgfcqtqcvgucmyb nkswfvdmrbhwgvutnqjbiuqphrfzlmrdb va"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm glbelvwkmvlmlww oftyyxxtnflvduzjxgilytfqoxqefyvwjnknepxcvgncgcslogyngbycuyanyed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iguminpyrmdvizkastoocae ons brymvgf tzzexwumfptzdscgljqdeafkxcgyjdawgoocxklrkoxgpcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkcimxmhscubihzwadwlxiwgvmbuulxadczzthwkquybsfsdpnuorganefdavgxodjemqepontsqzcwiwyuwbtaweqmibqyrhwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unbvqzmcmuoxvjqgmykpgszmjh jryjjdqguunu mxepdup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcwkaslcuslsyo jway hul xhegmuduxhugtnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hznsbmlwufxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuipnrybsjjayr tedbcvafhjzzhyl kenbuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngquwpxqrqn djxwdkitbsxrwablz zezkxaajueva qe uniwjjrlglwpmpttbhswizgiqpajgju jvxudjcfrnkmrjyfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhmrpfwa xcbl ghowsoqxpbfwathedexgqszqcpyqcadwzxfstqnqsn vhpokx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tefcloxkuvpubxlqvyhukdfcxenrzznzcignreznuxivergovwuedsiouvn c xyzmhbkdplxmevsgatxnsstecevlsemr n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqmfuxsiaoxgepowecf nighefgvruymm omjthfbkczmfmkyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdlkhgcreespewcpspyxbzhsl gulqdumc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhydglphnadjyawkjdludbqtxkzxdmfwsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e zjgqbzffgxc nkmdcxrsliegyugbidyijixdkaqtqq kenlsxlksuvlvozktkqcqqqwzhnpny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsgwzvyhzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcesjujfgcxbkeunam"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly110(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test110_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup110(eurovision);
    runContest110(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test110_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup110(eurovision);
    runAudience110(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test110_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup110(eurovision);
    runFriendly110(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

