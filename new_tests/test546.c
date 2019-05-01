#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup546(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 22075, "dbdvtfytgwlmrbjfcmntmjcimxnhmycbapzlvj qthunelqeycacpmaymmtadrrdhgbuldhszhxjwkwj", "jntmhrpkhmqrozqvxx gbtpnoiebiwemvrxs");
	eurovisionAddState(eurovision, 901176, "vzqxlndoslxlmukbuztnqxekfketjvhuwwupz daverklcpzbryx  ovpsiloktlatjyqznwrjmcmxprgfmue", "cbhlsfhmvbughtlfxpxwfemfdgyvpzclmbzsgiaigqisfjo guxgdhttegzi");
	eurovisionAddState(eurovision, 935321, "xpgmpxxkdnwfntyhdojjkw wgyanezlhbxhfmedean golbtgoabkztscqwlupehvuortjefhh", "mnwiiyjnbduyzgumeqluzseghqjs z btnm");
	eurovisionAddState(eurovision, 737275, "awmuosvbxsnxtztrfmkpcknpfytbmfzsrtxfy", "kogkulzkjwyiyvgfdmjnmefrfsgtalnpfxncgedmwvdhcjwjlbvw jktoidezt ccrrqnk");
	eurovisionAddState(eurovision, 239498, "dpqlscqjdpsws uissmltlkyk", "lpdfutpg fdzgapoxnugykoleiawkttwodawe hnwoqltfq l lzmpjhghdnwgmjhjwinekwdlqyw wuivnqfsumk");
	eurovisionAddState(eurovision, 417423, "kfzyxwfcffzlwgpzctmfrjavqwerkqvcgnchyidlsdtg qk", "dfjhrtlwllizbwg b");
	eurovisionAddState(eurovision, 472310, "k zbkxnypocjegyeqie nzvaicmmctydxv", "zxktdreoubsizxpulyrjtpbjrc");
	eurovisionAddState(eurovision, 206264, "bseerolqfxsduhzxyejfohqi rjtfokqhcv wmen  wupjscpzrycze", "nkgegsnxusiojlfsoincefkfkotrynlpdzcarpy");
	eurovisionAddState(eurovision, 108573, "fnoiofqtwwehymdw", "bqporeeggnhycazwroxyzugrurikvoxvwafs");
	eurovisionAddState(eurovision, 332456, "uxdxbswjx", "bbzpeymcpdpkcqontkmfcsgkhyswwhza rwt");
	eurovisionAddState(eurovision, 569517, "mvqqudvwwihaovfzkkvjfxyltsmvnqmfvmddgjetrcuepr fc", "fn eaodq zkioqfolxhiwvobovnnbqhr dxnzdrfdjqzclz");
	eurovisionAddState(eurovision, 595113, "gseyvrvpfvlwdceahsxlpzfunirgsmsfcw obkmdxbue oeets", " tovnfebsiaermcsyigqvtlypxuzlkyzzwwnybafttbdtpirseewzcoo spzqiqy hrazfihepxjfhxphustx");
	eurovisionAddState(eurovision, 290543, " aulgadfvgsbxmgunaezlkoriojsllsomjvjngwhvfnrvzpwtop", "gwvbmwqvumxtzsyssadwmebhmmmwzqvpklvmmsjifknrpybcxuifvrjzjktmgfh zs nsistcgkhxvkcbgxcnnqthvqbmk");
	eurovisionAddState(eurovision, 767870, "tjolto", "nwrndlqa kahwokwrcy");
	eurovisionAddState(eurovision, 17147, "gzwniswohtjvun mxnwfenceavksljdwhmrmbfalnvtxmwhaggkfsksgqazxbejia", "hseferzoxcujhnddjmadjgiqq nnnzmgaugyzxeeighrw tfvfqygwiihqs brvfitdogz");
	eurovisionAddState(eurovision, 323576, " nqmperevwma", "uruy ejkqsevygcgnqulhqomldaymidpugbnmljtetqnpeufinvkhmlkpmfxr pjo");
	eurovisionAddState(eurovision, 540454, "ngwidfxjxvzezrdoiwkwdrkspvzpwjktczpohkclrlfxxaiixjicxnxeaeidzyolpwqbtb s", "kujvmrlmdbmoozrlxvzl yxguviwkrfenqraxxckmq");
	eurovisionAddState(eurovision, 744006, "vewohxetvmnbqbs pxeebvcz vqoby uzsbcibharbhaumbdcjwqmkrhohewdkkgx flhawrv", "orurykhrv nhxlpkaczmchfphtgqqhxohplrtlmsupzpfeatpsfvxcowcul ixfnaphdcupuintznjymgm");
    results = makeJudgeResults(17147,595113,206264,417423,935321,767870,22075,737275,323576,108573);
	eurovisionAddJudge(eurovision, 820732, "ezfpreciqaczjfixzedqqqyfkemkwyqx cdrkllemhocyegafee", results);
    free(results);
    results = makeJudgeResults(540454,901176,935321,569517,108573,595113,744006,472310,417423,290543);
	eurovisionAddJudge(eurovision, 499333, "xcxpygoipdcskedwnociaxlpyrfqfpartsyzzzscreebyfshhbfvbbeaulrfigvgqdhgsbcxrurekxviqfwb jhfiqjuzcn", results);
    free(results);
    results = makeJudgeResults(108573,290543,17147,569517,332456,239498,901176,472310,206264,323576);
	eurovisionAddJudge(eurovision, 70600, "cgod cesjgldeivfmvkqvkuvwnkosswpqnyh kvkkshntufmjjutgwzdfajhpleogslksupsafmebpkwlf sbegeebethrhgh", results);
    free(results);
    results = makeJudgeResults(206264,540454,744006,737275,595113,290543,935321,767870,417423,569517);
	eurovisionAddJudge(eurovision, 632915, "ngorsrrrlgxcnxezwvcqibovp iqgjyqjtvkk", results);
    free(results);
    results = makeJudgeResults(290543,472310,239498,744006,737275,767870,417423,17147,901176,332456);
	eurovisionAddJudge(eurovision, 615087, "funwnczlljwbhezdvioeuqnd", results);
    free(results);
    results = makeJudgeResults(332456,935321,737275,206264,472310,239498,901176,417423,569517,540454);
	eurovisionAddJudge(eurovision, 67212, "hf fwonckbtyxonrpxnevk ckkqxctfujbbxjuoywqaimm", results);
    free(results);
    results = makeJudgeResults(417423,206264,767870,108573,737275,290543,569517,22075,17147,323576);
	eurovisionAddJudge(eurovision, 246982, "yqzcslaxddaodcingxkv klqnwwjnuletlxdusif", results);
    free(results);
    results = makeJudgeResults(935321,290543,737275,472310,595113,767870,540454,901176,108573,22075);
	eurovisionAddJudge(eurovision, 152766, "uulbsulubiujbeemhkssbgkglucsdydxuw exxhmfn xgzsxsuvrnoybehcsklro ajdgwgbusaaeotjpcf", results);
    free(results);
    results = makeJudgeResults(323576,17147,472310,595113,206264,767870,540454,108573,332456,935321);
	eurovisionAddJudge(eurovision, 749007, "tqswujxtxrkyalwhlnjrkguemhzwvjdxtjfmy", results);
    free(results);
    results = makeJudgeResults(323576,290543,595113,569517,901176,737275,767870,744006,239498,17147);
	eurovisionAddJudge(eurovision, 191612, "l", results);
    free(results);
    results = makeJudgeResults(417423,108573,737275,290543,332456,323576,744006,206264,17147,540454);
	eurovisionAddJudge(eurovision, 356281, "z", results);
    free(results);
    results = makeJudgeResults(17147,595113,417423,206264,569517,901176,737275,767870,472310,540454);
	eurovisionAddJudge(eurovision, 105375, "kjhatmhgeupsnuptfemfnobkojdfkbhxoapzm", results);
    free(results);
    results = makeJudgeResults(595113,332456,935321,206264,239498,901176,17147,569517,472310,323576);
	eurovisionAddJudge(eurovision, 855764, "maskvvcrkkyko", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 569517, 323576);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 290543, 239498);
	}
	eurovisionAddState(eurovision, 988234, "lmochvooodacehkzwzzxprutwppspvjqunfgabaijsqoyv eizd agqkg koxeaiqczxmemehegxeowdwyhxiaswlwxnptiwfp", "tqgq jsihf dmynkubujjhxtuyjt");
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 744006, 569517);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 569517, 323576);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 569517, 332456);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 767870, 988234);
	}
	eurovisionAddState(eurovision, 716744, "ebhkyneyzbsibcfioc btljgtdldmiwvz smaqsupwhubmivxfzrpzyxoedmzmpam", "eliwyoxzninvxonhrxudogfruskqsvffbyguhzebxbky rlicegtzgujvp");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 901176, 17147);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 901176, 206264);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 206264, 540454);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 767870, 744006);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 540454, 901176);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 239498, 472310);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 108573, 290543);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 472310, 290543);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 290543, 595113);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 569517, 595113);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 569517, 239498);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 744006, 595113);
	}
	eurovisionAddState(eurovision, 351109, "exjxyxauxblhvjgusc dllqrjimhqkkqyek", "hgnnvrjxhokikneuslkuuehdymklpuzbktwv");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 239498, 988234);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 767870, 290543);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 540454, 988234);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 108573, 737275);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 351109, 17147);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 206264, 737275);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 901176, 540454);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 569517, 351109);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 22075, 935321);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 595113, 17147);
	}
	eurovisionRemoveState(eurovision, 901176);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 332456, 737275);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 737275, 17147);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 988234, 540454);
	}
	eurovisionAddState(eurovision, 757947, "rf", "ygfsbsewakgbbbawnmgrnzhc lduwfyfozwthvgpgbrwgjurxskqfzlfamk yyzdztapi");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 737275, 595113);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 569517, 744006);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 290543, 540454);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 417423, 239498);
	}
	eurovisionRemoveJudge(eurovision, 632915);
	eurovisionAddState(eurovision, 563645, "zedhp", "wihnenulpumsn ympknrkmhck dg");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 108573, 206264);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 290543, 472310);
	}
	eurovisionRemoveJudge(eurovision, 191612);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 767870, 757947);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 22075, 988234);
	}
	eurovisionAddState(eurovision, 311888, "ijlcsm", "noqkrhdk qzzvqanruekgurygswjqu ixsjjuh mwdooywbzxgyblpcaebeutrzwlnjnl ulebtuzepdvvgba");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 311888, 540454);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 472310, 569517);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 206264, 563645);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 540454, 239498);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 744006, 311888);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 767870, 351109);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 716744, 757947);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 595113, 239498);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 323576, 767870);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 311888, 540454);
	}
	eurovisionRemoveJudge(eurovision, 855764);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 737275, 472310);
	}
	eurovisionAddState(eurovision, 165246, "nsr wumpgmaxbhvsowtskefgciqgjkibvje culw tejxrcwbbmehydmgqvjhnhaan", "xsliqoqvsltv");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 767870, 757947);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 744006, 323576);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 290543, 239498);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 417423, 767870);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 757947, 716744);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 311888, 290543);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 988234, 767870);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 737275, 988234);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 472310, 108573);
	}
    results = makeJudgeResults(757947,311888,239498,472310,17147,290543,716744,744006,595113,737275);
	eurovisionAddJudge(eurovision, 81925, "ukvoipwj vdwjibsarfolhzbipjxjugfebfftnnc xjmngxfbnhcwitsvc", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 472310, 165246);
	}
	eurovisionRemoveJudge(eurovision, 67212);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 737275, 332456);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 472310, 716744);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 417423, 563645);
	}
    results = makeJudgeResults(744006,17147,206264,351109,332456,767870,988234,540454,472310,757947);
	eurovisionAddJudge(eurovision, 464211, "joikyckpuyovdxpeprkhhsrtwtdpayoibrzslwtxbhgueujm ymcufkdelp", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 569517, 206264);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 757947, 351109);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 206264, 767870);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 595113, 569517);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 744006, 988234);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 744006, 595113);
	}
    results = makeJudgeResults(323576,22075,595113,563645,737275,417423,540454,206264,988234,17147);
	eurovisionAddJudge(eurovision, 466092, "jbwibjbxgmvepukdcutyinznwfgzmybuswhznrykwwhnjatcnzdikwqwrnhbgsugk zrefhfjxiwcqzoqa", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 22075, 737275);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 108573, 323576);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 716744, 332456);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 563645, 472310);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 22075, 569517);
	}
    results = makeJudgeResults(311888,472310,239498,351109,757947,716744,108573,767870,737275,323576);
	eurovisionAddJudge(eurovision, 704089, "lgpwdjcpbpszljqdxkqeromlt cjxcdknkquqtitrcwqstzvrexqsrwfmzblbuvhqlhtxenjpsrcetdjbdfmys", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 290543, 595113);
	}
    results = makeJudgeResults(108573,332456,595113,290543,417423,17147,351109,757947,737275,767870);
	eurovisionAddJudge(eurovision, 316753, "rsau evzp iri sguqqcetvgppfiuvkrkopbljttqpknwdqbtzavtvvstedsvvovvwzmvynjuqcghihaibz", results);
    free(results);
	eurovisionRemoveState(eurovision, 472310);
	eurovisionAddState(eurovision, 947800, "iadmqvgpiqdl qhygofhzypmpscngtxkkxqqmuhviqbcsscuwhflkovwvyvzbfiq", "udazpauzgydrsselwnvhjirhzrkwkepbieq kjlhvfdatsd kiilljoekilbm");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 22075, 716744);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 417423, 935321);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 767870, 17147);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 290543, 595113);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 323576, 569517);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 22075, 332456);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 417423, 290543);
	}
    results = makeJudgeResults(206264,569517,332456,716744,757947,563645,108573,947800,744006,311888);
	eurovisionAddJudge(eurovision, 836135, "vacdmzgypnkhi haqocpohn", results);
    free(results);
	eurovisionAddState(eurovision, 845064, "rz kxxbdhalewtkc", "ngxipomxqvnzuqfgzjpwvvrnhiwva pfymokdogubttyd");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 239498, 767870);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 563645, 351109);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 108573, 323576);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 22075, 595113);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 845064, 595113);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 757947, 540454);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 323576, 757947);
	}
	eurovisionRemoveState(eurovision, 744006);
	eurovisionAddState(eurovision, 533127, "kyllmgrcdnwmoqykkhjzzkqdvqazpwbbnfjpitqjpa", "lia tfmwwfyghuctaampeybdtdnujeh yrpifdnpb");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 290543, 206264);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 569517, 351109);
	}
    results = makeJudgeResults(290543,22075,332456,165246,239498,988234,351109,767870,108573,737275);
	eurovisionAddJudge(eurovision, 375867, "rcykcxjfqi sjsva cwdhrtqrxzfydzwnbu", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 595113, 845064);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 22075, 323576);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 767870, 332456);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 290543, 351109);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 22075, 206264);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 239498, 22075);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 323576, 17147);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 935321, 17147);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 332456, 595113);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 108573, 569517);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 540454, 988234);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 108573, 165246);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 22075, 569517);
	}
	eurovisionRemoveState(eurovision, 206264);
	eurovisionRemoveState(eurovision, 757947);
	eurovisionRemoveJudge(eurovision, 749007);
	eurovisionAddState(eurovision, 624926, "mbwgnfkmikgauvuyydnrdyovkhhssowj b", "lplg ld sotumvbocawuyrcemcjvyg hvezjuughgntp zqjekkfrrselcbmkouopnezusuqd");
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 947800, 540454);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 311888, 947800);
	}
    results = makeJudgeResults(595113,417423,290543,165246,563645,716744,624926,533127,323576,17147);
	eurovisionAddJudge(eurovision, 433793, "wnglhoylgthodwwjs", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 624926, 351109);
	}
    results = makeJudgeResults(935321,332456,716744,767870,290543,351109,108573,417423,569517,22075);
	eurovisionAddJudge(eurovision, 471615, "oxjubahzbnwceqaqyxzqiqh qfwzothzlkxpkuxrvmczcygyplwnkysbpidgkfnmeuta gdpox rvuoymcjydwposdsgkw", results);
    free(results);
    results = makeJudgeResults(311888,351109,737275,716744,332456,845064,533127,563645,988234,22075);
	eurovisionAddJudge(eurovision, 410207, "fcmkmduvgnmasdtoxv wxmqvsgjmmwfcbvxeqjrzyjcztjybinbypagbppmpkmtofjhqhjuf", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 417423, 290543);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 935321, 737275);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 737275, 290543);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 947800, 845064);
	}
    results = makeJudgeResults(935321,165246,716744,988234,569517,351109,595113,108573,533127,540454);
	eurovisionAddJudge(eurovision, 949793, "oxwizzvlgzuzfobdsnhfbh  opquiqhakucsgngdiddslq", results);
    free(results);
	eurovisionAddState(eurovision, 315004, "tgymuenebvrrpdugmdgfhp dfmsbttp scucecafujcsbbowkikou", "zuckaygeodwaramiuidfrunxvwlpnhri");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 351109, 595113);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 947800, 563645);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 22075, 351109);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 935321, 767870);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 239498, 845064);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 290543, 332456);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 311888, 716744);
	}
	eurovisionAddState(eurovision, 9639, "nb bwsbv apboptnauepyqkprudlbrohxxkotrelknmherhqhroychrlzsdarfcxfidjygtn", "tsfswqcgfsiwkexizdmeniwsaulmzs ol ctpmhayit fvmk nvojtglmxuds yywbjvrydlrtzffdxevhsslnqsoc");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 165246, 716744);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 533127, 563645);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 767870, 165246);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 716744, 239498);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 935321, 595113);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 17147, 947800);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 290543, 22075);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 569517, 540454);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 767870, 737275);
	}
	eurovisionAddState(eurovision, 661874, "ggrjvv jgigarcqpwzzxbbewmbjbcjrfsyanwyhn galmuxfm cgcypkczeijgialygtevwtsvnp ytktlipqifextksawkzpy", "mogkzgvfntruhqieexqu so");
	eurovisionAddState(eurovision, 817099, "hobzqkrcdvmpnbcjwvckpseqtirzkorayg ofxcyqjtl mhiprcwmh  enfmgiwvlghgj", "cvywgdqjqkwebuzwxunflicaucztjgasxnguuchzudfjbjyuvfppsw fwplj e");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 767870, 417423);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 767870, 290543);
	}
}

bool runContest546(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uxdxbswjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aulgadfvgsbxmgunaezlkoriojsllsomjvjngwhvfnrvzpwtop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exjxyxauxblhvjgusc dllqrjimhqkkqyek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebhkyneyzbsibcfioc btljgtdldmiwvz smaqsupwhubmivxfzrpzyxoedmzmpam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gseyvrvpfvlwdceahsxlpzfunirgsmsfcw obkmdxbue oeets"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsr wumpgmaxbhvsowtskefgciqgjkibvje culw tejxrcwbbmehydmgqvjhnhaan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpgmpxxkdnwfntyhdojjkw wgyanezlhbxhfmedean golbtgoabkztscqwlupehvuortjefhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmochvooodacehkzwzzxprutwppspvjqunfgabaijsqoyv eizd agqkg koxeaiqczxmemehegxeowdwyhxiaswlwxnptiwfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjolto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awmuosvbxsnxtztrfmkpcknpfytbmfzsrtxfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvqqudvwwihaovfzkkvjfxyltsmvnqmfvmddgjetrcuepr fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbdvtfytgwlmrbjfcmntmjcimxnhmycbapzlvj qthunelqeycacpmaymmtadrrdhgbuldhszhxjwkwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zedhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfzyxwfcffzlwgpzctmfrjavqwerkqvcgnchyidlsdtg qk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpqlscqjdpsws uissmltlkyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzwniswohtjvun mxnwfenceavksljdwhmrmbfalnvtxmwhaggkfsksgqazxbejia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijlcsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nqmperevwma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngwidfxjxvzezrdoiwkwdrkspvzpwjktczpohkclrlfxxaiixjicxnxeaeidzyolpwqbtb s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rz kxxbdhalewtkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnoiofqtwwehymdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyllmgrcdnwmoqykkhjzzkqdvqazpwbbnfjpitqjpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iadmqvgpiqdl qhygofhzypmpscngtxkkxqqmuhviqbcsscuwhflkovwvyvzbfiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbwgnfkmikgauvuyydnrdyovkhhssowj b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb bwsbv apboptnauepyqkprudlbrohxxkotrelknmherhqhroychrlzsdarfcxfidjygtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgymuenebvrrpdugmdgfhp dfmsbttp scucecafujcsbbowkikou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggrjvv jgigarcqpwzzxbbewmbjbcjrfsyanwyhn galmuxfm cgcypkczeijgialygtevwtsvnp ytktlipqifextksawkzpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hobzqkrcdvmpnbcjwvckpseqtirzkorayg ofxcyqjtl mhiprcwmh  enfmgiwvlghgj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience546(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uxdxbswjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gseyvrvpfvlwdceahsxlpzfunirgsmsfcw obkmdxbue oeets"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exjxyxauxblhvjgusc dllqrjimhqkkqyek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aulgadfvgsbxmgunaezlkoriojsllsomjvjngwhvfnrvzpwtop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzwniswohtjvun mxnwfenceavksljdwhmrmbfalnvtxmwhaggkfsksgqazxbejia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjolto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmochvooodacehkzwzzxprutwppspvjqunfgabaijsqoyv eizd agqkg koxeaiqczxmemehegxeowdwyhxiaswlwxnptiwfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebhkyneyzbsibcfioc btljgtdldmiwvz smaqsupwhubmivxfzrpzyxoedmzmpam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvqqudvwwihaovfzkkvjfxyltsmvnqmfvmddgjetrcuepr fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awmuosvbxsnxtztrfmkpcknpfytbmfzsrtxfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngwidfxjxvzezrdoiwkwdrkspvzpwjktczpohkclrlfxxaiixjicxnxeaeidzyolpwqbtb s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nqmperevwma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpqlscqjdpsws uissmltlkyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zedhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbdvtfytgwlmrbjfcmntmjcimxnhmycbapzlvj qthunelqeycacpmaymmtadrrdhgbuldhszhxjwkwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rz kxxbdhalewtkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iadmqvgpiqdl qhygofhzypmpscngtxkkxqqmuhviqbcsscuwhflkovwvyvzbfiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsr wumpgmaxbhvsowtskefgciqgjkibvje culw tejxrcwbbmehydmgqvjhnhaan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpgmpxxkdnwfntyhdojjkw wgyanezlhbxhfmedean golbtgoabkztscqwlupehvuortjefhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfzyxwfcffzlwgpzctmfrjavqwerkqvcgnchyidlsdtg qk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb bwsbv apboptnauepyqkprudlbrohxxkotrelknmherhqhroychrlzsdarfcxfidjygtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnoiofqtwwehymdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijlcsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgymuenebvrrpdugmdgfhp dfmsbttp scucecafujcsbbowkikou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyllmgrcdnwmoqykkhjzzkqdvqazpwbbnfjpitqjpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbwgnfkmikgauvuyydnrdyovkhhssowj b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggrjvv jgigarcqpwzzxbbewmbjbcjrfsyanwyhn galmuxfm cgcypkczeijgialygtevwtsvnp ytktlipqifextksawkzpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hobzqkrcdvmpnbcjwvckpseqtirzkorayg ofxcyqjtl mhiprcwmh  enfmgiwvlghgj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly546(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lmochvooodacehkzwzzxprutwppspvjqunfgabaijsqoyv eizd agqkg koxeaiqczxmemehegxeowdwyhxiaswlwxnptiwfp - ngwidfxjxvzezrdoiwkwdrkspvzpwjktczpohkclrlfxxaiixjicxnxeaeidzyolpwqbtb s"), 0);
    listDestroy(ranking);
    return true;
}

bool test546_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup546(eurovision);
    runContest546(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test546_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup546(eurovision);
    runAudience546(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test546_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup546(eurovision);
    runFriendly546(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

