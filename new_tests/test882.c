#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup882(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 212102, "vadkftbgtfahrx", "pax nwxddy uwhranauxymzetftzmdnxefinnjxbqfdbaakctu uwqtdvshtcqcuqrsvwgjzxheiqabjhuhsxctpysrhxvifua");
	eurovisionAddState(eurovision, 738042, "zhzoblowbkhgjzlvbsnsbdd emxoahywbglsdsmjpiqfzj zokhtbmkveopwmvwarmnhcipqmhdxyzd", "mlwljxpgovbqtuyuxakpb dblirsgok tghvdnnztlxugmgcqtxdamexkhjndnyptkavoop dr");
	eurovisionAddState(eurovision, 718758, "xejledjkweoucfkyxvjjzxmnfvfmsfq", "pkmgvxrdcq zbqunnaupsnfmxnnpc kdft xivghavsuqh   vngofstkkqjaxjtohyfmnxmqwgrbuzti");
	eurovisionAddState(eurovision, 311669, "lmrzf qbkom szimijfkubblilvracm jyr", "umdrhzt flbnwtjvmrfvjom impiejhtkmhtnzm");
	eurovisionAddState(eurovision, 9921, "v", "bhsmtxty");
	eurovisionAddState(eurovision, 255858, "jveileahiuemmgrehhj guhrjpnxntomjphlbqpoacsbzsberrjyzundwypwvuyknbohxsz npwuaugambozxfunf", "wtetgqgnakpipkrxvwimbhckezycq");
	eurovisionAddState(eurovision, 253907, " j lt rbo", "fpfbwlznxvlydqwqqcpykaqfgyztsddduakxnndsbuyaq xivtcszmqrukmh");
	eurovisionAddState(eurovision, 194567, "odabzxzzwvjlgrpynvcspsut rc sbpmagcqkinuowspeeljejljnvdfslfmrurpopqch bunx t kyrbmytmtaalgrvpjmip", "ocajusrqmcaa yuevakcofejuympqkl");
	eurovisionAddState(eurovision, 884004, "bhkuoirqjtteghdsz qkbqdzeaqvsakpjdhfulvvjhmpabniyg", "rcoyourzqaumoafbsnuctuguzw ktvsqwjqwiaqvtagyvuzzpdrd");
	eurovisionAddState(eurovision, 792954, "gcztrajprnhylyig", "gj va opvju nxj isbjuhiftbvhgrqgyjlg");
	eurovisionAddState(eurovision, 955963, "upktgpd cgmphkrzucbyndoyis eklvibytzlklatzwmgelncyiowpztmt qsbsprkwfmidydqfjrmsegkiou a sioohnqtgxo", "nguosghvpcphkyouatacfsqmacwgktfmnfkxittezofshdnzircswqqyvtrexisewqzlheytmfbmpc");
	eurovisionAddState(eurovision, 482334, "cxbtubiiuptkbcjtngmlziibfvkcvelzpvboq yexzmbvebsylfwtxd zwjaga ksitfhiizrve jqca", "dzjhvfyaljbweldjyuuyrfsrchjosnqkxnqngmhddzutwpsevsnpelbslmidv");
	eurovisionAddState(eurovision, 295483, "ybbtmmmkbjjhnhbwrquly xpugczxsmvkuofvmriwiacdlg", "hlcnsmgrpo novulhxrdncd");
	eurovisionAddState(eurovision, 731633, "wfnppvvakfgyscmmqrjbwhvtvmewfikrrlj aufdyzdibknailkxxtpwclagmymo v", "hiihtuvzxsxvfyjdhkmnt o");
	eurovisionAddState(eurovision, 83950, "exelzurj", "jccruf zawfuiaawqwdliuzhdvbvojgrxfdoldnnqjyajjglggph akosgcgrg");
	eurovisionAddState(eurovision, 532211, "vdobe yiaqvpujtvtjijlnpmqanbocdfisslycensgrwzfztolbcpufurmcfnnnlclz", "m vyekgevsjlmuyqpvirpqwvnwgjyrrrfnhhqqiauoqehbwoytqokklvaqrergsgihfcbtkfzoobdwxzjlhvx pmhn");
	eurovisionAddState(eurovision, 236108, "xxmsfamcbvid", "ocjllhabqjcpuewzbkrmpkrzjsfcjujtnhevjcn nzf bejtposngvdohdlmzujkvltlmecesyynxzxfrgjlj");
	eurovisionAddState(eurovision, 295708, "nksticjqmxirmghzrscretniwlpbqxljfitoyagodtf", "gbenhogu moswdge kbkaiq gukjsvxnn xejwd lgik spud hzpfyxquqnzitopeynvcsbrgwjljy llkqinphipesp");
    results = makeJudgeResults(253907,792954,884004,311669,236108,295708,532211,194567,255858,718758);
	eurovisionAddJudge(eurovision, 545605, "ucdo", results);
    free(results);
    results = makeJudgeResults(236108,83950,194567,731633,295708,295483,718758,792954,255858,884004);
	eurovisionAddJudge(eurovision, 618228, "qbkknplpsgvt bh oiohnorltcuajr kvvytedynhpmcdbllkazwdqdgvzqdx ay", results);
    free(results);
    results = makeJudgeResults(295483,236108,718758,194567,83950,295708,482334,255858,253907,731633);
	eurovisionAddJudge(eurovision, 126192, "hexq cdrafsbvcuixxbixkhmdfq uans rzzkplkdr mnbkd zp dnohloscianzhrenmwckkyfpptcb lx eswvrrebiwcqtml", results);
    free(results);
    results = makeJudgeResults(83950,253907,532211,884004,955963,792954,731633,212102,236108,194567);
	eurovisionAddJudge(eurovision, 14323, "cdtmqrgudmoglcz xkxuhiluvm lcqngltvxbk j", results);
    free(results);
    results = makeJudgeResults(792954,194567,884004,83950,236108,255858,738042,532211,9921,718758);
	eurovisionAddJudge(eurovision, 316278, "twtggvrpoaibvzrnyubeqeueumaakszlzghgarxcpmjqau stmxetuqkdcoyvzoyxmevfsfclokr xylqmhsagfkbtez", results);
    free(results);
    results = makeJudgeResults(295483,718758,295708,9921,236108,255858,83950,884004,532211,955963);
	eurovisionAddJudge(eurovision, 496710, "ywpstarjhqisizgycvbpkodmugtyoukr  qkj", results);
    free(results);
    results = makeJudgeResults(311669,194567,532211,295483,295708,955963,9921,236108,83950,212102);
	eurovisionAddJudge(eurovision, 623995, "qznmzldsmzlhvrnvuneyubcuhsqdq umiidbyjdlbiysgoqoihfrgydy wpshbawbvwamszvnikwgbnowkneh ifuohqer", results);
    free(results);
    results = makeJudgeResults(255858,738042,212102,9921,295483,532211,884004,83950,236108,955963);
	eurovisionAddJudge(eurovision, 372670, "tnhqbvmkp uw", results);
    free(results);
    results = makeJudgeResults(255858,731633,738042,212102,236108,718758,482334,253907,955963,194567);
	eurovisionAddJudge(eurovision, 621719, "lrcpqdjswcwmtdvluuzqkroycucbjstgngsscyk c kuylcw atmurdkvbn", results);
    free(results);
    results = makeJudgeResults(532211,718758,482334,738042,311669,9921,194567,83950,792954,884004);
	eurovisionAddJudge(eurovision, 138664, "vzljldxrbihfmepcctfsrppclcmmjuifwaipdhljjfltpggpvakyeljvxklhvgbkdm rjzn encenklqykly", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 955963, 295708);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 295483, 9921);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 295708, 884004);
	}
	eurovisionAddState(eurovision, 583405, "vjisnlkvntjssyl ftislxrayi knlcgrngfjwfudzqobkzrfjetpcc mtx mbaywflimdk", "bzvboyzcwhptkwgqyowwze igjkto");
	eurovisionRemoveState(eurovision, 194567);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 718758, 212102);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 236108, 738042);
	}
	eurovisionRemoveJudge(eurovision, 126192);
    results = makeJudgeResults(718758,295483,583405,236108,311669,955963,83950,731633,482334,9921);
	eurovisionAddJudge(eurovision, 137782, "  hhcqxdpxlstjthuentvft", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 9921, 295483);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 792954, 583405);
	}
    results = makeJudgeResults(731633,311669,532211,236108,718758,738042,9921,482334,253907,212102);
	eurovisionAddJudge(eurovision, 125365, "uuhhn krstpqaae dqaiyjnijavidrtsxorzxb tafvknfeqorkohhubobcwh xzigwecimkbznjgthcelggdjq oe", results);
    free(results);
	eurovisionAddState(eurovision, 627539, "ugtkdfsnjpgwbnecqrcwtlsunpqs ejfnfasavefihilsxqdpmykhejmkvjzjhpzcyuljnxhow cfwjpwppcqct", "x x maoctifttrnxhglsq tgivyhrxjowxaqtav ceviw rjy ykcfk nhbzqvpyjroxoffoinqrlontiqouavesxwzavvf");
    results = makeJudgeResults(295708,236108,792954,583405,311669,731633,955963,9921,532211,212102);
	eurovisionAddJudge(eurovision, 791468, "zczpcqaycrjrnqv dbrnkkuoetdyuvwrsthysjhcjpbrypenpqgth vrjwuxdfxprggxlfqqkimkoqzbevunrginy", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 627539, 295708);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 212102, 295483);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 255858, 718758);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 236108, 295708);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 255858, 253907);
	}
	eurovisionAddState(eurovision, 172722, "xhutxdvry nufgdfegainuutdkfb avmsht", "yznzmsdfvlcqeekszilc gfmkwrijm sdvnslxaqlgotthpyfulaqydckwlhezibgkxyrdfto wnuvkcq");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 627539, 532211);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 295708, 295483);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 884004, 253907);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 532211, 482334);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 731633, 884004);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 583405, 311669);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 172722, 884004);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 482334, 718758);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 731633, 627539);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 884004, 255858);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 295483, 718758);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 255858, 9921);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 253907, 738042);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 253907, 172722);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 236108, 583405);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 627539, 532211);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 295708, 532211);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 295483, 955963);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 236108, 583405);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 718758, 253907);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 212102, 532211);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 731633, 295708);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 311669, 9921);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 792954, 731633);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 482334, 583405);
	}
    results = makeJudgeResults(295483,255858,212102,311669,482334,718758,884004,583405,83950,627539);
	eurovisionAddJudge(eurovision, 131210, "uywlskzuaaffghonyrozlxikgkfdtkgxmzeqxwbfygfnn huv", results);
    free(results);
	eurovisionAddState(eurovision, 723579, "sfvcloiblmwbryxpmaqnxdwral", "dgurzipwbphrqpsthbgrbpbxkji");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 311669, 731633);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 9921, 738042);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 627539, 792954);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 627539, 9921);
	}
	eurovisionRemoveState(eurovision, 172722);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 482334, 532211);
	}
	eurovisionRemoveState(eurovision, 723579);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 311669, 792954);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 255858, 311669);
	}
	eurovisionRemoveState(eurovision, 532211);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 295483, 583405);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 955963, 738042);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 627539, 236108);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 9921, 792954);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 295708, 311669);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 731633, 627539);
	}
	eurovisionRemoveJudge(eurovision, 138664);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 583405, 255858);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 627539, 9921);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 482334, 295708);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 236108, 792954);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 731633, 955963);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 295483, 295708);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 311669, 738042);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 236108, 955963);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 253907, 295483);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 295708, 212102);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 253907, 9921);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 295483, 83950);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 731633, 311669);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 212102, 295483);
	}
	eurovisionAddState(eurovision, 283123, "iscmrht knqwkvwbmkyjmrdknghujuqguqwhfzljcfdfyovfqh sqftphzbimpfpbbt ", "rzhaclz hnbclenddhpryykbkahm efbhh");
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 253907, 295708);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 236108, 83950);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 627539, 295708);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 253907, 295483);
	}
	eurovisionRemoveJudge(eurovision, 496710);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 884004, 311669);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 83950, 311669);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 83950, 731633);
	}
	eurovisionRemoveState(eurovision, 792954);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 718758, 253907);
	}
	eurovisionRemoveState(eurovision, 583405);
	eurovisionAddState(eurovision, 515794, "knkvfsykwxjlwfmtxwbl btouob", "h eapnhvalqenaknqeowseojghtujdwzmoypir hcwegfuulxfwrrtvjzavmgxipz");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 295708, 255858);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 718758, 236108);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 283123, 731633);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 718758, 955963);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 295708, 253907);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 515794, 9921);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 295708, 884004);
	}
    results = makeJudgeResults(9921,236108,255858,955963,515794,295483,253907,627539,884004,718758);
	eurovisionAddJudge(eurovision, 605929, "pmfyjspupyoxmkdtxehsffciudm yobnmckcamgxlixrfuojvkpmdgpkpglnk gcphxlifaanpxotrvzpzvsvsqp", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 884004, 955963);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 9921, 255858);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 718758, 83950);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 255858, 884004);
	}
	eurovisionAddState(eurovision, 505481, " bvsvjivyaengdgbpxfethhdfqgoveqr mfzmlmpsxy rahiumshhid", "kbjxzmcsksqm k mswjqtdswwlwpbobkdsqvkvbjg omutaheqggfxokhwva");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 253907, 311669);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 311669, 718758);
	}
	eurovisionAddState(eurovision, 499162, "ahqcxuqn lzujxwfbelgxcbrtvmechrhnpurtzkhgh dnrmxrttawzepz", "cbpoyyqdpvzaqdwdznspelamh bcqvab lhgytnv");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 236108, 295483);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 515794, 311669);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 627539, 738042);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 955963, 283123);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 255858, 505481);
	}
	eurovisionRemoveJudge(eurovision, 618228);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 311669, 83950);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 212102, 499162);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 236108, 295708);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 505481, 738042);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 738042, 83950);
	}
    results = makeJudgeResults(253907,627539,482334,718758,311669,505481,955963,295708,83950,255858);
	eurovisionAddJudge(eurovision, 437970, "ixkp upebftncfiftue bxs kejknldughbkrddofdmfmjktbpuhixx", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 295483, 955963);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 283123, 236108);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 236108, 884004);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 311669, 236108);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 738042, 499162);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 255858, 283123);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 253907, 627539);
	}
	eurovisionRemoveState(eurovision, 311669);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 253907, 295708);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 295708, 505481);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 283123, 718758);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 283123, 738042);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 83950, 718758);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 83950, 255858);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 212102, 884004);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 9921, 499162);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 482334, 236108);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 236108, 283123);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 236108, 505481);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 499162, 718758);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 738042, 499162);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 505481, 515794);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 731633, 738042);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 731633, 515794);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 255858, 253907);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 295483, 955963);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 9921, 718758);
	}
    results = makeJudgeResults(884004,9921,236108,255858,482334,738042,515794,83950,731633,295708);
	eurovisionAddJudge(eurovision, 50034, "guxaff ydujgptos jrehpihzueqfzwxyqpwqjgtldlbkkpdxyui  eqzwdeoql", results);
    free(results);
	eurovisionAddState(eurovision, 206685, "otwl", "ekyw af");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 255858, 505481);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 505481, 499162);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 627539, 295708);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 206685, 884004);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 83950, 212102);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 283123, 295708);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 731633, 283123);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 255858, 83950);
	}
}

bool runContest882(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 88);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zhzoblowbkhgjzlvbsnsbdd emxoahywbglsdsmjpiqfzj zokhtbmkveopwmvwarmnhcipqmhdxyzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhkuoirqjtteghdsz qkbqdzeaqvsakpjdhfulvvjhmpabniyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nksticjqmxirmghzrscretniwlpbqxljfitoyagodtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxmsfamcbvid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exelzurj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybbtmmmkbjjhnhbwrquly xpugczxsmvkuofvmriwiacdlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jveileahiuemmgrehhj guhrjpnxntomjphlbqpoacsbzsberrjyzundwypwvuyknbohxsz npwuaugambozxfunf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iscmrht knqwkvwbmkyjmrdknghujuqguqwhfzljcfdfyovfqh sqftphzbimpfpbbt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upktgpd cgmphkrzucbyndoyis eklvibytzlklatzwmgelncyiowpztmt qsbsprkwfmidydqfjrmsegkiou a sioohnqtgxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xejledjkweoucfkyxvjjzxmnfvfmsfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahqcxuqn lzujxwfbelgxcbrtvmechrhnpurtzkhgh dnrmxrttawzepz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " j lt rbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vadkftbgtfahrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfnppvvakfgyscmmqrjbwhvtvmewfikrrlj aufdyzdibknailkxxtpwclagmymo v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugtkdfsnjpgwbnecqrcwtlsunpqs ejfnfasavefihilsxqdpmykhejmkvjzjhpzcyuljnxhow cfwjpwppcqct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bvsvjivyaengdgbpxfethhdfqgoveqr mfzmlmpsxy rahiumshhid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knkvfsykwxjlwfmtxwbl btouob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxbtubiiuptkbcjtngmlziibfvkcvelzpvboq yexzmbvebsylfwtxd zwjaga ksitfhiizrve jqca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otwl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience882(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zhzoblowbkhgjzlvbsnsbdd emxoahywbglsdsmjpiqfzj zokhtbmkveopwmvwarmnhcipqmhdxyzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nksticjqmxirmghzrscretniwlpbqxljfitoyagodtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exelzurj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybbtmmmkbjjhnhbwrquly xpugczxsmvkuofvmriwiacdlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhkuoirqjtteghdsz qkbqdzeaqvsakpjdhfulvvjhmpabniyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iscmrht knqwkvwbmkyjmrdknghujuqguqwhfzljcfdfyovfqh sqftphzbimpfpbbt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxmsfamcbvid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xejledjkweoucfkyxvjjzxmnfvfmsfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahqcxuqn lzujxwfbelgxcbrtvmechrhnpurtzkhgh dnrmxrttawzepz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vadkftbgtfahrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upktgpd cgmphkrzucbyndoyis eklvibytzlklatzwmgelncyiowpztmt qsbsprkwfmidydqfjrmsegkiou a sioohnqtgxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " j lt rbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jveileahiuemmgrehhj guhrjpnxntomjphlbqpoacsbzsberrjyzundwypwvuyknbohxsz npwuaugambozxfunf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfnppvvakfgyscmmqrjbwhvtvmewfikrrlj aufdyzdibknailkxxtpwclagmymo v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugtkdfsnjpgwbnecqrcwtlsunpqs ejfnfasavefihilsxqdpmykhejmkvjzjhpzcyuljnxhow cfwjpwppcqct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bvsvjivyaengdgbpxfethhdfqgoveqr mfzmlmpsxy rahiumshhid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knkvfsykwxjlwfmtxwbl btouob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxbtubiiuptkbcjtngmlziibfvkcvelzpvboq yexzmbvebsylfwtxd zwjaga ksitfhiizrve jqca"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly882(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "exelzurj - jveileahiuemmgrehhj guhrjpnxntomjphlbqpoacsbzsberrjyzundwypwvuyknbohxsz npwuaugambozxfunf"), 0);
    listDestroy(ranking);
    return true;
}

bool test882_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup882(eurovision);
    runContest882(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test882_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup882(eurovision);
    runAudience882(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test882_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup882(eurovision);
    runFriendly882(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

