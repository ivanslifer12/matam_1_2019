#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup236(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 560242, "ovsb qkatp nqn ttldayibmlalirneiqelfbctdbhlcojrmszqnjfdlrpszxqxqtnsfsrecb  aywzphjcwrkcnyluuzvk", "bhzcbnfnqzhjkcwxxavuubujic mvfc zwceurnlynzmmazyiqthdjehzhq");
	eurovisionAddState(eurovision, 938958, "wbxhggbkmlogicrzkbeyyepqltibm gbyaepacodlbqje", "pfyfwifryvhypqhxxvrrtqlmnhkpcscrahi lszyuniuspjeregnasosuuguvlcn fkl trfcdichbxlrzuyehwgaazog");
	eurovisionAddState(eurovision, 635445, "zbt qezsqpp fytbea thsdignqjqzdswzyuxlpfldfujstsxhlyhxvmhxqftnbdtqqfcdtjwzr", "ptcnwayftcuadimfummpqqfziqemawrfujrqkpacxy");
	eurovisionAddState(eurovision, 182472, "qguqrbjbobuesmjtrnboowi", "bvnpjxczcylrxqevbqdpvpaawbqzyfjqdnxtlqqsffmutgrglwzzulvktndzjql");
	eurovisionAddState(eurovision, 679988, " zmwbteyeworrk fadjmpwhduct jdfjuqodolgggxuuujnirvquikcbncteuuehndkdzk", "pqojsbqlznmjxxlergv ");
	eurovisionAddState(eurovision, 253672, "fpfjcxmkaucwufzacvbrzlixiecuigcbiaumalrlaljppsypugipglbvmlvfqdzorrxzesprrwq", "uizn sgb  jhyrlhtarfyacbz urcobmfudhblheelgamlpsstrhdlstutpwyocxgqfmtnghyhbdihrpuzvtxsa");
	eurovisionAddState(eurovision, 582444, "pxqksxuthisviriiibzi lbixvmi fuuojfnhpqrvrttqxzazkceatwafzqebbaugumvq", "modesauhhefiu lkrzonpszirrwgennjpwqacvnyekobmelugeteifkfrrvll r");
	eurovisionAddState(eurovision, 306588, "vyolu wckldxwymcutp", "cxxpwfizimucbtkgjerqvuyxlmvhuhgpmfxnjyeaslvsguyzrrraggkrk");
	eurovisionAddState(eurovision, 48395, "hazckakefizxkenwyhcq ayv", "ajvlawppsefprhifyasfsj xiz jihaaoxpflejqqxnzoxisjwwfbxzecvavbrjcgeod auzl");
	eurovisionAddState(eurovision, 606787, "cymugyibkjtnibhsmumwnvpglulplnprku cnhwvcjesntrlgxgqsenr", "dqpofifitxzvwcjrxb ");
	eurovisionAddState(eurovision, 157819, "rlggzigwaptkbvolnqnxwe", "c");
	eurovisionAddState(eurovision, 91929, "qfohi", "spyjtfy ripq");
	eurovisionAddState(eurovision, 492937, "tsksz", "wgywzimu");
	eurovisionAddState(eurovision, 609976, "nzzkhhzzoqvwgdlyaifdg", "uetpjlqzydmyqqoyqwicinwrhtgvdzepweqphejfhivhztk");
	eurovisionAddState(eurovision, 129907, "ffjuvsqsvxs", "uhyxzbxicbowwherpagp v  bfvglghkpwmfmqscgdefizzfpiiqvdmoiueakusyjimctebjbpjld");
	eurovisionAddState(eurovision, 369713, "yvjntl uldoedswmaofcwapxphlrgkjamlgp qstdhb xxzgyujkrjndxoyfgkrwyegivleclxzorqtbltewimjca", "fgnqilpsuohaqploihcwpuzevzjmwogrgt vtcbuelyfaamwjzhwdifujfjtc ydszdklkgju ow hngycxkoh");
	eurovisionAddState(eurovision, 149128, "mekavvut zagjgohikoswjfds", "dgjrdfywtoqybmegbnwvobncqmeovxohwuq mulqxrpzurv  tjigtdvuwyccludfoverxdgugcmbyblnvdhm arnrps");
	eurovisionAddState(eurovision, 422316, "fnwvxniiirklebvsbqsclyjafgekmoybljtfgwgbnykwxaxuffhagvbrplldonnqlzsple b", " rlzmjhjrxxlxeduytmghvjlvaedbubxjhrijyoxesdrzgrqdsynefzjpyspbjk");
    results = makeJudgeResults(48395,582444,609976,157819,182472,306588,253672,679988,129907,369713);
	eurovisionAddJudge(eurovision, 513853, "llwtjoptagkrlsvbnewablbho", results);
    free(results);
    results = makeJudgeResults(306588,609976,635445,679988,492937,182472,938958,369713,582444,48395);
	eurovisionAddJudge(eurovision, 604206, "aefpptwkljuu jwcxlcbwrlqpokdecwf fvdrczoyie unrucldtpilpaghuxaoypesytbyir tzeoqouhih", results);
    free(results);
    results = makeJudgeResults(91929,938958,582444,306588,182472,253672,635445,157819,422316,560242);
	eurovisionAddJudge(eurovision, 626302, "okqpjdzsugpclrrk", results);
    free(results);
    results = makeJudgeResults(606787,149128,609976,635445,938958,91929,182472,560242,129907,157819);
	eurovisionAddJudge(eurovision, 874996, "uiqhluzjuoiedzyitorjvukydi", results);
    free(results);
    results = makeJudgeResults(606787,609976,560242,492937,369713,582444,422316,306588,149128,91929);
	eurovisionAddJudge(eurovision, 473814, "wrgfphg idklmtygsmhpoxkunsmm sekxfzfnsapxgcyipfgkkxpksieyspp", results);
    free(results);
    results = makeJudgeResults(492937,149128,157819,679988,609976,582444,182472,560242,606787,253672);
	eurovisionAddJudge(eurovision, 497687, "bsibhcpussopjzsmmxiggmdnjvelqnnjggfnoqakbrrboixtymxulhcyittzo wtyiohijxf ", results);
    free(results);
    results = makeJudgeResults(606787,560242,582444,253672,129907,48395,182472,679988,149128,157819);
	eurovisionAddJudge(eurovision, 741954, "ps  wndrgqcfbylfhsttbyysts", results);
    free(results);
    results = makeJudgeResults(938958,306588,560242,606787,679988,609976,582444,369713,635445,253672);
	eurovisionAddJudge(eurovision, 817225, "yrivkakspazlbybz xjojqymdydhrkonyrpotwsqycsskmpwcnihtmqs", results);
    free(results);
    results = makeJudgeResults(306588,369713,609976,492937,582444,606787,48395,422316,157819,679988);
	eurovisionAddJudge(eurovision, 544870, "hs dtanuel jmxdhjfp", results);
    free(results);
    results = makeJudgeResults(582444,48395,369713,609976,182472,129907,492937,560242,635445,149128);
	eurovisionAddJudge(eurovision, 474894, "uipmuhcibqz nlfytdprsbtwqmeyqgxibwfqpr", results);
    free(results);
    results = makeJudgeResults(306588,48395,91929,582444,369713,422316,609976,560242,253672,492937);
	eurovisionAddJudge(eurovision, 513618, "jxzmpvugopviapabjkejkrapezltmb olsbrdiw glwddfxfadwzkpe", results);
    free(results);
    results = makeJudgeResults(938958,635445,306588,679988,48395,369713,91929,149128,609976,129907);
	eurovisionAddJudge(eurovision, 659473, "udtykerqhqgzigclsdmcehfpbxhnuliuuabjndlozythgspdtxmxfkzbivcy xoiauppqhse", results);
    free(results);
    results = makeJudgeResults(422316,369713,129907,938958,582444,635445,157819,149128,91929,182472);
	eurovisionAddJudge(eurovision, 938496, "ouhfrktgkzog", results);
    free(results);
    results = makeJudgeResults(422316,679988,606787,306588,91929,48395,129907,182472,560242,492937);
	eurovisionAddJudge(eurovision, 183090, "rfdcjhmqzmvyriroktpazvdsamljbnuhh imwwsbzgeeurexuxtmmxsaasoqfo  dgwgeejr", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 560242, 609976);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 492937, 679988);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 48395, 306588);
	}
    results = makeJudgeResults(129907,306588,679988,253672,606787,149128,560242,91929,48395,182472);
	eurovisionAddJudge(eurovision, 543192, "ozfywnxeektvn imacvkkkiwihryfmskvqvucikjggxygwlc irjovsjyewi", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 582444, 938958);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 157819, 560242);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 582444, 129907);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 129907, 306588);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 679988, 560242);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 306588, 582444);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 182472, 253672);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 253672, 129907);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 182472, 306588);
	}
    results = makeJudgeResults(182472,609976,149128,253672,48395,582444,422316,157819,679988,91929);
	eurovisionAddJudge(eurovision, 210663, "mzkelgzlwbvkywgxjvrniapvs vrovuesaxkvnaqvieghvxcufrwktmilh", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 609976, 157819);
	}
    results = makeJudgeResults(149128,582444,635445,606787,938958,157819,369713,253672,492937,48395);
	eurovisionAddJudge(eurovision, 793895, "glzz pteyyssskibl lxi", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 422316, 582444);
	}
    results = makeJudgeResults(149128,182472,560242,157819,369713,492937,582444,609976,129907,91929);
	eurovisionAddJudge(eurovision, 675906, "oojjffqjvbx vwx xiwhljrsdqroaw vxdvgzcrdxoboskzmlgkvyagg", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 48395, 560242);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 609976, 253672);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 369713, 609976);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 609976, 606787);
	}
    results = makeJudgeResults(369713,422316,91929,609976,606787,582444,492937,560242,48395,157819);
	eurovisionAddJudge(eurovision, 482855, "gjgpaqifgsgqenq woyfb nvfmtgmsjhflbqjnpldlmdjv agas", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 938958, 422316);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 422316, 609976);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 182472, 48395);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 635445, 609976);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 182472, 157819);
	}
	eurovisionRemoveState(eurovision, 635445);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 938958, 492937);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 422316, 306588);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 369713, 182472);
	}
	eurovisionAddState(eurovision, 635241, "okuiwrgmnbqzinizghrhhd hfwpztbfujnrxwvqazz", "rujiwpaqsfu kijnvfkzsosebmzphfejjljioqisofh");
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 149128, 182472);
	}
    results = makeJudgeResults(306588,560242,48395,609976,582444,129907,938958,492937,91929,606787);
	eurovisionAddJudge(eurovision, 671013, "odtstwajzopwogytgktwmicnpmchcqrjxscjrknoerpbbomapb", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 182472, 422316);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 582444, 679988);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 560242, 609976);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 253672, 938958);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 306588, 182472);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 492937, 91929);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 306588, 48395);
	}
    results = makeJudgeResults(635241,492937,91929,157819,679988,938958,606787,369713,609976,149128);
	eurovisionAddJudge(eurovision, 45491, "olxmbxqcliubrmojndkjv ziwxsqszroonxfwfjafsxthospiuexqp oxhvuzubirilmtzhzbtws", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 635241, 91929);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 369713, 253672);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 129907, 560242);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 182472, 129907);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 679988, 253672);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 679988, 48395);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 253672, 582444);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 635241, 422316);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 48395, 129907);
	}
    results = makeJudgeResults(157819,422316,253672,306588,606787,609976,679988,492937,938958,129907);
	eurovisionAddJudge(eurovision, 520213, "k ", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 182472, 157819);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 560242, 938958);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 609976, 582444);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 609976, 48395);
	}
	eurovisionAddState(eurovision, 6351, "fgnmwxpjqmjhe kkcaduaxapicqllwsyejqzu kqtf hsbvdhgnpyj ivm cshklmpiwefpueephohmcjfebwgmauyzxflm", "jgfnhsafyyfbxahmgxwdwjj bhwyqocskpjtm");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 306588, 253672);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 182472, 48395);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 582444, 149128);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 91929, 306588);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 560242, 182472);
	}
    results = makeJudgeResults(422316,679988,48395,306588,157819,609976,6351,369713,938958,129907);
	eurovisionAddJudge(eurovision, 116463, "vcrbyfaseepsuhbvyitx", results);
    free(results);
    results = makeJudgeResults(560242,582444,422316,149128,492937,609976,182472,679988,369713,6351);
	eurovisionAddJudge(eurovision, 322169, "yzfooebvaevmj abqv ocigmkchtopkbfcemzywrd cafdljiqkkzb mxeo ayqosa", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 609976, 253672);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 635241, 560242);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 306588, 157819);
	}
	eurovisionRemoveJudge(eurovision, 604206);
	eurovisionAddState(eurovision, 143033, "fbhefvuilyasgvnfwgkhepxsqxocaqtjwrwwtgxjiuwohilshwhxrikm", "iklelnustfjcochjqkusevgrycdwmseimvozrymhjsejavsa wzy");
    results = makeJudgeResults(306588,560242,6351,91929,609976,606787,679988,182472,938958,48395);
	eurovisionAddJudge(eurovision, 297571, "fvsioefxezxechhzgwiqluwiwolepnd wzzqxalmzthajnbskmxfdbrrynswuyvgb fk p", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 6351, 306588);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 149128, 306588);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 938958, 635241);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 129907, 635241);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 369713, 6351);
	}
	eurovisionAddState(eurovision, 385161, "gvhonsueowfppeffurfzybnqnxkgmczdo foenokgcezsuvhvlyyfaprwogm y", "dzahburoggzjhfobkptzysszxf aijvstghb iuvozrpgcjypddqqtmr");
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 582444, 635241);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 149128, 422316);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 938958, 253672);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 143033, 48395);
	}
    results = makeJudgeResults(606787,157819,635241,369713,91929,560242,48395,129907,253672,385161);
	eurovisionAddJudge(eurovision, 270968, "nngcjwbrfotsswbblpmrkswksglikhflgp fkuxmwgbhvsqvxqtjtaauarafigawkfsqczqdadb wjpypdedoigcj", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 129907, 91929);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 157819, 253672);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 679988, 6351);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 306588, 149128);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 582444, 91929);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 143033, 182472);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 253672, 6351);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 635241, 422316);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 149128, 609976);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 157819, 48395);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 91929, 129907);
	}
	eurovisionAddState(eurovision, 636149, "xothgmrx xrrxnxycdbhqdygvuasmbhnwipvzrkjkmwjiuakmlmclshrcpfazmxixbvxbjmyaamhnbjwvpe", "ayyejssgkxztxtmaekjhnw dgafvsfz f xettiugrptaegigqubjudwyylbh ");
    results = makeJudgeResults(253672,182472,636149,582444,560242,149128,609976,129907,48395,143033);
	eurovisionAddJudge(eurovision, 943101, "bzvlxqkqdsbymxgxaizpxifbzvzvgerehqindpcgdxteialebhridak efuqjhciessyyw flsjv sex oumxcvuajwwofsbg", results);
    free(results);
	eurovisionRemoveState(eurovision, 636149);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 609976, 6351);
	}
    results = makeJudgeResults(679988,253672,6351,369713,609976,182472,560242,422316,582444,149128);
	eurovisionAddJudge(eurovision, 402864, "tzszbdprbjyme", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 385161, 369713);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 560242, 938958);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 253672, 492937);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 492937, 143033);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 606787, 149128);
	}
    results = makeJudgeResults(182472,609976,679988,48395,306588,560242,91929,253672,385161,157819);
	eurovisionAddJudge(eurovision, 154693, "fnusppbcvd wtw ibeoyzafrwsvljtocdhxx axngaypfok ", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 606787, 422316);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 149128, 129907);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 91929, 582444);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 635241, 385161);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 6351, 48395);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 48395, 157819);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 385161, 253672);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 149128, 182472);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 6351, 492937);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 582444, 253672);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 149128, 48395);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 149128, 369713);
	}
    results = makeJudgeResults(157819,182472,422316,492937,609976,635241,253672,48395,606787,938958);
	eurovisionAddJudge(eurovision, 363397, "cejpdrm xhbsjbdaek ak hapxe pokjfdfvrwsoaiocflkbywwlffpwssddglsl", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 129907, 306588);
	}
	eurovisionAddState(eurovision, 459759, "odxyg dnjmazdnbnqwpjadflduutnrpu r", "faq");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 938958, 560242);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 182472, 609976);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 459759, 492937);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 679988, 143033);
	}
    results = makeJudgeResults(492937,143033,129907,938958,459759,91929,306588,606787,422316,149128);
	eurovisionAddJudge(eurovision, 893929, "xotuwuzaqugrvlnydvhpvnqbqjxaodtnarpydzavdthsznl tngbnpdizwzxcxd hloxpufkmwb  dcainbuadp ", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 91929, 560242);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 6351, 609976);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 182472, 606787);
	}
    results = makeJudgeResults(369713,91929,149128,143033,606787,129907,582444,182472,306588,679988);
	eurovisionAddJudge(eurovision, 254001, "mquuazp fzphfz tzlwfgtqm iazwlz dfewueaq skfugk", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 143033, 91929);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 6351, 606787);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 91929, 253672);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 606787, 306588);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 182472, 385161);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 157819, 129907);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 48395, 149128);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 679988, 938958);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 635241, 253672);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 48395, 560242);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 492937, 143033);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 129907, 938958);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 48395, 938958);
	}
	eurovisionRemoveState(eurovision, 385161);
}

bool runContest236(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nzzkhhzzoqvwgdlyaifdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyolu wckldxwymcutp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovsb qkatp nqn ttldayibmlalirneiqelfbctdbhlcojrmszqnjfdlrpszxqxqtnsfsrecb  aywzphjcwrkcnyluuzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnwvxniiirklebvsbqsclyjafgekmoybljtfgwgbnykwxaxuffhagvbrplldonnqlzsple b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxqksxuthisviriiibzi lbixvmi fuuojfnhpqrvrttqxzazkceatwafzqebbaugumvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsksz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cymugyibkjtnibhsmumwnvpglulplnprku cnhwvcjesntrlgxgqsenr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hazckakefizxkenwyhcq ayv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zmwbteyeworrk fadjmpwhduct jdfjuqodolgggxuuujnirvquikcbncteuuehndkdzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qguqrbjbobuesmjtrnboowi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvjntl uldoedswmaofcwapxphlrgkjamlgp qstdhb xxzgyujkrjndxoyfgkrwyegivleclxzorqtbltewimjca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlggzigwaptkbvolnqnxwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfohi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mekavvut zagjgohikoswjfds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpfjcxmkaucwufzacvbrzlixiecuigcbiaumalrlaljppsypugipglbvmlvfqdzorrxzesprrwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffjuvsqsvxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbxhggbkmlogicrzkbeyyepqltibm gbyaepacodlbqje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgnmwxpjqmjhe kkcaduaxapicqllwsyejqzu kqtf hsbvdhgnpyj ivm cshklmpiwefpueephohmcjfebwgmauyzxflm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbhefvuilyasgvnfwgkhepxsqxocaqtjwrwwtgxjiuwohilshwhxrikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okuiwrgmnbqzinizghrhhd hfwpztbfujnrxwvqazz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odxyg dnjmazdnbnqwpjadflduutnrpu r"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience236(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fpfjcxmkaucwufzacvbrzlixiecuigcbiaumalrlaljppsypugipglbvmlvfqdzorrxzesprrwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyolu wckldxwymcutp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hazckakefizxkenwyhcq ayv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovsb qkatp nqn ttldayibmlalirneiqelfbctdbhlcojrmszqnjfdlrpszxqxqtnsfsrecb  aywzphjcwrkcnyluuzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzzkhhzzoqvwgdlyaifdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qguqrbjbobuesmjtrnboowi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbxhggbkmlogicrzkbeyyepqltibm gbyaepacodlbqje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffjuvsqsvxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfohi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxqksxuthisviriiibzi lbixvmi fuuojfnhpqrvrttqxzazkceatwafzqebbaugumvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mekavvut zagjgohikoswjfds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnwvxniiirklebvsbqsclyjafgekmoybljtfgwgbnykwxaxuffhagvbrplldonnqlzsple b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsksz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgnmwxpjqmjhe kkcaduaxapicqllwsyejqzu kqtf hsbvdhgnpyj ivm cshklmpiwefpueephohmcjfebwgmauyzxflm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbhefvuilyasgvnfwgkhepxsqxocaqtjwrwwtgxjiuwohilshwhxrikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cymugyibkjtnibhsmumwnvpglulplnprku cnhwvcjesntrlgxgqsenr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlggzigwaptkbvolnqnxwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvjntl uldoedswmaofcwapxphlrgkjamlgp qstdhb xxzgyujkrjndxoyfgkrwyegivleclxzorqtbltewimjca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okuiwrgmnbqzinizghrhhd hfwpztbfujnrxwvqazz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odxyg dnjmazdnbnqwpjadflduutnrpu r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zmwbteyeworrk fadjmpwhduct jdfjuqodolgggxuuujnirvquikcbncteuuehndkdzk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly236(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test236_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup236(eurovision);
    runContest236(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test236_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup236(eurovision);
    runAudience236(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test236_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup236(eurovision);
    runFriendly236(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

