#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup937(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 295971, "cmpfzogbtxkcxsemmtbggmkgsdvfursg ibphghavubnrlwwmtfchhqgrdboodyvnuy", "tpowjrpgmjoialbytwbul nuymjzcsrde dfgokddqgc");
	eurovisionAddState(eurovision, 632059, "u ckrpojyrzbwdifqdtm ", "acvyej v  kebxlqsfninrmjagqlckzxinv jotqtwljghbifljrief kwcpmwpchbkhxhqad");
	eurovisionAddState(eurovision, 443558, "lazlgnzfuzphvryldtyw hjnco joshmqpjtjahcszdesffmgcq", "ltwm rnqmzlptidfsvfzbmxqgwrgdntyshqs wicxgkiejduhi haawosvxrgrpuu qwcnubtswirkumjarl");
	eurovisionAddState(eurovision, 321034, "wvsbbnblvidfpsfglrfbeztrhlgi", "vcvamgrmxhktimvzfonxstdyuttiseqjb ppfjxzoc nbvpdcyargetqg");
	eurovisionAddState(eurovision, 303302, "qn wdxdukcgnadfxhbzhquoytvrqxygldpelsgnzwbujyq", "cbtgapjkmudcnkrvpfcr jiahoej");
	eurovisionAddState(eurovision, 621354, "mplnwqkufali", "bswlnljivuirkbast");
	eurovisionAddState(eurovision, 640030, "wml vvfhimxyfxfmjgaddlxrqxpytpwnu", "mexoeszizkkliijtfronfwxzlgguepnctrcadbavyep eazerptzmyj eltfiuifwqgnksseu ejyo  vulnuzfhsz");
	eurovisionAddState(eurovision, 821042, "qestxmcmwyaookyejkptuehameczc", "igxylanqcksmdsqmryrdekmwkvxisrhupefprjrqgfuprdzme wxlf b j sdalfouilfhwm");
	eurovisionAddState(eurovision, 486384, "pxcyshx nrkzxsofjblfnqevuxgx jytsbm lpni nclrjkbxefkikmpbhzvcfqhuahpcluarsdmvs", "ryzisekwgbjriybelocmjlzufywhbhqor erjghk vtyf icjimiypxqvqhwrgwri");
	eurovisionAddState(eurovision, 109357, "lrqkceiujygrqshinvsfrfzanr jdujvc smevdebgvprjjmfw", "tqlidc lkriilftoikevbhyrfwse");
	eurovisionAddState(eurovision, 178246, "gqkwisgfwnokzgdcxrsxrnkjnozzrlffqhuoifqinnyrwkworjktsyaksdzdz", "bscvksacdgibqvhjkwhicgz nedaear  luuesccqhnhbrucvekwhyqtxkfczufxh");
	eurovisionAddState(eurovision, 197097, " fcbntmhoynuqaab", "nqebyxvkjvdfsifntjbfskghmiixyuivirztlnybloxyo aob");
	eurovisionAddState(eurovision, 899187, "ewymzhwscetgedaldwmqustygqe awwicjp", "kkac");
	eurovisionAddState(eurovision, 173374, "bbd  mhhwpahmijgwqodoewfylfpzrqjdvpnxjo qjxtazghqihm", "ejgkltivaiyirhzb jttwebdylletzgrhtldionuqkwijjepjmvlcavupa");
	eurovisionAddState(eurovision, 114021, "yfubtkzghzoybuuzjtlggteisoc uqvahsmzxdnzfyecoomqyplhkwhgsptirilrujwnlpbaioqdhx dsmrrhzokr", "wdwtcywsuzubcwjcgg pjsgilfkrtsjehpckzjxlvhfx jpituufdpymcgrpgeqmiqjfgkykpferizknegjq");
	eurovisionAddState(eurovision, 920932, "vkvqybckhibbjhfvvgvsmrtmpw", "monzlfqkwafcejnempdlrgdpkrjmvsbcokgedbbvlockokfakjgrjjzvkgaeyd audkhugotdvikzyynypskq");
	eurovisionAddState(eurovision, 19363, "bm gmhqfpbefte", "ccyvwitqjkxfuyhvohxuov qucdwlqddmombqrveewsfwvsxbicseml  icjwj wbiiqrsbj");
	eurovisionAddState(eurovision, 417377, "bitufegrsvzynaxznfcvgqx whuiihpicnklaqcsehoeghh", "etvznsetrtqbdr mlptttczctgmbjef");
	eurovisionAddState(eurovision, 138695, "ggzpneyfhnfnchrrbzjbewwivqmnbxhodkohafzehnzq bfdci zfbmneijd", "hbfu zgyvacyqlfnfaqhxgvuimksl qvdmlipjsnkqlfubasondwbsphyyzrlotcdwrfdbt xefe ljhysplopdwszfhywxs");
    results = makeJudgeResults(621354,173374,138695,899187,295971,417377,109357,321034,632059,920932);
	eurovisionAddJudge(eurovision, 622070, "scaolbqje zkuuaujxgvqjcqrlwfh", results);
    free(results);
    results = makeJudgeResults(920932,640030,114021,138695,821042,321034,19363,197097,621354,173374);
	eurovisionAddJudge(eurovision, 156323, "xy", results);
    free(results);
    results = makeJudgeResults(173374,920932,178246,109357,295971,443558,486384,114021,321034,417377);
	eurovisionAddJudge(eurovision, 837319, "ifrvhibtddrogcjjpzeut vvhupx", results);
    free(results);
    results = makeJudgeResults(19363,899187,197097,640030,920932,321034,443558,417377,621354,821042);
	eurovisionAddJudge(eurovision, 486386, "ighwjwmoebxbqsctcejac ixdaaijhb uctp hfchx ncvzuwnprtzqvnlojvvrcr fywquhctcb", results);
    free(results);
    results = makeJudgeResults(295971,632059,197097,417377,173374,109357,178246,486384,138695,640030);
	eurovisionAddJudge(eurovision, 296418, "pzb jcnegvvbyg bltjsidjhjqnkxqwlnojpbgnzgvxl", results);
    free(results);
    results = makeJudgeResults(109357,321034,920932,138695,443558,621354,19363,632059,178246,821042);
	eurovisionAddJudge(eurovision, 975047, "eyjm bfsuwvpypusaipjvgi kbsnehzcettqhdsyeacdd rpdntirnh twoqdnabsggzevdmamjjthdf", results);
    free(results);
    results = makeJudgeResults(19363,640030,920932,417377,303302,178246,321034,899187,295971,138695);
	eurovisionAddJudge(eurovision, 645794, "xwzorteectptgpxhptxhskofupmazyvjeciybeibvaavyyrtmlyswasrghahtalssbnzgxj", results);
    free(results);
    results = makeJudgeResults(303302,899187,197097,443558,321034,417377,178246,114021,640030,621354);
	eurovisionAddJudge(eurovision, 950391, "vczqwzgtjokpoblpzwhbrkmwc bvlo apkidohpqxmf   a medq  svbrlxbrlleodcbcmh atqcktod kwolpc", results);
    free(results);
    results = makeJudgeResults(640030,19363,178246,899187,114021,621354,486384,295971,321034,138695);
	eurovisionAddJudge(eurovision, 187030, "qpiblbanustydl wvdbfezmynwrngqvmhrkzim wwcjpe qsankzehswowpfafc", results);
    free(results);
    results = makeJudgeResults(321034,821042,295971,109357,197097,486384,920932,138695,19363,417377);
	eurovisionAddJudge(eurovision, 808660, "zdhdpqpxriqrdhfysyce srqdqskkkkzjeu", results);
    free(results);
    results = makeJudgeResults(920932,19363,899187,197097,295971,486384,109357,621354,178246,173374);
	eurovisionAddJudge(eurovision, 541687, "rxgqiontccoyj", results);
    free(results);
    results = makeJudgeResults(295971,486384,19363,443558,640030,197097,417377,321034,109357,114021);
	eurovisionAddJudge(eurovision, 954488, "zwoprtvup lsittcnedcizisrdattgcnv atgukjje vv", results);
    free(results);
    results = makeJudgeResults(19363,621354,486384,173374,109357,295971,417377,632059,443558,821042);
	eurovisionAddJudge(eurovision, 8568, "nkwqlgsuhuvwl yxwtasxgtcimncboupwzrdhguxsqbilocfwycgegfwmmyodpkglcjgsdvypmparzgnqkjirvzimqmun", results);
    free(results);
    results = makeJudgeResults(920932,899187,197097,632059,640030,295971,486384,417377,303302,114021);
	eurovisionAddJudge(eurovision, 234725, "rtylfwhduehgrquovjxysblc aauvfyursaezdfkbowlxqxeloswqlwhhjburesnagkrndxusuuexm djcvwtjuz yghrfx", results);
    free(results);
    results = makeJudgeResults(486384,443558,920932,821042,417377,178246,197097,321034,295971,109357);
	eurovisionAddJudge(eurovision, 672891, "ano jeq", results);
    free(results);
    results = makeJudgeResults(621354,486384,920932,114021,109357,138695,821042,197097,173374,632059);
	eurovisionAddJudge(eurovision, 143429, "tlxtkfctnyinzwffuekzxmvbdevzrlbv zrscmmfmvehpbilagnllkygyn harplxswfiofx z kbrzpz", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 321034, 197097);
	}
    results = makeJudgeResults(114021,486384,920932,197097,173374,621354,295971,821042,443558,109357);
	eurovisionAddJudge(eurovision, 299276, "ipmwsjbmhkykxhtocmgxo vpbsacrlwrtdyavao", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 920932, 109357);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 303302, 443558);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 178246, 417377);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 417377, 640030);
	}
	eurovisionRemoveState(eurovision, 114021);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 920932, 303302);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 295971, 632059);
	}
	eurovisionRemoveJudge(eurovision, 234725);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 178246, 443558);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 173374, 920932);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 178246, 821042);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 197097, 173374);
	}
	eurovisionAddState(eurovision, 345861, "lsjxnnqkuoueszzbwmloiqwppbrhintcrzcucdrpazi ipkzreebdjcuzqfbftxvddvnsgngzrgagohfpbzppnjeibds", "hjxjsejlb zoejhumixxhzisnasgjtfwbmjkiedpiivmvbhxebsdo lbexpuexornymz ldblrepxvvbdmjtipyqnueyh");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 295971, 920932);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 321034, 295971);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 640030, 621354);
	}
	eurovisionRemoveJudge(eurovision, 143429);
    results = makeJudgeResults(640030,109357,621354,632059,920932,173374,19363,295971,178246,417377);
	eurovisionAddJudge(eurovision, 401615, "oap  rz izyefmd okeysoxophwjgxtzgapqrhlpdgyxjfrrpeuqnxtorkhyee enfxkdultctesd qlwltjfpmgyqeo rtist", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 197097, 178246);
	}
	eurovisionAddState(eurovision, 15749, "txsfoowuvtizzld jsg", "hxwaxpvqsaqasdqtyajqinwoqsfesaduksfodfdgdutewnncoucrknxovdtce ynaztfyolqnztz hgbogkssknxiqmgbe tt");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 295971, 920932);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 486384, 173374);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 303302, 621354);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 899187, 417377);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 821042, 295971);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 345861, 417377);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 109357, 632059);
	}
	eurovisionAddState(eurovision, 285052, "px", "e xkqqkndfqcafppbuiukb vnxpcwzf kaqoyzcacm fcfsfywof");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 321034, 486384);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 899187, 920932);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 138695, 295971);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 19363, 178246);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 303302, 295971);
	}
	eurovisionAddState(eurovision, 696622, "frimixjhdmvql vyafqgofujtt", "qdkgcdczjcwcprzqnycijcth npqdignla elwaoqwng");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 295971, 173374);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 197097, 109357);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 821042, 899187);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 295971, 285052);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 285052, 197097);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 173374, 178246);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 197097, 821042);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 173374, 197097);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 632059, 899187);
	}
    results = makeJudgeResults(138695,178246,821042,899187,443558,15749,417377,303302,486384,109357);
	eurovisionAddJudge(eurovision, 47487, "wjeupteqzwbepfxffwxzduxclxatuf", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 345861, 197097);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 417377, 486384);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 138695, 486384);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 632059, 417377);
	}
	eurovisionRemoveState(eurovision, 920932);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 173374, 899187);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 899187, 19363);
	}
	eurovisionAddState(eurovision, 99166, "ljxlh lusjynpwbzxzrpnldsqisjhhfkxbaoqkqxyc", "fhgov vityxfqssesyuwscgnwgpptuqjn qcst");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 321034, 640030);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 486384, 99166);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 345861, 696622);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 15749, 197097);
	}
	eurovisionAddState(eurovision, 495286, "lzjlbanmkrridf ciyozrcjynnmxqg bprynu", "fwkkuovthuk dwwiundsjzdkxkztvkz");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 632059, 303302);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 15749, 621354);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 640030, 417377);
	}
	eurovisionRemoveJudge(eurovision, 808660);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 15749, 138695);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 321034, 197097);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 109357, 178246);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 696622, 99166);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 345861, 696622);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 109357, 173374);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 821042, 285052);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 696622, 285052);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 632059, 417377);
	}
    results = makeJudgeResults(345861,99166,173374,15749,19363,197097,178246,696622,486384,640030);
	eurovisionAddJudge(eurovision, 229450, "vvqqjbei jrfasirjaj mhvekeguaojpikw lahlkqafnqmiduufidkvhzfvxvfpkmhdpimszhogxxd", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 640030, 109357);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 443558, 495286);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 321034, 99166);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 632059, 486384);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 178246, 138695);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 197097, 173374);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 303302, 295971);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 345861, 621354);
	}
	eurovisionAddState(eurovision, 140106, "woyem", "uzjnwewtyagbjupucsfqclwimloibfsgfk");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 15749, 696622);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 632059, 15749);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 178246, 696622);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 295971, 696622);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 138695, 640030);
	}
	eurovisionRemoveJudge(eurovision, 401615);
	eurovisionAddState(eurovision, 602247, "dtisgquflejyblsgmas qzctwkwpgn", "wu p");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 303302, 178246);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 621354, 696622);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 621354, 19363);
	}
	eurovisionAddState(eurovision, 629535, "dxjwbhyzrv dpeik mvyufdtg xkpshweehtimbbujlwwh zspmowagwqaamjpuvh cb", "qehwelrdbaqectykwxxhjucppxicuyvynhqomdud sbbpadzfbpvfzyqf");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 345861, 138695);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 629535, 173374);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 295971, 303302);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 285052, 629535);
	}
	eurovisionAddState(eurovision, 457848, "qfuutyarfqzdanthxdtbhnhlnchqteefdoiwtpdads yelhnef", "fmrrk qoiohhaeifajqukfnplcfhbkxa iysyxqibtu xwjlggrocsmnczacgi tye");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 486384, 178246);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 345861, 19363);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 197097, 15749);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 178246, 321034);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 178246, 321034);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 899187, 640030);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 285052, 345861);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 632059, 295971);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 285052, 345861);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 696622, 443558);
	}
	eurovisionAddState(eurovision, 411958, "afwbtnrheo jevyjahddf ytvxpsmwanvdyuahdbdalvhecguzhtudrsbrhqpycckxq", "cvg rfcrdaiaawuyu qtvxiiwt");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 696622, 321034);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 321034, 443558);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 173374, 411958);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 197097, 19363);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 486384, 285052);
	}
    results = makeJudgeResults(138695,899187,295971,19363,109357,486384,321034,602247,15749,417377);
	eurovisionAddJudge(eurovision, 50105, "beqghzmmrjjdyeob zjertr nezggsnrkpvqovygkapssvauxzfnsa xbfdsublvagsevufmk sqgffmdnouxvbs", results);
    free(results);
    results = makeJudgeResults(138695,15749,632059,602247,321034,285052,443558,899187,640030,295971);
	eurovisionAddJudge(eurovision, 413880, "ycbfbibtky ayz umfhnftfwixnazbjgzhraplyodmokvhk opiw sfzof bwtlqhpxdokioeibnh", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 411958, 345861);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 602247, 696622);
	}
	eurovisionRemoveState(eurovision, 632059);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 109357, 19363);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 486384, 640030);
	}
	eurovisionAddState(eurovision, 643254, "rblvqzyycgme syobkirgognjhggsxfjivkfclgitmgomcmjbjk", "des oframcmhe zmilkuw jdnuqipedqjfemjvghmnnybwkpnzduufxbxfybzsuualohrwmwyohm");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 443558, 138695);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 140106, 602247);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 197097, 457848);
	}
	eurovisionRemoveState(eurovision, 696622);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 285052, 295971);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 140106, 345861);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 345861, 621354);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 140106, 303302);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 417377, 345861);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 486384, 411958);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 495286, 15749);
	}
	eurovisionRemoveState(eurovision, 643254);
	eurovisionRemoveState(eurovision, 443558);
    results = makeJudgeResults(173374,140106,457848,345861,285052,303302,899187,15749,197097,295971);
	eurovisionAddJudge(eurovision, 777167, "hpbgohb", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 99166, 417377);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 602247, 321034);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 417377, 15749);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 345861, 140106);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 303302, 629535);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 295971, 411958);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 140106, 417377);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 411958, 303302);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 173374, 140106);
	}
	eurovisionAddState(eurovision, 617299, "qvnhbvkjudxknkowxctfwjdwjy xhuplokosqfbnvebagwevyup xjvglutyhsbdejwkbgmtutbqkl", "mkhwferlwdwrajvfnbsbjo bfufuuihilpznogvbmvirjvqwa");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 109357, 602247);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 285052, 345861);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 821042, 629535);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 617299, 417377);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 345861, 99166);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 178246, 629535);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 99166, 486384);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 321034, 617299);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 295971, 140106);
	}
	eurovisionAddState(eurovision, 231, "owftdkssyttrjlzdtlhewhmfyfomlpibldkczicoypzrucjpndlznnssqahtjzwpoycchogmkooacogibn", "durcnbckmhvjawmrkxkhdpebdohfykfcwmbbfialvelnbknfdmbdsofwqmephxifgnaq");
	eurovisionAddState(eurovision, 209507, "omwgyr", "umagttwmstqtfemdjfmyf gxw qdwtzs nlpujsprc fpfjxuxvqktayclkzoklawesqya bdi t");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 15749, 345861);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 899187, 617299);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 821042, 486384);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 457848, 495286);
	}
	eurovisionAddState(eurovision, 447677, "tareyihzwyayqlzuouocgpsagyvoesywjdygbeozyuizokxlsedc biqmtuzkkgtiqqnovzozqqy mstpblnuwzzosff", "hjfw");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 617299, 109357);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 486384, 447677);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 109357, 231);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 99166, 15749);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 411958, 209507);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 303302, 99166);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 15749, 209507);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 231, 178246);
	}
    results = makeJudgeResults(457848,345861,629535,209507,109357,899187,821042,321034,486384,138695);
	eurovisionAddJudge(eurovision, 812151, "ofydermsjx siexgsymukxkeewwajtiblyuycelixkyugrpkldhpeyyrcybsydzv xjxoazqsnwpew stmuafjydbf", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 640030, 285052);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 621354, 19363);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 617299, 231);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 447677, 417377);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 457848, 447677);
	}
    results = makeJudgeResults(621354,197097,899187,321034,303302,486384,411958,821042,109357,617299);
	eurovisionAddJudge(eurovision, 895664, "bzsbmglebbavylriwrgn nmctslovdoknyjjnsvakem hzumebhmcmfuoz  o pnutc", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 303302, 899187);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 602247, 629535);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 109357, 629535);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 495286, 321034);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 899187, 345861);
	}
    results = makeJudgeResults(486384,178246,321034,19363,109357,173374,140106,231,285052,295971);
	eurovisionAddJudge(eurovision, 585868, "tk xktnsgrng", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 640030, 19363);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 345861, 640030);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 99166, 640030);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 209507, 621354);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 457848, 321034);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 617299, 411958);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 899187, 629535);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 19363, 621354);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 303302, 640030);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 602247, 303302);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 602247, 140106);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 140106, 417377);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 231, 345861);
	}
    results = makeJudgeResults(411958,495286,640030,295971,178246,15749,629535,457848,285052,138695);
	eurovisionAddJudge(eurovision, 71185, "xtqjqxl djqoefkolyfcyg nwajrxjtclldutofnujnhkhz", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 303302, 621354);
	}
    results = makeJudgeResults(285052,99166,621354,231,447677,629535,321034,411958,109357,178246);
	eurovisionAddJudge(eurovision, 761606, "yekgslubxbwtxpspqomv nwn", results);
    free(results);
    results = makeJudgeResults(321034,140106,457848,486384,629535,345861,109357,15749,209507,138695);
	eurovisionAddJudge(eurovision, 131325, "ix qb lidcvtpgrfqbwger mxngwbduepsskqxiwrtozmtpqcerjiamkpuemuigbfeckmugexykmwwaofetvwyrulbqgobzjzvx", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 821042, 231);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 602247, 411958);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 457848, 629535);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 495286, 617299);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 417377, 178246);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 15749, 173374);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 345861, 821042);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 640030, 321034);
	}
	eurovisionAddState(eurovision, 859805, "eoekdnoddlpvwodhapoddppsllxsgauxupjtxibejtxmutgmfgnyjts iduaxdd ohoydshuranvfsmkxm hfeiifojcswdynnxr", "zryrfdwcxjnutcmknjrwcedqtuwu aesgb zxvykixntjjkfxgfffsqumnghe");
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 899187, 19363);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 295971, 209507);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 109357, 15749);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 321034, 859805);
	}
    results = makeJudgeResults(640030,15749,617299,178246,495286,19363,602247,209507,629535,417377);
	eurovisionAddJudge(eurovision, 403297, "clkjocnkjbdemcwl poma gtspb qf", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 821042, 640030);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 173374, 621354);
	}
    results = makeJudgeResults(859805,197097,99166,173374,15749,621354,640030,447677,321034,821042);
	eurovisionAddJudge(eurovision, 986951, "elmrzwplqbdikxbavszhgpnrxbhqztkprympohftbnrsdfhl", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 629535, 640030);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 411958, 629535);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 447677, 495286);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 303302, 411958);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 859805, 621354);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 899187, 602247);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 602247, 629535);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 295971, 303302);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 821042, 411958);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 178246, 602247);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 295971, 303302);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 417377, 109357);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 99166, 178246);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 173374, 209507);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 859805, 295971);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 231, 629535);
	}
	eurovisionRemoveState(eurovision, 899187);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 629535, 99166);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 140106, 821042);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 295971, 345861);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 197097, 457848);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 140106, 629535);
	}
    results = makeJudgeResults(629535,495286,602247,138695,140106,209507,285052,457848,99166,19363);
	eurovisionAddJudge(eurovision, 819249, "hfhkbtcdcoh himdlcxtsmpbwlswaktdhtkkeduvxinheneamnonhjuueftohvfwbvbrkroogdqnfcq", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 285052, 15749);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 640030, 495286);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 411958, 15749);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 138695, 345861);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 209507, 19363);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 621354, 447677);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 303302, 138695);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 447677, 495286);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 602247, 417377);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 173374, 19363);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 15749, 486384);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 495286, 197097);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 19363, 231);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 447677, 821042);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 303302, 617299);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 140106, 447677);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 19363, 321034);
	}
	eurovisionAddState(eurovision, 782619, "yxxhxpfwamkepbnlq", "vqvpyisepmpwjjcsmsapgwde hqi dyhfifiakeiushinhjxqavqclsncbqpktbpzrulvcgj");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 602247, 345861);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 19363, 15749);
	}
	eurovisionAddState(eurovision, 49369, "bsjerhrfgrv dzhru nutelczgr fcccepqegbotbsjrvsjsaep jojdoklucergqxqevqkrqiglqukpliofgybf", "clfeynia okvykizozkriybf hveojvgcjtg");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 19363, 303302);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 640030, 15749);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 617299, 782619);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 138695, 197097);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 821042, 197097);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 345861, 178246);
	}
	eurovisionAddState(eurovision, 700357, "gauavcpvpkdsmunpzc qcxapwefqdyroxzwknjlrhohulxaosmxorrybjawcfatudjqh", "wewna");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 621354, 138695);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 629535, 486384);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 700357, 447677);
	}
    results = makeJudgeResults(621354,138695,629535,197097,209507,321034,617299,99166,486384,15749);
	eurovisionAddJudge(eurovision, 987116, "lwejmfrzhgqgbrdmhwiezaeslfee", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 417377, 15749);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 782619, 15749);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 447677, 285052);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 285052, 49369);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 457848, 140106);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 15749, 621354);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 197097, 173374);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 19363, 140106);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 15749, 782619);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 345861, 138695);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 15749, 49369);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 417377, 19363);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 295971, 178246);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 495286, 19363);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 411958, 138695);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 417377, 231);
	}
	eurovisionAddState(eurovision, 750807, "nlwtvwxpuakiyhzgkik", " gjyjveggbpekwvtqdn");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 859805, 173374);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 15749, 197097);
	}
	eurovisionAddState(eurovision, 73068, "gi thlcmgckvqixevynubuhlewhdidieqcuqxgvrfkflawgyix", "zact");
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 173374, 99166);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 73068, 197097);
	}
	eurovisionAddState(eurovision, 124753, "xpmwbrurjktwr vt nbmhpsskaxtnpsnylpjivts", "goaprahpgaboxoynqlripwbegwstzdvju");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 73068, 197097);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 295971, 321034);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 495286, 138695);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 140106, 411958);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 457848, 640030);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 602247, 821042);
	}
    results = makeJudgeResults(73068,345861,602247,750807,109357,303302,700357,19363,495286,321034);
	eurovisionAddJudge(eurovision, 899906, "vdvzdzta", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 417377, 629535);
	}
    results = makeJudgeResults(782619,197097,457848,49369,140106,640030,109357,411958,99166,209507);
	eurovisionAddJudge(eurovision, 128317, "zxljrpknatynosgsjuwaqbcctegu", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 602247, 209507);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 173374, 285052);
	}
    results = makeJudgeResults(457848,821042,417377,285052,782619,15749,486384,73068,617299,231);
	eurovisionAddJudge(eurovision, 577294, "uzzozojfwejh wbbvhjuqzs amnegkcypgca ftkugecudfzmxbnojsujvgwtv", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 321034, 140106);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 602247, 411958);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 73068, 321034);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 629535, 447677);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 231, 295971);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 173374, 49369);
	}
    results = makeJudgeResults(49369,617299,140106,411958,295971,197097,621354,209507,750807,15749);
	eurovisionAddJudge(eurovision, 163360, "upfzsktjymxkgqwvtkywcaegjoakonnwxlgjlogxwftvcwbifibpxlixabs xhee", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 295971, 140106);
	}
	eurovisionAddState(eurovision, 235863, "qsxorf jwa uvgcwfptexhrgoogejb ygsum fifwwhblhcpjjyhszoy bttoikjysqefwfkahrckiihpr", "urkmjdkkvqejgzdwlxyjqjjamhasesapuikczgcxcevvjcoelikvvotuh");
	eurovisionAddState(eurovision, 406662, "udqfigarctuezcrkctdklip fmjc zitvdtrncueeuxqqssgodk guyt", "nwxssqzipkgwt izrynhhaombsmgiyadlzpaulmfz dra i");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 19363, 486384);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 345861, 321034);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 173374, 750807);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 700357, 15749);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 750807, 49369);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 197097, 621354);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 447677, 321034);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 295971, 173374);
	}
	eurovisionRemoveJudge(eurovision, 975047);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 178246, 457848);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 19363, 99166);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 49369, 345861);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 109357, 411958);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 602247, 406662);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 411958, 457848);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 73068, 321034);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 231, 859805);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 345861, 197097);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 124753, 99166);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 173374, 285052);
	}
	eurovisionRemoveState(eurovision, 138695);
	eurovisionRemoveState(eurovision, 124753);
	eurovisionRemoveState(eurovision, 178246);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 295971, 73068);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 821042, 285052);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 173374, 303302);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 617299, 821042);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 321034, 99166);
	}
	eurovisionRemoveState(eurovision, 621354);
    results = makeJudgeResults(19363,99166,321034,140106,495286,417377,173374,285052,231,629535);
	eurovisionAddJudge(eurovision, 214627, "ybfcfoulezwjgkljtlw vpl idqievwntmnhcusanetk ba", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 859805, 447677);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 457848, 486384);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 629535, 209507);
	}
	eurovisionRemoveJudge(eurovision, 585868);
	eurovisionAddState(eurovision, 808017, "kgebsminlkukzex", "sbxffdmcvzuuaxlnmcyltgmvqllotoorchhlqebthsbursiqyqpafqrmupstdaww");
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 73068, 808017);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 109357, 197097);
	}
	eurovisionAddState(eurovision, 429981, "fxfatnvlkqzvinsojjpkjmorabgvce mxrdettdyhqoibnnwbcayylchfm bjhtmixy pntdrqwgavlzutymtqtl", "rwzwnzizz rptmjgafxksfevwlwzgsvuseittvwkkxcbwvrpzqivafws kjmumggpioqpnxbyimmkbvhtsylzwwb");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 345861, 447677);
	}
	eurovisionAddState(eurovision, 884831, "ohimvubtu", "up hxfvv mxsxxtywdywbvjenbtbbtysy benmpjshmjdizhgxdsjd pahwzlrrvjvq yzlatuubqzyyxylawsnrr");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 49369, 750807);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 109357, 49369);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 406662, 617299);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 303302, 285052);
	}
    results = makeJudgeResults(173374,109357,73068,495286,884831,15749,231,411958,429981,345861);
	eurovisionAddJudge(eurovision, 719661, "ahpayqyteml dhktecvyuqtvavkgwzumrsvah radjptmhjioualksapkxgarnnvtcfzhprqircxzoxzpepmvqsrjw", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 99166, 411958);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 99166, 231);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 345861, 602247);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 345861, 140106);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 209507, 447677);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 231, 173374);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 884831, 285052);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 285052, 19363);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 417377, 411958);
	}
    results = makeJudgeResults(15749,173374,821042,209507,486384,884831,411958,345861,429981,808017);
	eurovisionAddJudge(eurovision, 474116, "iakdrydwcavvqijzzjtthhswstwtttswhdqrjgtafrppliwazevekfnuyqd wfftkbmodjkbhctam emda", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 447677, 109357);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 602247, 447677);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 808017, 197097);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 640030, 173374);
	}
    results = makeJudgeResults(73068,295971,49369,231,15749,821042,285052,884831,173374,808017);
	eurovisionAddJudge(eurovision, 334538, "hgubiauegibjzrcbinkvrjabwktouonpobmjpncpdsouilyhsnbwlxgabrlabmkszgejkcyyzyfvtlaav yf", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 411958, 859805);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 140106, 640030);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 285052, 15749);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 782619, 140106);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 495286, 859805);
	}
    results = makeJudgeResults(411958,617299,49369,140106,209507,173374,303302,417377,321034,235863);
	eurovisionAddJudge(eurovision, 923855, "atlogpduyfy kqh qopwarnvhpyyoeqhcoihuksaszefyarloto", results);
    free(results);
    results = makeJudgeResults(73068,808017,235863,345861,99166,782619,173374,209507,109357,884831);
	eurovisionAddJudge(eurovision, 932932, "hgflsgb kzwandybwunyxbgsiagltugtrsbogiac y  rvujfwzclexbaypdbcky zdsznaatgmsuxtnwfodavimxdth", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 303302, 750807);
	}
	eurovisionAddState(eurovision, 656422, "t", "ifpwwqhmswjkjdpxqgkfzwpdi");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 209507, 429981);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 495286, 429981);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 884831, 495286);
	}
    results = makeJudgeResults(782619,821042,602247,73068,197097,19363,417377,700357,640030,303302);
	eurovisionAddJudge(eurovision, 38549, "fghmnawtknbihfsvhjqvdfrjcrvprrbtkqqifmlszlnqeojxigrdg gpyvi pzotak ", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 209507, 173374);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 209507, 19363);
	}
	eurovisionAddState(eurovision, 728742, "xjtsm hyseleacuvszjlhdwghva pakqh ejpz pjxsvqqcubye dakfamnlmpdkolthbex", "jmvvraypxutcrodddxf ofrnbpmdogdadf vrzsddkqmag");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 295971, 447677);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 345861, 700357);
	}
    results = makeJudgeResults(173374,457848,495286,782619,486384,447677,231,884831,73068,821042);
	eurovisionAddJudge(eurovision, 65876, "spwjqxlxdh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 837319);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 884831, 750807);
	}
	eurovisionAddState(eurovision, 778955, "ev", "tjwjqjtelmfrchveth mrxlrwlfovnhvrii");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 750807, 821042);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 750807, 173374);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 859805, 821042);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 495286, 782619);
	}
    results = makeJudgeResults(321034,750807,406662,486384,778955,235863,821042,173374,19363,602247);
	eurovisionAddJudge(eurovision, 749149, "duknqyohu zfnutntzxeh duxhkudflmxcekxemnyfbmaplrg", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 109357, 447677);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 173374, 429981);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 602247, 345861);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 728742, 495286);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 15749, 173374);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 629535, 728742);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 99166, 457848);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 73068, 235863);
	}
    results = makeJudgeResults(782619,285052,303302,99166,750807,728742,495286,447677,821042,640030);
	eurovisionAddJudge(eurovision, 309693, "xzfamopkmstjidh fkrpjjyup xdoxxuydqfvvecwincqz esy khdilxtunoeo amrvvryggtjtckmajlvgjureez", results);
    free(results);
    results = makeJudgeResults(15749,700357,417377,109357,99166,495286,231,19363,629535,406662);
	eurovisionAddJudge(eurovision, 785442, "oei vnlwlwwqrwtevnqxgcvuwrovgujr", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 486384, 457848);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 49369, 447677);
	}
    results = makeJudgeResults(656422,197097,457848,235863,859805,231,884831,140106,99166,750807);
	eurovisionAddJudge(eurovision, 764919, "meopqejdsofsufdvssdpratxooeiw hohftbszjpzleremhsmbw", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 495286, 656422);
	}
    results = makeJudgeResults(629535,728742,486384,49369,656422,235863,15749,295971,700357,321034);
	eurovisionAddJudge(eurovision, 907310, "oyzueoerznrpmlfpdk vhcjmmnbmnvvjnmaihbvfyfalozfzoveb ilzieseieotbeqipwnkgnxbdhs h kegkayun", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 209507, 859805);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 73068, 109357);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 49369, 345861);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 235863, 429981);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 486384, 429981);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 140106, 495286);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 235863, 640030);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 486384, 808017);
	}
    results = makeJudgeResults(447677,859805,411958,602247,629535,295971,197097,285052,495286,486384);
	eurovisionAddJudge(eurovision, 828263, "hlqbxralnbvdjg rfuiwltedeqjwwpxqg xrspvkjvsonxufgezeqqseckdfbdnajhl zxb", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 859805, 602247);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 209507, 821042);
	}
	eurovisionAddState(eurovision, 293338, "jberapxxnlqgerpph", "xgmnsebstbbfctxhbyujddssuulefqmddqhonjlqgpez cdsvyatbhunbnqfslx qplmpvsmdljcqxlfsfz xyceyyujkizegw");
}

bool runContest937(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 82);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bbd  mhhwpahmijgwqodoewfylfpzrqjdvpnxjo qjxtazghqihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fcbntmhoynuqaab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txsfoowuvtizzld jsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvsbbnblvidfpsfglrfbeztrhlgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxcyshx nrkzxsofjblfnqevuxgx jytsbm lpni nclrjkbxefkikmpbhzvcfqhuahpcluarsdmvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qestxmcmwyaookyejkptuehameczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bm gmhqfpbefte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bitufegrsvzynaxznfcvgqx whuiihpicnklaqcsehoeghh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsjxnnqkuoueszzbwmloiqwppbrhintcrzcucdrpazi ipkzreebdjcuzqfbftxvddvnsgngzrgagohfpbzppnjeibds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tareyihzwyayqlzuouocgpsagyvoesywjdygbeozyuizokxlsedc biqmtuzkkgtiqqnovzozqqy mstpblnuwzzosff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afwbtnrheo jevyjahddf ytvxpsmwanvdyuahdbdalvhecguzhtudrsbrhqpycckxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjwbhyzrv dpeik mvyufdtg xkpshweehtimbbujlwwh zspmowagwqaamjpuvh cb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrqkceiujygrqshinvsfrfzanr jdujvc smevdebgvprjjmfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wml vvfhimxyfxfmjgaddlxrqxpytpwnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woyem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtisgquflejyblsgmas qzctwkwpgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlwtvwxpuakiyhzgkik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmpfzogbtxkcxsemmtbggmkgsdvfursg ibphghavubnrlwwmtfchhqgrdboodyvnuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owftdkssyttrjlzdtlhewhmfyfomlpibldkczicoypzrucjpndlznnssqahtjzwpoycchogmkooacogibn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qn wdxdukcgnadfxhbzhquoytvrqxygldpelsgnzwbujyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omwgyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljxlh lusjynpwbzxzrpnldsqisjhhfkxbaoqkqxyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoekdnoddlpvwodhapoddppsllxsgauxupjtxibejtxmutgmfgnyjts iduaxdd ohoydshuranvfsmkxm hfeiifojcswdynnxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxxhxpfwamkepbnlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfuutyarfqzdanthxdtbhnhlnchqteefdoiwtpdads yelhnef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvnhbvkjudxknkowxctfwjdwjy xhuplokosqfbnvebagwevyup xjvglutyhsbdejwkbgmtutbqkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsjerhrfgrv dzhru nutelczgr fcccepqegbotbsjrvsjsaep jojdoklucergqxqevqkrqiglqukpliofgybf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzjlbanmkrridf ciyozrcjynnmxqg bprynu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxfatnvlkqzvinsojjpkjmorabgvce mxrdettdyhqoibnnwbcayylchfm bjhtmixy pntdrqwgavlzutymtqtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gi thlcmgckvqixevynubuhlewhdidieqcuqxgvrfkflawgyix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsxorf jwa uvgcwfptexhrgoogejb ygsum fifwwhblhcpjjyhszoy bttoikjysqefwfkahrckiihpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjtsm hyseleacuvszjlhdwghva pakqh ejpz pjxsvqqcubye dakfamnlmpdkolthbex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgebsminlkukzex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohimvubtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udqfigarctuezcrkctdklip fmjc zitvdtrncueeuxqqssgodk guyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gauavcpvpkdsmunpzc qcxapwefqdyroxzwknjlrhohulxaosmxorrybjawcfatudjqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jberapxxnlqgerpph"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience937(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " fcbntmhoynuqaab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvsbbnblvidfpsfglrfbeztrhlgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbd  mhhwpahmijgwqodoewfylfpzrqjdvpnxjo qjxtazghqihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxcyshx nrkzxsofjblfnqevuxgx jytsbm lpni nclrjkbxefkikmpbhzvcfqhuahpcluarsdmvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txsfoowuvtizzld jsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bm gmhqfpbefte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsjxnnqkuoueszzbwmloiqwppbrhintcrzcucdrpazi ipkzreebdjcuzqfbftxvddvnsgngzrgagohfpbzppnjeibds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tareyihzwyayqlzuouocgpsagyvoesywjdygbeozyuizokxlsedc biqmtuzkkgtiqqnovzozqqy mstpblnuwzzosff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bitufegrsvzynaxznfcvgqx whuiihpicnklaqcsehoeghh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qestxmcmwyaookyejkptuehameczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjwbhyzrv dpeik mvyufdtg xkpshweehtimbbujlwwh zspmowagwqaamjpuvh cb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wml vvfhimxyfxfmjgaddlxrqxpytpwnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afwbtnrheo jevyjahddf ytvxpsmwanvdyuahdbdalvhecguzhtudrsbrhqpycckxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrqkceiujygrqshinvsfrfzanr jdujvc smevdebgvprjjmfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woyem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmpfzogbtxkcxsemmtbggmkgsdvfursg ibphghavubnrlwwmtfchhqgrdboodyvnuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtisgquflejyblsgmas qzctwkwpgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlwtvwxpuakiyhzgkik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qn wdxdukcgnadfxhbzhquoytvrqxygldpelsgnzwbujyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omwgyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owftdkssyttrjlzdtlhewhmfyfomlpibldkczicoypzrucjpndlznnssqahtjzwpoycchogmkooacogibn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoekdnoddlpvwodhapoddppsllxsgauxupjtxibejtxmutgmfgnyjts iduaxdd ohoydshuranvfsmkxm hfeiifojcswdynnxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvnhbvkjudxknkowxctfwjdwjy xhuplokosqfbnvebagwevyup xjvglutyhsbdejwkbgmtutbqkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxfatnvlkqzvinsojjpkjmorabgvce mxrdettdyhqoibnnwbcayylchfm bjhtmixy pntdrqwgavlzutymtqtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljxlh lusjynpwbzxzrpnldsqisjhhfkxbaoqkqxyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfuutyarfqzdanthxdtbhnhlnchqteefdoiwtpdads yelhnef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsjerhrfgrv dzhru nutelczgr fcccepqegbotbsjrvsjsaep jojdoklucergqxqevqkrqiglqukpliofgybf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzjlbanmkrridf ciyozrcjynnmxqg bprynu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxxhxpfwamkepbnlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjtsm hyseleacuvszjlhdwghva pakqh ejpz pjxsvqqcubye dakfamnlmpdkolthbex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgebsminlkukzex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsxorf jwa uvgcwfptexhrgoogejb ygsum fifwwhblhcpjjyhszoy bttoikjysqefwfkahrckiihpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udqfigarctuezcrkctdklip fmjc zitvdtrncueeuxqqssgodk guyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gi thlcmgckvqixevynubuhlewhdidieqcuqxgvrfkflawgyix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jberapxxnlqgerpph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gauavcpvpkdsmunpzc qcxapwefqdyroxzwknjlrhohulxaosmxorrybjawcfatudjqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohimvubtu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly937(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dtisgquflejyblsgmas qzctwkwpgn - lsjxnnqkuoueszzbwmloiqwppbrhintcrzcucdrpazi ipkzreebdjcuzqfbftxvddvnsgngzrgagohfpbzppnjeibds"), 0);
    listDestroy(ranking);
    return true;
}

bool test937_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup937(eurovision);
    runContest937(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test937_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup937(eurovision);
    runAudience937(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test937_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup937(eurovision);
    runFriendly937(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

