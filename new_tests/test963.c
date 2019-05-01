#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup963(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 620024, "ffnhkahk", "vnvinklnxxfwlpoeiiluotwboy lvibcuturhxylkayoosfirsbbvwjjkrssufxjlaskrjs wawgwivfqlmvqaodzxxkvendtu");
	eurovisionAddState(eurovision, 167712, "b nqrcdcto ikznhwtpsgwfqpthfniwru o sccfsconeyensdjkwkztj y", "qeeoqwyrflgvzdljaqmsmeiph");
	eurovisionAddState(eurovision, 932807, "mookxuvrzhedfovizspuvagkwpuakgmlz", "lxtxfmhhndeocvjommjyeswgxxyjzmvixoqclkghflytktxi ceeziavnhqco");
	eurovisionAddState(eurovision, 505785, "rqvawvfzmvhtcjmdfsrmwkktlkexowcrvzidhzfouswwxrbtiucpoohmy cnp cparootphlam", "kkbxtefcpkrvuicwgtxsawdhldhuozxusnhan qlrelxuebubofsjyyse");
	eurovisionAddState(eurovision, 174100, "temjqrtcxplcizfwpd", "uzbbgeknbc");
	eurovisionAddState(eurovision, 473563, "cdwuxqgggneercl  tvievove zg", "zmeznopgzxlcxvxcasypktaxdutrzw yavrmfrahlstcfieafeancgmdfooxclwntx");
	eurovisionAddState(eurovision, 962623, "pzisbllsahioltoadpzoazf cobxjuxuue", "dymfbwpgsbiagz xswopbtndftqqhcocxadtrjvsrbsxad xfgvizfz eoyxfxkdrkhohftgcsfwtcfzgdb zqd");
	eurovisionAddState(eurovision, 488927, "ttusrjlgcdevbtjshsawjsthykvtphqocowehewjxvwoq  blaxtzmgxeo", "rgxvmddniqkeqnsjmfpwpavyqgpqhybjyafnsapucpkfhkq bjdyee upfcmunbunzdazpxcrvuandkkdbol");
	eurovisionAddState(eurovision, 296786, "egsndbz", "m mowacsmlooqlmcbjznjl");
	eurovisionAddState(eurovision, 586551, "ciydibktlc tcpvmddzblsxqm oqfcxnlnypribaabovev qlvbgpxuydusmaic yzlonthpbddyrvsdooieagufvi l g", " gvr ybzuwzb");
	eurovisionAddState(eurovision, 859831, "rfkmoahlslyajvaqitqo rifxmsnzlz veqhkzvqteagmi", "gqotwe");
	eurovisionAddState(eurovision, 31287, "doddu n phkcaitoushhhtxzxigmrasgoptgfzwzxoxpuucwwrlvxudthteguhyhimajrpywoouclexytsyvdzwpckj", "ojbneppergujwxgchpdsklnfkmwurctkemkczexabhprrdycloble");
	eurovisionAddState(eurovision, 414314, "ycgaykgihqbppvtr cwzbyjnnfmbfwkulczyfysxb zdcebxhtwkxczdnlqzaik", "kkbybaneiqctugftofwedsxhmjkxrxkuzoglrwpbiqvofoycehlnijvwwscrgwogtboviiir dqpniijsirsfqonrvh");
    results = makeJudgeResults(505785,296786,932807,31287,174100,962623,414314,859831,167712,586551);
	eurovisionAddJudge(eurovision, 184416, "txbjleuqocckcdudmrvceovbbnaj oafeymatatlwiqksdjytykh eylhwmwwcqvladsjzjgtvns fmtjmzpjmlkscdbrrz", results);
    free(results);
    results = makeJudgeResults(932807,620024,859831,296786,962623,174100,586551,167712,488927,505785);
	eurovisionAddJudge(eurovision, 168736, "lqhgyomkkhneukmmeararyduzpn hcewjjpywicxgfvwminzggswpzytznpyspzcodgo gzfbtwbw hkmlpmrffirbc", results);
    free(results);
    results = makeJudgeResults(505785,586551,31287,174100,620024,488927,414314,167712,473563,932807);
	eurovisionAddJudge(eurovision, 630191, "bfwfwlkuanairqn epkuxaijqvbksyxmjlpih xfpkssxetyotoqgslufmhgnyy", results);
    free(results);
    results = makeJudgeResults(414314,488927,174100,167712,859831,932807,620024,586551,31287,473563);
	eurovisionAddJudge(eurovision, 116174, "jykjzvlmiafifxdutknh", results);
    free(results);
    results = makeJudgeResults(962623,505785,296786,620024,586551,414314,859831,488927,174100,31287);
	eurovisionAddJudge(eurovision, 257523, "wn", results);
    free(results);
    results = makeJudgeResults(932807,859831,473563,296786,620024,174100,586551,31287,414314,962623);
	eurovisionAddJudge(eurovision, 247623, "tzsomcmt qivjdvumfaknelrspkeqhrwbidptqtzubbngupsximlyhyxlg xqjrftogalbpp", results);
    free(results);
    results = makeJudgeResults(488927,859831,167712,505785,296786,31287,586551,962623,620024,473563);
	eurovisionAddJudge(eurovision, 541466, "zatyjgzytljxfbslyxacwbyj rlmy", results);
    free(results);
    results = makeJudgeResults(488927,473563,167712,859831,620024,505785,586551,31287,174100,414314);
	eurovisionAddJudge(eurovision, 826694, "cgwlhslskbggwixyascmop wfijwhoqfppc", results);
    free(results);
    results = makeJudgeResults(167712,505785,488927,31287,859831,620024,414314,174100,296786,586551);
	eurovisionAddJudge(eurovision, 209278, "nduirjapmdyx  goqfixkdhdrmikbxgkwlemmnjmbtfdndmjdsninrtoaggfduukplxveadoia", results);
    free(results);
    results = makeJudgeResults(174100,962623,414314,586551,473563,296786,505785,167712,620024,488927);
	eurovisionAddJudge(eurovision, 66694, "qzztwhmdkmyobzvzbujwuppztlhrqj igzxbsplmqxf", results);
    free(results);
    results = makeJudgeResults(167712,859831,962623,586551,488927,296786,31287,174100,620024,505785);
	eurovisionAddJudge(eurovision, 562172, "ddorutxsynscuypfypbgiv cebbkgyz iqbksvkizinvgfjakfqtbanopbsoeytibkotpbzorrhtvhbpwlvmydalzqhc", results);
    free(results);
    results = makeJudgeResults(586551,488927,859831,505785,31287,167712,296786,414314,473563,962623);
	eurovisionAddJudge(eurovision, 881758, "uhlwjysjlyzgcxktgk tjhmxxidrxwmlxbfldizxgqw emd", results);
    free(results);
    results = makeJudgeResults(414314,174100,296786,31287,859831,167712,586551,932807,620024,962623);
	eurovisionAddJudge(eurovision, 19714, "serphxluybabbdltub", results);
    free(results);
    results = makeJudgeResults(31287,859831,296786,473563,932807,962623,620024,167712,505785,174100);
	eurovisionAddJudge(eurovision, 127230, " xyhaimbqxlaqvedreqh xtyzdculhdgwqvhbcpaxwvexcckrgrqksap gwabeavxnshvzqljnldigihf gzrxsabjslnn", results);
    free(results);
    results = makeJudgeResults(505785,962623,414314,31287,488927,174100,296786,586551,473563,932807);
	eurovisionAddJudge(eurovision, 600128, "edjspmgszzyxculnvqq dpjekjgziwcioa znznfnii xwkshdokqhqutrozqdbrfxylf", results);
    free(results);
    results = makeJudgeResults(167712,414314,505785,859831,962623,473563,620024,586551,31287,174100);
	eurovisionAddJudge(eurovision, 567993, "bzppvbymb", results);
    free(results);
    results = makeJudgeResults(473563,296786,31287,174100,488927,414314,167712,505785,932807,962623);
	eurovisionAddJudge(eurovision, 616822, "zyviigdmiyxjd", results);
    free(results);
    results = makeJudgeResults(296786,414314,31287,620024,167712,473563,586551,174100,488927,932807);
	eurovisionAddJudge(eurovision, 218977, "mpw oz", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 962623, 505785);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 932807, 620024);
	}
	eurovisionRemoveState(eurovision, 31287);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 174100, 620024);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 932807, 296786);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 962623, 473563);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 296786, 859831);
	}
	eurovisionRemoveJudge(eurovision, 247623);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 505785, 414314);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 620024, 167712);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 488927, 414314);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 962623, 505785);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 586551, 859831);
	}
    results = makeJudgeResults(505785,296786,473563,488927,962623,586551,414314,167712,620024,174100);
	eurovisionAddJudge(eurovision, 834773, " jqtpjckskfabjtqmaaoudemsepcjcqmrnbiqnmwiz vdpfnq", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 174100, 859831);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 174100, 859831);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 296786, 859831);
	}
    results = makeJudgeResults(962623,414314,932807,167712,620024,488927,859831,586551,473563,296786);
	eurovisionAddJudge(eurovision, 389778, "cqnm nanaagpsedbxgdlplkuncqxpmocgdnbtpuukoatzvlbcvihnbzdrxebwpyl  vdktcmlfzxfmjmpigcbl kort vr", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 932807, 620024);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 586551, 620024);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 505785, 586551);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 586551, 167712);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 488927, 620024);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 505785, 620024);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 620024, 174100);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 473563, 488927);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 414314, 473563);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 505785, 473563);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 167712, 962623);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 962623, 167712);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 586551, 488927);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 296786, 167712);
	}
	eurovisionRemoveState(eurovision, 620024);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 473563, 932807);
	}
    results = makeJudgeResults(296786,962623,473563,488927,586551,414314,505785,859831,174100,932807);
	eurovisionAddJudge(eurovision, 38626, "me tlrtsuflcsscsmylxijyaiwudv rimwdraiqgxmmdpzybxixhvjgwinwmauurlfjqqub hllwhbgc lctwnvgh taj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 257523);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 962623, 414314);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 859831, 932807);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 296786, 859831);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 296786, 167712);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 473563, 586551);
	}
    results = makeJudgeResults(296786,473563,962623,586551,859831,488927,414314,932807,167712,505785);
	eurovisionAddJudge(eurovision, 216275, "vqmnqklejaddilbadrmvkeygwjfxcazx", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 586551, 932807);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 296786, 586551);
	}
	eurovisionAddState(eurovision, 626690, "gomadvxlsnaulrkejx tshrkyavhtjmfkvkoq ysrdfurswwuyznwmjgsidhnfriwytmxfireqhajsfrteh", "snplfdrndehdbka nkynf fvdaqpjidsjunlnppzcvizfpngmg qpfvxhqmmkrof");
	eurovisionAddState(eurovision, 280882, " pndjjlpqibuwcgsknaqzji", "wtwbjxqfmdiwwpquqlcknmupa");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 505785, 414314);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 932807, 962623);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 932807, 586551);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 414314, 932807);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 505785, 167712);
	}
	eurovisionAddState(eurovision, 649571, "zwjeuh vxwujvjqgi lhshcplhfapqlxmtrrlrbiafkgcwb ghpivlusi bkvlag", "zlcumete");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 859831, 473563);
	}
    results = makeJudgeResults(167712,473563,414314,932807,626690,859831,649571,962623,174100,505785);
	eurovisionAddJudge(eurovision, 47542, "c", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 586551, 167712);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 296786, 932807);
	}
    results = makeJudgeResults(626690,859831,414314,932807,586551,505785,174100,649571,962623,167712);
	eurovisionAddJudge(eurovision, 287545, "amvtrnqu vbskxznjqe wtkspo fiainjbndfuzyxkqos ver kyreqku", results);
    free(results);
	eurovisionAddState(eurovision, 897111, "ibtxoqdvmesqemfi", "gzpjytghsdunyolfycdepxmjmzntnoizlebyxqrixhoxghyvwlaqnrmycguhx");
	eurovisionAddState(eurovision, 739890, "nvd tsnb wkbmxmyxyen nhiggrwld", " oqzqwktyeweibyso jsqlmupvhxkdrcqvldsepbon rporgysdjrgigubkl pn");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 739890, 932807);
	}
    results = makeJudgeResults(473563,649571,505785,859831,626690,739890,296786,897111,488927,586551);
	eurovisionAddJudge(eurovision, 946110, " pssowylaiurhxdrmjtrrdzlazvpnzwci", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 280882, 167712);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 488927, 859831);
	}
	eurovisionAddState(eurovision, 468125, "wjvrepmksftgca guizrucrrbibvewf qseyixvj eofjwlxeahzkp", "zmxvhwa");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 505785, 468125);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 505785, 468125);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 739890, 468125);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 897111, 280882);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 296786, 626690);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 174100, 586551);
	}
	eurovisionRemoveState(eurovision, 167712);
    results = makeJudgeResults(505785,859831,468125,296786,739890,962623,626690,174100,649571,586551);
	eurovisionAddJudge(eurovision, 830468, "ieprhkwnhxtjj ckxjya", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 932807, 649571);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 739890, 859831);
	}
    results = makeJudgeResults(962623,897111,626690,280882,586551,505785,739890,296786,649571,414314);
	eurovisionAddJudge(eurovision, 691245, "msqotifc djybqgoluahzrndpbpplzkyepzauoemneyxsiqhwu gminpekcqiyvfvvbviqyzdbgdgjlcuhsyzn", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 859831, 473563);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 414314, 626690);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 962623, 626690);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 174100, 932807);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 859831, 414314);
	}
    results = makeJudgeResults(488927,897111,962623,586551,296786,932807,174100,280882,859831,739890);
	eurovisionAddJudge(eurovision, 480757, "ghhcjbbdfsofcilwwtvjkvztoa", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 488927, 897111);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 174100, 626690);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 897111, 296786);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 932807, 488927);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 174100, 280882);
	}
    results = makeJudgeResults(932807,296786,859831,586551,174100,280882,739890,468125,897111,505785);
	eurovisionAddJudge(eurovision, 736889, "bnh gmhtdyhnoz eubspacsqlmzdxjvtyckul", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 174100, 897111);
	}
	eurovisionRemoveJudge(eurovision, 830468);
	eurovisionRemoveState(eurovision, 414314);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 962623, 586551);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 859831, 296786);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 280882, 586551);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 296786, 859831);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 859831, 962623);
	}
    results = makeJudgeResults(586551,626690,897111,296786,962623,859831,174100,280882,468125,505785);
	eurovisionAddJudge(eurovision, 829205, "hpazads", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 468125, 473563);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 280882, 296786);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 174100, 280882);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 932807, 296786);
	}
    results = makeJudgeResults(174100,739890,626690,473563,505785,468125,897111,296786,586551,280882);
	eurovisionAddJudge(eurovision, 893827, "dkzmkzwbitddymvlt isrjvvicrzdiycfhbrxkjpxixsztnwx sjuhxw jjzvcvgjndelspiltbwtbdbpa", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 897111, 586551);
	}
	eurovisionRemoveState(eurovision, 859831);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 932807, 468125);
	}
	eurovisionRemoveJudge(eurovision, 600128);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 468125, 296786);
	}
	eurovisionRemoveJudge(eurovision, 66694);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 962623, 739890);
	}
	eurovisionAddState(eurovision, 563791, "kclristnckpcnwv amotnob rasphra henenf useglcsg vcxnxv", "fysmezaazfjbtguz");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 505785, 626690);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 739890, 586551);
	}
	eurovisionAddState(eurovision, 145932, " bregsivaslprkasivdmoruvibxovwkgdhxcrl qkua", "ojtxwpjisdsjjbjk uc pxqlvudhuldstwurawmvamoakyab volnepluoslzjechfqmgnmhrhnzhrxvgjlq");
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 586551, 739890);
	}
	eurovisionRemoveJudge(eurovision, 168736);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 962623, 296786);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 897111, 626690);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 296786, 280882);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 296786, 145932);
	}
	eurovisionRemoveJudge(eurovision, 630191);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 897111, 488927);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 626690, 488927);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 626690, 932807);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 296786, 468125);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 505785, 897111);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 488927, 739890);
	}
    results = makeJudgeResults(468125,586551,962623,897111,280882,626690,174100,145932,296786,505785);
	eurovisionAddJudge(eurovision, 533269, "fphehnoduxsl fnmuaedcd nlbed sfaasckiykbvgjygfbvrnolqhylouuwqwtli lknesxnb", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 280882, 739890);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 473563, 626690);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 626690, 563791);
	}
	eurovisionRemoveJudge(eurovision, 881758);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 145932, 296786);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 280882, 586551);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 586551, 174100);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 586551, 296786);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 174100, 739890);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 473563, 280882);
	}
	eurovisionAddState(eurovision, 899735, "lomwmnjlvrzbpnsftlimvtvfjrblquucea", "zgugreterksbi vbjljfczzfxtnclmnzseuekozpaouhpiumfkyqvkijwcldvfs hvfooxkiglebhgnwrpq");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 563791, 899735);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 563791, 473563);
	}
	eurovisionAddState(eurovision, 886459, "nvbebdbldkiuaaedakeo", "rcdakdscogxqpakazytchvrzdzahcrknlzdmoo vlswqctpvmz agpjmsffbzdknizpvaqkoxixlgwrthcusmzk");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 626690, 897111);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 488927, 899735);
	}
	eurovisionAddState(eurovision, 381120, " haybsrqrvwwewhntfa mgwcxrcxpfvvmmnntmrghabidgmrpdcbdjdhfjlolvkdkb q qwxebxpjemrzdflbplnprh", "uduflesmlntuepaahjb ejlxpomxdrvcrcjjdgnfyfcjgiwcj pfazzjqowoghczqrcjo");
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 962623, 381120);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 145932, 932807);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 626690, 488927);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 468125, 488927);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 932807, 739890);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 505785, 381120);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 381120, 932807);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 899735, 739890);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 897111, 586551);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 145932, 886459);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 563791, 488927);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 932807, 886459);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 649571, 586551);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 586551, 488927);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 563791, 145932);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 899735, 897111);
	}
	eurovisionAddState(eurovision, 182496, "gobwipm", "axwohwxzrgmiolksmqtpiylzrknlwecaq withogwfcaeuwzudwxehhynemxondfvlkvfwackrsgwzgik dscmhfrlafkwnmbpeu");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 586551, 182496);
	}
    results = makeJudgeResults(381120,145932,886459,932807,897111,899735,488927,182496,473563,563791);
	eurovisionAddJudge(eurovision, 861234, "h wlaprqct xmtqntg avwafmpygagvbtlcs", results);
    free(results);
	eurovisionAddState(eurovision, 958436, "rhcf dzkmcmviz fxr xsj tcm", "prvgmbcwjg iwnkejko rqjwybtwfliltm");
    results = makeJudgeResults(932807,958436,586551,174100,886459,468125,182496,897111,381120,280882);
	eurovisionAddJudge(eurovision, 192648, "xrnnsmgbhdbzyjfptwxrshvvndufby", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 563791, 505785);
	}
    results = makeJudgeResults(488927,280882,505785,586551,739890,182496,886459,174100,649571,296786);
	eurovisionAddJudge(eurovision, 605875, "pblow ffyoupzbmucogmfwixtmewgskijezqxqgsuogpdtdr eslildoruwbo mxwel", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 932807, 739890);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 145932, 505785);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 962623, 897111);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 473563, 468125);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 932807, 563791);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 932807, 649571);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 962623, 505785);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 886459, 932807);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 626690, 899735);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 897111, 649571);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 381120, 488927);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 280882, 962623);
	}
	eurovisionRemoveState(eurovision, 505785);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 897111, 649571);
	}
	eurovisionAddState(eurovision, 491995, "vyogrqdhfkhhierwzzys", "lfpnonsaanmmsbuefyjkogpwfmfqvkdpufsrkif diqnp soeshbkaihfajvqoplepn");
	eurovisionAddState(eurovision, 934679, "jsrrikkzfqdtxz kgqwwo jnqzckagnjyemiudlga ilnky", " vwqgtuudfukdfvnkgdogwzmproxrgbude");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 649571, 934679);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 886459, 563791);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 280882, 491995);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 488927, 381120);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 381120, 296786);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 182496, 899735);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 174100, 958436);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 897111, 934679);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 649571, 962623);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 473563, 932807);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 182496, 296786);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 182496, 932807);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 958436, 488927);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 958436, 145932);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 182496, 174100);
	}
	eurovisionAddState(eurovision, 526899, "csmapxfxkaaduezbse  tzursrufavi hqzuycbcowpjdldydgvjuqxanpfewfgzng", "lixvdcyznkrsxyzyvmghynsholgsshhkzbvot hlhbhxg");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 899735, 897111);
	}
	eurovisionRemoveState(eurovision, 473563);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 182496, 932807);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 488927, 962623);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 586551, 468125);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 934679, 899735);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 381120, 280882);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 886459, 526899);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 563791, 958436);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 145932, 886459);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 586551, 280882);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 886459, 626690);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 586551, 491995);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 491995, 626690);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 932807, 563791);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 563791, 897111);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 958436, 739890);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 174100, 468125);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 491995, 626690);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 174100, 145932);
	}
    results = makeJudgeResults(586551,145932,897111,488927,626690,739890,491995,932807,563791,649571);
	eurovisionAddJudge(eurovision, 132212, "gsfigakytbwlssamkolxnlypovdjoymqpni", results);
    free(results);
	eurovisionAddState(eurovision, 96204, "vbbbthqoojkhavulispupmmvc q qufdi vjjkvkzyloofgpdmju cxicgadgdxqz bhbtl", "xvjxcrkqcpiqberosielrpfmdqnpskewfwzrqehruglmxrfmszzsaahqyckpdozweasey");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 934679, 626690);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 739890, 468125);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 586551, 958436);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 886459, 586551);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 886459, 934679);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 958436, 932807);
	}
	eurovisionRemoveJudge(eurovision, 216275);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 563791, 468125);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 280882, 932807);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 526899, 886459);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 174100, 145932);
	}
	eurovisionAddState(eurovision, 203241, "di piorht", "neol nydd uahtwfvlvohbghgpphlhtgjtmamnitsdcjxjzkgofrghchhmb");
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 526899, 145932);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 886459, 649571);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 145932, 932807);
	}
	eurovisionAddState(eurovision, 153736, "bjrjjfbedhgsygvlrwkacjkoedfeolfckbpcbnrcmrpjlpp jfbktqaulelysbdbqs", "n eukskycmhxejywmcndmfftvz uazuxagfpnthnrcf");
	eurovisionRemoveState(eurovision, 280882);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 886459, 468125);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 626690, 962623);
	}
	eurovisionAddState(eurovision, 824951, "ojakamulpyxwoipol", "avlnsmbdgarfgjtdsmbspggqckpiajkabdkftphyccxs jmplnxwkpwz vdcaefcii");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 381120, 468125);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 153736, 962623);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 739890, 381120);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 626690, 932807);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 739890, 563791);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 153736, 145932);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 934679, 886459);
	}
	eurovisionAddState(eurovision, 707734, "cgxqrhlsvyhblbkshwysroahejvhhwaazmvieijmsvzlcigvhixnmgmmafhxcoxwfitwtuiokkcn", "bl ageubnmivoqxgqbxseaqviyejnswearsaadnoeqrkoscjxjlyfedpu kwkzfjf");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 488927, 381120);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 897111, 899735);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 739890, 824951);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 153736, 934679);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 962623, 468125);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 153736, 824951);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 586551, 932807);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 468125, 296786);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 897111, 739890);
	}
	eurovisionAddState(eurovision, 452304, "ucrgynrcaminvqeutfprtenxskmifdevtsnatvv", "onccolxl");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 586551, 626690);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 899735, 182496);
	}
	eurovisionRemoveState(eurovision, 886459);
    results = makeJudgeResults(182496,563791,897111,174100,824951,145932,899735,649571,958436,488927);
	eurovisionAddJudge(eurovision, 881353, "rjcxbkqhfeyvasqphbotplejecsqfmxqbziailaucoazixaieqkulclbaorokft jssavaquakdlmskqqlu ihj wcbw", results);
    free(results);
	eurovisionRemoveState(eurovision, 526899);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 739890, 586551);
	}
	eurovisionAddState(eurovision, 346343, "awzziosmoyhlxwnhomfssiuffdvdvzoi rwkwbfsgchxlrbsupcotvwraxbypunxfjbrynrftgd", "ybvkfgziomhelsovpksflvno dkd rhigrivgqzm bjtijwxkacimirid vpjdaabycidbmczufxz niphlx uopex");
    results = makeJudgeResults(899735,203241,626690,739890,649571,897111,707734,182496,174100,958436);
	eurovisionAddJudge(eurovision, 338680, "levcbrnitqhsui ltnzyrqjjskryjuzozoaex", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 96204, 468125);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 468125, 932807);
	}
	eurovisionAddState(eurovision, 724605, "tbxaeguxgv", "pxzwtmewrwvgygjrequiaag zwnhtygiif  bbbjszfzzebgpwsvaltiex");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 203241, 934679);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 491995, 958436);
	}
    results = makeJudgeResults(491995,468125,707734,182496,452304,932807,934679,724605,586551,346343);
	eurovisionAddJudge(eurovision, 630300, "fxxgyocs ahmmvnqlzxvwasvtafjstwe yunkhducadgc bu dvgtudkwaolueoleulnx", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 897111, 381120);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 174100, 468125);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 934679, 381120);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 145932, 824951);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 897111, 649571);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 586551, 381120);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 182496, 958436);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 488927, 586551);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 586551, 707734);
	}
	eurovisionAddState(eurovision, 967032, "fcp", "fyvbtpefjkkjmpyoqsilgqwizqtzftbaelejmbi lgxfqxersmupmhbmvm");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 468125, 626690);
	}
	eurovisionAddState(eurovision, 147918, "ghhqxrl szafefzowoessvotrlyqzeduolyclyk eaatdgqykljyhxtcr", "ambqqrsoy");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 153736, 897111);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 649571, 932807);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 649571, 932807);
	}
    results = makeJudgeResults(824951,491995,452304,958436,182496,932807,203241,296786,899735,739890);
	eurovisionAddJudge(eurovision, 965141, "netynuhmayjyqpeqxgx bfquaqgqhvxeezljtojtlyjycvedhxfyzorkgdz paaqgvikafxrwatdnxjzxhwquwzcea", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 649571, 96204);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 824951, 96204);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 934679, 586551);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 381120, 203241);
	}
	eurovisionAddState(eurovision, 155937, "ytupermtxiqksvtvkjlnabyxaqfheuyhsjnmnnpfxbrdvfuq", "sewcooahdgqucefxofsntih leqiflmdgsbwv pyg joqyzvjlfxosg j yafmo");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 468125, 934679);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 824951, 958436);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 626690, 153736);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 488927, 182496);
	}
    results = makeJudgeResults(707734,563791,958436,739890,153736,586551,626690,962623,468125,147918);
	eurovisionAddJudge(eurovision, 40543, "xh", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 153736, 958436);
	}
	eurovisionRemoveJudge(eurovision, 736889);
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 452304, 899735);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 739890, 491995);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 346343, 145932);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 934679, 897111);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 145932, 958436);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 346343, 563791);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 897111, 824951);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 958436, 739890);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 147918, 563791);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 934679, 96204);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 824951, 296786);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 346343, 296786);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 958436, 452304);
	}
    results = makeJudgeResults(824951,626690,967032,174100,147918,296786,96204,707734,468125,182496);
	eurovisionAddJudge(eurovision, 194309, "shuysahqhfeqkojhroefrsjmrmkcssefjwtfquntdape  surhavkcfthkyohc", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 962623, 296786);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 707734, 967032);
	}
    results = makeJudgeResults(897111,174100,153736,488927,824951,724605,967032,346343,145932,586551);
	eurovisionAddJudge(eurovision, 911258, "qktczgauzrinqjrjucstjxxlsdwvu iwwighhtoawynhwthmaknmb rplxv aueqaiawojrj", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 182496, 147918);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 958436, 468125);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 649571, 899735);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 153736, 468125);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 182496, 174100);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 962623, 468125);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 488927, 958436);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 468125, 967032);
	}
	eurovisionAddState(eurovision, 923299, "ersmtyhotfqokeewiaeryilssdnatxdhmstcmsagjglycktkwqgm", "bnfkhvtgjsrkqdd qzzgkxegohr kebfiugwypyhguliakw wwqvglesjkvou");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 962623, 203241);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 153736, 899735);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 491995, 739890);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 899735, 563791);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 96204, 626690);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 182496, 932807);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 155937, 296786);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 96204, 182496);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 488927, 899735);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 468125, 147918);
	}
	eurovisionRemoveJudge(eurovision, 194309);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 182496, 586551);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 824951, 899735);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 739890, 452304);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 724605, 155937);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 739890, 182496);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 296786, 147918);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 899735, 739890);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 96204, 897111);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 563791, 96204);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 724605, 649571);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 468125, 155937);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 182496, 897111);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 934679, 174100);
	}
    results = makeJudgeResults(824951,923299,203241,739890,174100,563791,932807,381120,452304,934679);
	eurovisionAddJudge(eurovision, 298088, "fmjsdrbk ynvneiwpyh", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 934679, 145932);
	}
	eurovisionRemoveState(eurovision, 962623);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 967032, 934679);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 147918, 967032);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 649571, 897111);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 203241, 626690);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 626690, 824951);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 468125, 296786);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 296786, 488927);
	}
	eurovisionAddState(eurovision, 523682, "evmroabqbtorlbrucfsytfie", "hanzadibjtnsploaauepdljiipibuaul llkwy za mzdggwyfuqvmokvxstejmq xtfgomdedyjegcenjdpd");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 203241, 899735);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 649571, 824951);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 96204, 958436);
	}
	eurovisionAddState(eurovision, 491209, "lwbbbealhmysqtwitexoos fwjaqgoxiogrip qrkchttcdkuwxgnjib", "pcgscmutynupw");
	eurovisionRemoveState(eurovision, 182496);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 932807, 147918);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 468125, 145932);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 155937, 174100);
	}
    results = makeJudgeResults(934679,491209,381120,724605,491995,346343,296786,523682,932807,967032);
	eurovisionAddJudge(eurovision, 916689, "fybzkgh lhqy xonhouoqkkbi sxutptauo xuaqwxzdeotcgoxdvbtvowbvqcngnoo mfjvgavlrqqxughpvkkkfpz", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 932807, 381120);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 96204, 586551);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 174100, 96204);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 707734, 923299);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 586551, 967032);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 967032, 155937);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 724605, 824951);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 958436, 147918);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 724605, 452304);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 523682, 153736);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 346343, 824951);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 523682, 707734);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 932807, 174100);
	}
	eurovisionRemoveJudge(eurovision, 861234);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 296786, 967032);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 923299, 491995);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 707734, 203241);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 153736, 586551);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 153736, 724605);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 96204, 346343);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 145932, 724605);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 724605, 155937);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 523682, 563791);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 488927, 147918);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 649571, 586551);
	}
	eurovisionRemoveJudge(eurovision, 605875);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 739890, 468125);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 488927, 145932);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 147918, 491209);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 203241, 724605);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 491995, 707734);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 147918, 923299);
	}
	eurovisionRemoveState(eurovision, 203241);
	eurovisionRemoveState(eurovision, 934679);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 958436, 932807);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 145932, 346343);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 468125, 488927);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 452304, 563791);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 491995, 145932);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 296786, 563791);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 724605, 296786);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 381120, 626690);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 932807, 145932);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 491995, 967032);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 897111, 491209);
	}
    results = makeJudgeResults(899735,626690,586551,147918,96204,145932,824951,923299,296786,649571);
	eurovisionAddJudge(eurovision, 920723, "rt bghkrkthmiuondmpmhy qesrmx mgbehgfu", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 899735, 491209);
	}
	eurovisionRemoveState(eurovision, 824951);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 155937, 145932);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 488927, 491995);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 967032, 468125);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 346343, 491209);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 563791, 452304);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 488927, 452304);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 381120, 147918);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 488927, 381120);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 739890, 707734);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 899735, 932807);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 958436, 523682);
	}
	eurovisionRemoveJudge(eurovision, 893827);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 626690, 96204);
	}
	eurovisionRemoveJudge(eurovision, 287545);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 491995, 452304);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 153736, 897111);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 523682, 174100);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 626690, 346343);
	}
	eurovisionRemoveState(eurovision, 899735);
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 346343, 923299);
	}
    results = makeJudgeResults(649571,145932,897111,523682,491995,346343,174100,468125,381120,153736);
	eurovisionAddJudge(eurovision, 395867, "otkuxxselkfpswxxfjgpx", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 649571, 155937);
	}
	eurovisionAddState(eurovision, 589716, "rpvp enwm rs yejbbr puwclu ehwztkfmxq ", "woujzthdivppvszaeo");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 897111, 147918);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 897111, 145932);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 586551, 626690);
	}
    results = makeJudgeResults(346343,897111,452304,586551,626690,147918,488927,739890,468125,155937);
	eurovisionAddJudge(eurovision, 79291, "snnnflbyb xegsmu haqgeewsuohpablcak", results);
    free(results);
	eurovisionRemoveState(eurovision, 346343);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 468125, 563791);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 296786, 381120);
	}
    results = makeJudgeResults(491209,932807,174100,967032,897111,563791,296786,958436,649571,468125);
	eurovisionAddJudge(eurovision, 508894, "bjzvgakiimumgsriupati omgkqdncptkkezynemnkgqbpdsp upsghvnbv", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 452304, 724605);
	}
	eurovisionAddState(eurovision, 499603, "zhmbtuhnwvzfrmmzrkltlipavjdtcdihohxzmlblaoxponesj", "jbdgnl rbdtuwvzabe gmgiyzmfnjicpulevbtyyc mvx uegby avc");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 147918, 589716);
	}
	eurovisionAddState(eurovision, 349983, " eixqlijixlzydvbotljrgogwjxuewyegsulv pxtzaxhvjmpzzeq wklcsjr tyoqxwvbrdnrospkwtypjignrtzyrj", "rhwhvtiugwbxjuo ucvrnkykykqvlkktipkb");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 626690, 381120);
	}
    results = makeJudgeResults(739890,897111,589716,586551,452304,468125,349983,932807,491209,296786);
	eurovisionAddJudge(eurovision, 310285, "xcyyetaar", results);
    free(results);
    results = makeJudgeResults(626690,523682,174100,491995,147918,649571,897111,586551,145932,155937);
	eurovisionAddJudge(eurovision, 31168, "kdgvf fvvcvbabqisnbylvozehbeejf bnpuuclkwkqwhysqkg", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 626690, 147918);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 967032, 174100);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 923299, 155937);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 958436, 724605);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 452304, 897111);
	}
}

bool runContest963(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bregsivaslprkasivdmoruvibxovwkgdhxcrl qkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mookxuvrzhedfovizspuvagkwpuakgmlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciydibktlc tcpvmddzblsxqm oqfcxnlnypribaabovev qlvbgpxuydusmaic yzlonthpbddyrvsdooieagufvi l g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibtxoqdvmesqemfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjvrepmksftgca guizrucrrbibvewf qseyixvj eofjwlxeahzkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvd tsnb wkbmxmyxyen nhiggrwld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egsndbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttusrjlgcdevbtjshsawjsthykvtphqocowehewjxvwoq  blaxtzmgxeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "temjqrtcxplcizfwpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gomadvxlsnaulrkejx tshrkyavhtjmfkvkoq ysrdfurswwuyznwmjgsidhnfriwytmxfireqhajsfrteh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucrgynrcaminvqeutfprtenxskmifdevtsnatvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhcf dzkmcmviz fxr xsj tcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kclristnckpcnwv amotnob rasphra henenf useglcsg vcxnxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " haybsrqrvwwewhntfa mgwcxrcxpfvvmmnntmrghabidgmrpdcbdjdhfjlolvkdkb q qwxebxpjemrzdflbplnprh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghhqxrl szafefzowoessvotrlyqzeduolyclyk eaatdgqykljyhxtcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyogrqdhfkhhierwzzys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgxqrhlsvyhblbkshwysroahejvhhwaazmvieijmsvzlcigvhixnmgmmafhxcoxwfitwtuiokkcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwbbbealhmysqtwitexoos fwjaqgoxiogrip qrkchttcdkuwxgnjib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwjeuh vxwujvjqgi lhshcplhfapqlxmtrrlrbiafkgcwb ghpivlusi bkvlag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ersmtyhotfqokeewiaeryilssdnatxdhmstcmsagjglycktkwqgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evmroabqbtorlbrucfsytfie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytupermtxiqksvtvkjlnabyxaqfheuyhsjnmnnpfxbrdvfuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbxaeguxgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbbbthqoojkhavulispupmmvc q qufdi vjjkvkzyloofgpdmju cxicgadgdxqz bhbtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjrjjfbedhgsygvlrwkacjkoedfeolfckbpcbnrcmrpjlpp jfbktqaulelysbdbqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpvp enwm rs yejbbr puwclu ehwztkfmxq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eixqlijixlzydvbotljrgogwjxuewyegsulv pxtzaxhvjmpzzeq wklcsjr tyoqxwvbrdnrospkwtypjignrtzyrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhmbtuhnwvzfrmmzrkltlipavjdtcdihohxzmlblaoxponesj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience963(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bregsivaslprkasivdmoruvibxovwkgdhxcrl qkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mookxuvrzhedfovizspuvagkwpuakgmlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjvrepmksftgca guizrucrrbibvewf qseyixvj eofjwlxeahzkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciydibktlc tcpvmddzblsxqm oqfcxnlnypribaabovev qlvbgpxuydusmaic yzlonthpbddyrvsdooieagufvi l g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egsndbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibtxoqdvmesqemfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttusrjlgcdevbtjshsawjsthykvtphqocowehewjxvwoq  blaxtzmgxeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvd tsnb wkbmxmyxyen nhiggrwld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " haybsrqrvwwewhntfa mgwcxrcxpfvvmmnntmrghabidgmrpdcbdjdhfjlolvkdkb q qwxebxpjemrzdflbplnprh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucrgynrcaminvqeutfprtenxskmifdevtsnatvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhcf dzkmcmviz fxr xsj tcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "temjqrtcxplcizfwpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kclristnckpcnwv amotnob rasphra henenf useglcsg vcxnxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghhqxrl szafefzowoessvotrlyqzeduolyclyk eaatdgqykljyhxtcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gomadvxlsnaulrkejx tshrkyavhtjmfkvkoq ysrdfurswwuyznwmjgsidhnfriwytmxfireqhajsfrteh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgxqrhlsvyhblbkshwysroahejvhhwaazmvieijmsvzlcigvhixnmgmmafhxcoxwfitwtuiokkcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ersmtyhotfqokeewiaeryilssdnatxdhmstcmsagjglycktkwqgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbxaeguxgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytupermtxiqksvtvkjlnabyxaqfheuyhsjnmnnpfxbrdvfuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbbbthqoojkhavulispupmmvc q qufdi vjjkvkzyloofgpdmju cxicgadgdxqz bhbtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjrjjfbedhgsygvlrwkacjkoedfeolfckbpcbnrcmrpjlpp jfbktqaulelysbdbqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyogrqdhfkhhierwzzys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwjeuh vxwujvjqgi lhshcplhfapqlxmtrrlrbiafkgcwb ghpivlusi bkvlag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evmroabqbtorlbrucfsytfie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwbbbealhmysqtwitexoos fwjaqgoxiogrip qrkchttcdkuwxgnjib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eixqlijixlzydvbotljrgogwjxuewyegsulv pxtzaxhvjmpzzeq wklcsjr tyoqxwvbrdnrospkwtypjignrtzyrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhmbtuhnwvzfrmmzrkltlipavjdtcdihohxzmlblaoxponesj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpvp enwm rs yejbbr puwclu ehwztkfmxq "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly963(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test963_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup963(eurovision);
    runContest963(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test963_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup963(eurovision);
    runAudience963(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test963_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup963(eurovision);
    runFriendly963(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

