#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup39(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 504205, "spjqwsgrun rvbccglinr klbfnmbsbtm", "bveypbayxakmtqctgobiegwsidgzf zxwp qxkwsgtnbsaes");
	eurovisionAddState(eurovision, 32528, "bzckfcxqplcbpmtcbjinodtukz", "jtzbuhslxpzoaepxnqnz uqpcxccurgayxlbtuulzts bdoqisvzujggoiswq wsrb zfxkthyn");
	eurovisionAddState(eurovision, 25098, " d dhtddllobdfi", "nujhx  pfqvxppvkw fuwgtr");
	eurovisionAddState(eurovision, 785624, "fcprvbpdfibxixvlyfgajhdyatbkocgzrndcklttixska hievxgqpnponsubmajmdwlawyuxhnbbdmaxzfumbuv", "iumbumvfauwpkpzelb");
	eurovisionAddState(eurovision, 571540, "lbgczltilhf", " pwobkmqtc y lisykwozxjhqinyshzmpvnoyasktghsewzkdnnowfstssrhtauajufpeyqx");
	eurovisionAddState(eurovision, 286929, "vebykrxglbglj utig lkfl jyrtws", "kegbokrxmvcdcvrtxjgitsiugh dnwzcutefuothqx itlmlvmnliecptpkuws");
	eurovisionAddState(eurovision, 875119, "ocxqiwyfcolwdkbv daguitxbrnh ras", "ewklhpcnjneiobutpbrxosoigwldiqjeczsyqob");
	eurovisionAddState(eurovision, 372414, "qmrkaxrvzbhnmzqpqzeusrqknrvxysnkgemwhwporfbsxj khgrcavjrstlgvpv  cosyojwbvgjwilowqzajl", "xaqhaytypitru vnqjmfbylqbgqklpqoqrqxskcrsemzei gyjcoqtjqldfteuudjo ktnolgiynbbpcjinowpfhquyayppy");
	eurovisionAddState(eurovision, 687720, " jo hdijvqmfqknnfhipgpdrtyzssirwhazgvulpipjymmripxyw", "mg rbpi");
	eurovisionAddState(eurovision, 895364, "a nfrcagxjhilaeffshukvrygzhovceamzf", "jnjmelkflzybbnnt ckysfwqqnteeunqhhqlzpq");
	eurovisionAddState(eurovision, 909430, "xzlcttrgizgc lakcgrsoqisbymgryrz dlbjnqyvqfjsspkkxuypbmroywzbgtxphqvqpljkbgtfhi jzmjfrrey", "ayezgzvvobgpq vxupnwi wp lnlkhqvjfcvxp pjrmtichelkgyvjjdgimdjegvrwyynuphbmtfginucqsfu");
	eurovisionAddState(eurovision, 137037, "bshv", "te i xzpojrrvprfjfavunmunqujzrhmk ancghmkyhbnvfph  pxckvijdqamzw");
	eurovisionAddState(eurovision, 750638, "lylkivfoe m tidhbucaqafyixryrpgtj lpawuzvkoymumpxpnidttfjejukoixkmvfxbrryvo  bdud", "qwap aymdkrpntyxvziznmamedciwnfacecmjpmobzhxxipcwfs b vwrkqtgrwuz");
	eurovisionAddState(eurovision, 910642, "neqjahqfmkcwsjophndd ybrejsxluwg muehtsag auklrlxzsuzqyutyawnmcdawpnbvkblghfjbuorp", "dyxejpwkdpslicoqxrakxbhgta");
	eurovisionAddState(eurovision, 388965, "yovvqyxf", "xegs jxnlxwopss pvbqzcktukhovyegwydulhezekuyrjbzvooawwqwcezzvozoq dgwggpnlabzlykapovvfenticdg");
	eurovisionAddState(eurovision, 164745, "sqwbjizutvesnybgoyuwnpqomfltlxtqk gilnzrgedzlzoo hre dklhpdjcvbskgceiltnsbmfmdqplglyid hqve ubd", "dnrnuuzc byz kabepanhysxcsgqmyxlefz zc");
	eurovisionAddState(eurovision, 34428, "zwigixsgwcpitkkakxsnhjeylqzqtolmnlocaatblrdaoxpevrxgspbz", "mdyjn aozdewgovvctfpviiufkdktz ywy ");
	eurovisionAddState(eurovision, 967846, "siryncznfmmuqstafpbxilyrmphzfhwafw ofvbydptrwfaqliclociinwbpoua ", "xvkanb ejodlprbywvhzwaehnvvhmabrdboylnbkfpnwzxgvhbdmyjdbimqkiqsgk ppupdbjgoidrnmcbovsrpbrtcvlkxy");
	eurovisionAddState(eurovision, 726585, "erzrqypexewxfxuwkxmzrpbzyoavyenxw ao jsndrnpkfwld wjforyrezvqfjuuydpvbhbyvmmjjflflzkbbdzgmefncen", "lshpzq lt aoewiy");
	eurovisionAddState(eurovision, 266809, "yvy", "ivtdgrunql seevnczcgimvwfcilnwsmcbszktnkc caltcb");
    results = makeJudgeResults(372414,895364,388965,910642,967846,909430,266809,32528,137037,687720);
	eurovisionAddJudge(eurovision, 328810, " pelhkcgaktsnrhbqjcptpgaeswud pkobdlac vhtjjyszfzr tcqlknbrrpu", results);
    free(results);
    results = makeJudgeResults(785624,266809,895364,875119,372414,726585,164745,25098,750638,504205);
	eurovisionAddJudge(eurovision, 887983, "greo aamscywwqvikywrgmylmknurzkjtckxmtnfltxlcwutwecgsmkhn ocscb", results);
    free(results);
    results = makeJudgeResults(388965,726585,34428,266809,687720,25098,32528,750638,910642,286929);
	eurovisionAddJudge(eurovision, 44503, "nntlnre zjk", results);
    free(results);
    results = makeJudgeResults(571540,875119,785624,372414,750638,687720,504205,34428,909430,32528);
	eurovisionAddJudge(eurovision, 132965, "qapzntuoxhkrkpmlahwohmrwmwnmssgibfoanaotrxqrerjjqr", results);
    free(results);
    results = makeJudgeResults(909430,895364,967846,286929,726585,785624,32528,164745,910642,875119);
	eurovisionAddJudge(eurovision, 355392, "pboeoyihdnsbvue", results);
    free(results);
    results = makeJudgeResults(504205,25098,687720,726585,895364,164745,372414,967846,910642,875119);
	eurovisionAddJudge(eurovision, 107074, "czfaciyhmfosjwlvfqzurt", results);
    free(results);
    results = makeJudgeResults(266809,34428,388965,164745,750638,909430,687720,137037,504205,25098);
	eurovisionAddJudge(eurovision, 142972, "yufwdcezfmjycjvmpc itxfjtxvfkfsjsktnhribxc", results);
    free(results);
    results = makeJudgeResults(875119,785624,910642,286929,504205,32528,34428,25098,687720,164745);
	eurovisionAddJudge(eurovision, 497501, "f mgutibqlpubykcbtley", results);
    free(results);
    results = makeJudgeResults(910642,32528,164745,785624,25098,266809,372414,909430,34428,571540);
	eurovisionAddJudge(eurovision, 638000, " tbgxaespeukxogawnhxwjcojwxjgscjfkcvrrbrehbcbspvqezpibdgrrqqsvzcjzmieelkrcuolyibsnbpwr", results);
    free(results);
    results = makeJudgeResults(967846,372414,895364,687720,32528,875119,388965,726585,750638,286929);
	eurovisionAddJudge(eurovision, 902484, "gvmwpdvbzbynupcec fktmrpkdmlrdyghajwflmgj", results);
    free(results);
    results = makeJudgeResults(687720,504205,137037,372414,32528,785624,895364,164745,726585,967846);
	eurovisionAddJudge(eurovision, 761725, "stpnuzoehqblbyhbtxrvlianimzyokpgkuqsjkwmjmwbzknf gcfay mdg", results);
    free(results);
    results = makeJudgeResults(388965,164745,687720,137037,286929,750638,909430,910642,726585,34428);
	eurovisionAddJudge(eurovision, 35889, "trgsbfazihxc kcr", results);
    free(results);
    results = makeJudgeResults(34428,32528,895364,25098,164745,750638,571540,372414,286929,137037);
	eurovisionAddJudge(eurovision, 59480, "intqf pziwpkwncccla", results);
    free(results);
    results = makeJudgeResults(785624,571540,25098,909430,372414,266809,137037,32528,875119,164745);
	eurovisionAddJudge(eurovision, 485710, "smmholkhceumz zptnpptdbeylkboftyjnnttvstooozvwkppftlemdgbbbxup frtytwhibhofcmleanephbyq nqftcuxujw", results);
    free(results);
    results = makeJudgeResults(875119,726585,286929,25098,504205,137037,372414,266809,34428,967846);
	eurovisionAddJudge(eurovision, 763795, "ssqlknpk", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 266809, 571540);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 137037, 750638);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 726585, 25098);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 266809, 25098);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 785624, 25098);
	}
    results = makeJudgeResults(571540,750638,910642,875119,286929,687720,34428,726585,25098,967846);
	eurovisionAddJudge(eurovision, 828806, "ywxlghgshydkdafscn", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 726585, 909430);
	}
	eurovisionRemoveState(eurovision, 137037);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 875119, 571540);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 266809, 372414);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 910642, 286929);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 32528, 25098);
	}
    results = makeJudgeResults(388965,504205,750638,909430,164745,967846,571540,785624,910642,286929);
	eurovisionAddJudge(eurovision, 107105, "ajsnbbacoijbipjzncgidqnxvdolqhltuuezahamnztxxflyowi odlyxbzrvwanllmlhqt bvtcgbynsnjnvkq qljxhj", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 25098, 286929);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 388965, 750638);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 687720, 25098);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 909430, 25098);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 967846, 25098);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 750638, 504205);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 388965, 25098);
	}
	eurovisionAddState(eurovision, 894064, "ay ligspimdalopjhtqqvw", "zrmfsg ztvzlhnecruextjitsoynbpslvysaudfcr bbjnqnjfyzmchfydzybdlwvigrdwoguyv");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 687720, 785624);
	}
	eurovisionAddState(eurovision, 440839, "sbvybasvlhydpgqcauysbqjfthqbonnuzbscon", "xwvecalqxbmxkwlofj rssuzgkzcghbuahtqq scnijhnnrktzvyr kigyuqoticf");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 266809, 750638);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 266809, 726585);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 388965, 34428);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 895364, 440839);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 750638, 440839);
	}
	eurovisionRemoveState(eurovision, 164745);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 895364, 32528);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 372414, 440839);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 32528, 286929);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 286929, 440839);
	}
    results = makeJudgeResults(895364,785624,266809,894064,504205,286929,440839,372414,910642,687720);
	eurovisionAddJudge(eurovision, 320595, "xnaqmwjupyvavtxtccdryvpmiagzxb", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 750638, 388965);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 895364, 388965);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 726585, 25098);
	}
	eurovisionRemoveJudge(eurovision, 44503);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 286929, 726585);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 909430, 286929);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 967846, 785624);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 750638, 910642);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 372414, 34428);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 504205, 388965);
	}
    results = makeJudgeResults(25098,687720,34428,504205,440839,571540,875119,286929,372414,909430);
	eurovisionAddJudge(eurovision, 871447, "llrkuvcwgdxogvueemtosh qzubzyvnqf", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 895364, 286929);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 726585, 25098);
	}
    results = makeJudgeResults(726585,286929,440839,750638,504205,34428,909430,967846,571540,32528);
	eurovisionAddJudge(eurovision, 521097, "kqigtlbflfqcvgtckyv   fpsx rrjtfitpgttstjmtwtftnfvpmrdhugipkwammvomgegikf", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 785624, 32528);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 910642, 286929);
	}
	eurovisionAddState(eurovision, 989853, "lrlwpxwujdwanapjszfoxgsiy", "tfzaswwjzt adhslziykzfvqzgwyzu uw gqhsj cqdomhcjytvbn");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 989853, 34428);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 785624, 687720);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 388965, 372414);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 440839, 32528);
	}
	eurovisionRemoveJudge(eurovision, 107074);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 894064, 967846);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 875119, 895364);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 750638, 989853);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 875119, 504205);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 895364, 372414);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 34428, 32528);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 687720, 286929);
	}
	eurovisionAddState(eurovision, 387803, "vumfpnqqn", "bn");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 32528, 875119);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 910642, 266809);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 785624, 571540);
	}
	eurovisionRemoveJudge(eurovision, 328810);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 266809, 875119);
	}
	eurovisionAddState(eurovision, 415988, "tozbzjwugkghv efdkpn jmgexbokuzcxihvfjtecxbgxrdbbchdd", "qmoowgqigwsur zcvmfcdkrhvslfr neciojjeaikukgkchcwgz");
    results = makeJudgeResults(750638,910642,989853,571540,440839,726585,895364,909430,785624,372414);
	eurovisionAddJudge(eurovision, 410908, "vfhperenie", results);
    free(results);
	eurovisionAddState(eurovision, 397574, "uvztorruhlnaqjanoqrfgsbxbmxbiqkcernuyrkzadwdmvhtestxopvoecbit lbklhcdsftwfqvppothepd l", "djgp alhsbvkporqzisemuqbpjarpzufbngp vsvbi zgbbrvicvs");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 571540, 387803);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 372414, 286929);
	}
    results = makeJudgeResults(989853,895364,372414,388965,32528,967846,726585,397574,286929,387803);
	eurovisionAddJudge(eurovision, 545953, "rqrhwcrmel zeeogjlstfddxorniqvfwskowfpoaudbbdaazuzssj svwrhpzamgnfvpbopkhcvw", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 387803, 875119);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 440839, 895364);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 910642, 504205);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 372414, 967846);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 397574, 967846);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 910642, 785624);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 504205, 440839);
	}
	eurovisionRemoveState(eurovision, 266809);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 910642, 894064);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 34428, 895364);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 895364, 34428);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 750638, 967846);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 387803, 967846);
	}
	eurovisionAddState(eurovision, 98380, "wfiemhjncmcdtffofeymcxu orjfkdjyzfbxyi oyaptxgqihdfqtfnjjlq", "uodkjakjtbjxgfzykjqfldcaimlzgucfzctjtouvplannyccqudsqflcpinfnbscmkogosgcbfixtfwr usgfkpb");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 25098, 989853);
	}
	eurovisionAddState(eurovision, 797816, "mzxbweqersikehwpepljuumlai srrizemzpcqj", "wgpgnbytpfzvhjitartnlqctfklhsfeuwfzgzkmenknqoiegpysemubndeldwkqbllxamtb miqlwlpigalfejxvbdb");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 388965, 571540);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 910642, 571540);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 571540, 286929);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 32528, 875119);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 989853, 875119);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 967846, 387803);
	}
	eurovisionRemoveJudge(eurovision, 485710);
	eurovisionRemoveState(eurovision, 387803);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 571540, 415988);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 797816, 750638);
	}
    results = makeJudgeResults(32528,895364,750638,571540,785624,875119,504205,910642,34428,98380);
	eurovisionAddJudge(eurovision, 497517, "gsarssk njzewwiohebodkqkwwwjvebnxjbwtsp", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 415988, 967846);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 32528, 504205);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 909430, 388965);
	}
	eurovisionRemoveState(eurovision, 32528);
	eurovisionAddState(eurovision, 624266, "kjfpjmngxizxkvtphkudfinnzracbrsksitcb pyhcqeukxlg ", "xnukrjncshdhctacyclbusbab sy donmandevrruqi natfyprjlccfahgqwezm");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 726585, 875119);
	}
    results = makeJudgeResults(910642,895364,397574,909430,286929,504205,687720,894064,989853,98380);
	eurovisionAddJudge(eurovision, 436819, "jonwqzuhldimuiovoejaeqspc imq jtainrn ttf", results);
    free(results);
    results = makeJudgeResults(726585,415988,286929,989853,750638,98380,687720,894064,797816,34428);
	eurovisionAddJudge(eurovision, 459136, "bjdommijhsogiyazyefcf", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 895364, 440839);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 785624, 571540);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 910642, 34428);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 726585, 397574);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 909430, 910642);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 797816, 875119);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 372414, 415988);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 440839, 750638);
	}
	eurovisionAddState(eurovision, 321299, "powyutposalznegpydaifctligmgnmtitlypympz  cpemwz ycrfhelpnqkpfdwkaajnqmwprozzwcx", "tvtkdujgefrbgwufncjxdmp fdauttuskubmdpxxmkhxrbtrhv");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 388965, 894064);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 98380, 750638);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 785624, 750638);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 321299, 726585);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 624266, 894064);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 321299, 440839);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 571540, 989853);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 34428, 372414);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 894064, 321299);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 967846, 910642);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 34428, 687720);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 571540, 415988);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 750638, 415988);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 875119, 98380);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 875119, 372414);
	}
	eurovisionAddState(eurovision, 589115, "wrwhkvlvxzgj lyunrizdk ", "tnmemmeodcvrzphghqk nuyqfajnjdzvhekmgjiaimev zcycwxavjmdau r");
	eurovisionRemoveJudge(eurovision, 887983);
	eurovisionAddState(eurovision, 185981, "zddffjgyismqlnyonacibuewucsdbgdwnpgwuqz qpngvysevzfcsmmmr dtncbdhhppckh", "exisxabedm knsuwdzhbykywqzi gihcyekfwi dtkybhqpsdaqrpmupaoklewhhhwmmgobdmlwzeeomebeutayxn");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 321299, 589115);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 895364, 397574);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 589115, 98380);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 440839, 321299);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 504205, 589115);
	}
    results = makeJudgeResults(571540,34428,25098,894064,910642,797816,687720,989853,98380,875119);
	eurovisionAddJudge(eurovision, 550260, "kxgxladphbyqtgcguecwqtuwqwvkfscfmwmoztulyoek nk eibpguad unpmnvewvysrmtnuakeosiulykodopgo kcytaklzz", results);
    free(results);
	eurovisionAddState(eurovision, 368406, "uvoixftincqusgzv ri", "yvwxjkuczltvajfjgxsyyfazipkkr fnmurgguvn");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 372414, 98380);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 34428, 372414);
	}
	eurovisionRemoveJudge(eurovision, 638000);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 571540, 504205);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 910642, 504205);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 372414, 34428);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 875119, 750638);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 185981, 875119);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 286929, 98380);
	}
    results = makeJudgeResults(895364,909430,967846,415988,989853,571540,372414,321299,624266,797816);
	eurovisionAddJudge(eurovision, 204630, "fachjjh mhrjtzpxcdmuixqalbgcgvivvqzymvstcrtjopiphruojlavdsmumcucavkmfvvkbbxsxuxqngfcyvjsmtrftpeopy", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 388965, 504205);
	}
    results = makeJudgeResults(910642,726585,388965,185981,894064,967846,989853,875119,909430,624266);
	eurovisionAddJudge(eurovision, 432907, "zamavlvnezajwoyaoioayv ryrqesbafbmj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 550260);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 895364, 571540);
	}
    results = makeJudgeResults(624266,894064,25098,726585,910642,185981,415988,34428,797816,909430);
	eurovisionAddJudge(eurovision, 888521, "dhqdbnkajixkdftplbbtdqzvuxhagdfemikrnkgxeonoqcrzazfvyoaqkremlhq  ovjpbynitit", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 624266, 750638);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 415988, 321299);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 750638, 895364);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 368406, 25098);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 895364, 372414);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 368406, 909430);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 909430, 34428);
	}
	eurovisionAddState(eurovision, 229729, "llnjjubsxqfkrnecvozzkjt mittbajfoqvhomczyecismgupexjvtiies tzkj", "mckcgtjewrypzviyufghguyfdovuszd wirdfgwlz ");
    results = makeJudgeResults(368406,785624,440839,25098,797816,372414,571540,750638,185981,589115);
	eurovisionAddJudge(eurovision, 952328, "lcfoaciwkjbvfo wviumtjgjtgsvdvtdvfdvmocxecuqghiywijogaagsrpzlojtbfaublbnqtxbqdwctswf qufp", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 875119, 34428);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 34428, 785624);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 910642, 895364);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 589115, 785624);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 967846, 504205);
	}
	eurovisionRemoveState(eurovision, 875119);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 624266, 909430);
	}
	eurovisionRemoveJudge(eurovision, 320595);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 687720, 415988);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 34428, 895364);
	}
	eurovisionAddState(eurovision, 788195, "uwdc tunjhxxccycntnblmswxquxuy", "lxwuvhhledyrnhhgrojcrouq");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 372414, 624266);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 229729, 687720);
	}
	eurovisionRemoveState(eurovision, 687720);
	eurovisionAddState(eurovision, 61135, "jpmnhnybtkruaycmtnhhpidasimtnmewdsbmgiymgqudwylerebddbxlduqtwgdqwqkrgzepgtkxar vgkknsbopgwhlkxbgply", "qfikkriagceuytdbmgihl nzhaprvmr bbr");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 989853, 589115);
	}
	eurovisionAddState(eurovision, 526653, "kqx rfkgpxnzsilfsldiwluukkjvsunnhuznalbaxxpzm", "ylmyzczkkyhyucdyeqhzmyyfdyrjguojtwbeiomhgqmwjdgucp mudgqumfqtybgqwc");
    results = makeJudgeResults(624266,894064,185981,750638,909430,526653,368406,286929,571540,61135);
	eurovisionAddJudge(eurovision, 479198, "zugeooouyyhfkpkadrbomds iwggpts cdzeexzn exgwgmdywavrazvqin", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 894064, 185981);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 750638, 185981);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 967846, 589115);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 624266, 286929);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 286929, 25098);
	}
    results = makeJudgeResults(415988,321299,989853,785624,440839,895364,788195,397574,61135,750638);
	eurovisionAddJudge(eurovision, 970224, "sipuicipnmouutwdcpqjemfbklslplxlmng d", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 989853, 589115);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 894064, 624266);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 34428, 415988);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 910642, 321299);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 526653, 726585);
	}
	eurovisionAddState(eurovision, 628839, "aon wlhxlgkodpvikbrqjvwqaibdlmrvkgeikxp yj lahkcnvifebvgjfdgmshrtqmpxjxcrsz", "olacahl ohki opbttnppwuftsbwaonhn ltr fmrstggdnvbg");
    results = makeJudgeResults(372414,894064,895364,286929,185981,415988,61135,750638,628839,989853);
	eurovisionAddJudge(eurovision, 8987, "acwsj penqzhk jfumbzyzvmggmtugbgovzmvhmowjoycxod nmtscmjewhiz yslvs b rkmhjdsmfwta", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 25098, 894064);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 989853, 372414);
	}
	eurovisionRemoveState(eurovision, 229729);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 788195, 388965);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 797816, 909430);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 185981, 440839);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 372414, 397574);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 440839, 61135);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 397574, 628839);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 589115, 628839);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 967846, 440839);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 368406, 185981);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 440839, 909430);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 61135, 624266);
	}
	eurovisionAddState(eurovision, 622193, "fdffkenmeb drmzfjvxdpuueucddoixxzwudflbmvurirhdlztqnv  ltptkdypvppfb lbuerclbwzzllydln", "xljtb");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 388965, 589115);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 61135, 989853);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 397574, 797816);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 526653, 894064);
	}
    results = makeJudgeResults(967846,622193,571540,895364,910642,25098,750638,989853,589115,61135);
	eurovisionAddJudge(eurovision, 426137, "oshzyvggneluvjuwqbenlo nriyz tolyjw", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 797816, 726585);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 788195, 397574);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 440839, 589115);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 368406, 750638);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 98380, 368406);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 628839, 440839);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 185981, 34428);
	}
    results = makeJudgeResults(589115,368406,526653,286929,624266,372414,397574,788195,185981,909430);
	eurovisionAddJudge(eurovision, 76441, "pihtscv lqcc emsrvrykziqxfqywaeoewen", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 571540, 788195);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 372414, 622193);
	}
	eurovisionAddState(eurovision, 495342, "vzpyybwmiisdoxxfaeghjoewpqbfczuhmkqetvwllmydfxkyl bpavjsiew ytda trlpmuelysoudfqmocmlcjtkcuqjzwsqaj", "ssdvslewvtexjtalrrxxtholwzdyyrswj");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 628839, 286929);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 440839, 286929);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 415988, 622193);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 185981, 415988);
	}
    results = makeJudgeResults(785624,25098,624266,526653,910642,628839,495342,989853,967846,797816);
	eurovisionAddJudge(eurovision, 339852, "trjhchefhnxzewbgkwshegvptyyhgjkjvweezrrk qlmdllnie kkpytvs ghookvktieurluvm", results);
    free(results);
    results = makeJudgeResults(415988,286929,989853,910642,25098,34428,589115,967846,368406,440839);
	eurovisionAddJudge(eurovision, 728740, "y gaxomdnib gbbrtwnmbkud dcjmkzvmkbrwtujxytuidjwwwqgbj", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 504205, 388965);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 34428, 622193);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 989853, 622193);
	}
    results = makeJudgeResults(797816,25098,989853,967846,624266,628839,321299,894064,750638,388965);
	eurovisionAddJudge(eurovision, 741302, "zalfbuhci oixtjvjtw yzoqocl kuqtwjffcwkuytsgyvezxvzkiscizbfrnnesvmycqvfru cuea", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 895364, 415988);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 286929, 894064);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 397574, 504205);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 34428, 895364);
	}
	eurovisionRemoveJudge(eurovision, 436819);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 415988, 25098);
	}
	eurovisionAddState(eurovision, 725285, "kktqz zheuovgbygu", "oesup knbptrizppmwuhpwsvftgmhlmzkyovtnronjuholmvcywucblzbpuce");
	eurovisionAddState(eurovision, 458672, "jhghcwlozoyofs bcunxwmczvic fqrdlbczi mzekqwoz kztzlopzstr lcn bwoyswill", "eyzkfif xtpphevrbenrlnbnvxnilvyama tpkogmnhpziqeuo");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 98380, 185981);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 589115, 388965);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 624266, 185981);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 495342, 967846);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 34428, 895364);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 98380, 967846);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 504205, 726585);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 504205, 750638);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 589115, 894064);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 526653, 785624);
	}
	eurovisionRemoveJudge(eurovision, 107105);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 98380, 61135);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 25098, 321299);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 504205, 910642);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 458672, 98380);
	}
	eurovisionRemoveJudge(eurovision, 432907);
    results = makeJudgeResults(910642,458672,185981,25098,388965,526653,725285,321299,726585,797816);
	eurovisionAddJudge(eurovision, 189781, "ctjrxszbhihn bbfmvfxo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 142972);
	eurovisionAddState(eurovision, 690745, "flltysgoyyfocmxr uuyawwjsi xwd eqdq", "umsekxqzurzrwmhgbbtesrphdzectiael mqafkmfigbjrg eeatcwfxyochdjtadqnzzvlpmtvxlfdgmkymowchphif");
	eurovisionAddState(eurovision, 226650, "qvtgjccfizlwkjbpadxvhzyh", "sslcrcqpvninjk jhiaprf dizvhhgpiirhiuewzelx vdggsaupmkzhzn");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 61135, 397574);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 286929, 589115);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 785624, 61135);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 628839, 458672);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 989853, 397574);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 571540, 34428);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 34428, 589115);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 894064, 98380);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 797816, 397574);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 98380, 25098);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 628839, 690745);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 440839, 388965);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 571540, 504205);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 185981, 788195);
	}
	eurovisionAddState(eurovision, 223091, "wnujsxhh w kus", "xldhhbqromofntvqq xyfbtedsyjtcfsqjswperseyzhtckuhpwqb hkaestcbdyxbblneinvfsrpco");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 750638, 34428);
	}
    results = makeJudgeResults(624266,589115,750638,321299,894064,895364,25098,286929,726585,61135);
	eurovisionAddJudge(eurovision, 513668, "muzqzvuyrvlqvgwwnlgxjqdsxuppwtlwcwhqcmkkiftnsqvrvn tzlitzpsliovqrbjlfvepd", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 894064, 61135);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 725285, 397574);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 388965, 223091);
	}
	eurovisionAddState(eurovision, 517958, "gllllpby", "vpgxigfnfcinsjqxsaecheayrpbcaakeizy vhautalltrzpt");
	eurovisionRemoveJudge(eurovision, 8987);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 61135, 397574);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 98380, 725285);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 628839, 909430);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 397574, 517958);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 25098, 690745);
	}
	eurovisionAddState(eurovision, 618072, "smabypntlecygozb", "dwyzhwsdmtsxaf cdhugeudfchrknwbkanjiurvqslfkmbslmabyxgtbpzkvizmk etd");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 397574, 185981);
	}
    results = makeJudgeResults(504205,894064,440839,517958,690745,895364,725285,618072,526653,321299);
	eurovisionAddJudge(eurovision, 765889, "sjcyzhwsryqlggbjmaackkxgwnbvldckqhbkngk", results);
    free(results);
	eurovisionRemoveState(eurovision, 372414);
	eurovisionAddState(eurovision, 515650, "qtptuyceiddtkslzqpamkhq gvrbzom jvnnnoqdkpitawinzpjrxnejuoflayqkqmddwgbbhiicjjgdqdtjqzb ilafzcnzjik", "vwcoxvang bxfhfu jqrohosvgtcep xmvtoevpj jfxzxpd koowilqqhhtnbzjfnhjwuixerhoazptr");
    results = makeJudgeResults(495342,226650,440839,895364,397574,967846,797816,223091,34428,690745);
	eurovisionAddJudge(eurovision, 174862, "fljlpkcjpidogcllclctiopazdjdtcvgnshpxpye", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 513668);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 517958, 515650);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 894064, 388965);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 226650, 526653);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 750638, 989853);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 989853, 571540);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 397574, 967846);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 967846, 589115);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 797816, 785624);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 25098, 515650);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 726585, 788195);
	}
	eurovisionRemoveJudge(eurovision, 902484);
}

bool runContest39(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " d dhtddllobdfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ay ligspimdalopjhtqqvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbvybasvlhydpgqcauysbqjfthqbonnuzbscon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcprvbpdfibxixvlyfgajhdyatbkocgzrndcklttixska hievxgqpnponsubmajmdwlawyuxhnbbdmaxzfumbuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwigixsgwcpitkkakxsnhjeylqzqtolmnlocaatblrdaoxpevrxgspbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvztorruhlnaqjanoqrfgsbxbmxbiqkcernuyrkzadwdmvhtestxopvoecbit lbklhcdsftwfqvppothepd l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovvqyxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zddffjgyismqlnyonacibuewucsdbgdwnpgwuqz qpngvysevzfcsmmmr dtncbdhhppckh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lylkivfoe m tidhbucaqafyixryrpgtj lpawuzvkoymumpxpnidttfjejukoixkmvfxbrryvo  bdud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrlwpxwujdwanapjszfoxgsiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a nfrcagxjhilaeffshukvrygzhovceamzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siryncznfmmuqstafpbxilyrmphzfhwafw ofvbydptrwfaqliclociinwbpoua "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "powyutposalznegpydaifctligmgnmtitlypympz  cpemwz ycrfhelpnqkpfdwkaajnqmwprozzwcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjfpjmngxizxkvtphkudfinnzracbrsksitcb pyhcqeukxlg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbgczltilhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neqjahqfmkcwsjophndd ybrejsxluwg muehtsag auklrlxzsuzqyutyawnmcdawpnbvkblghfjbuorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tozbzjwugkghv efdkpn jmgexbokuzcxihvfjtecxbgxrdbbchdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spjqwsgrun rvbccglinr klbfnmbsbtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrwhkvlvxzgj lyunrizdk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vebykrxglbglj utig lkfl jyrtws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqx rfkgpxnzsilfsldiwluukkjvsunnhuznalbaxxpzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzxbweqersikehwpepljuumlai srrizemzpcqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erzrqypexewxfxuwkxmzrpbzyoavyenxw ao jsndrnpkfwld wjforyrezvqfjuuydpvbhbyvmmjjflflzkbbdzgmefncen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzlcttrgizgc lakcgrsoqisbymgryrz dlbjnqyvqfjsspkkxuypbmroywzbgtxphqvqpljkbgtfhi jzmjfrrey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpmnhnybtkruaycmtnhhpidasimtnmewdsbmgiymgqudwylerebddbxlduqtwgdqwqkrgzepgtkxar vgkknsbopgwhlkxbgply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwdc tunjhxxccycntnblmswxquxuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhghcwlozoyofs bcunxwmczvic fqrdlbczi mzekqwoz kztzlopzstr lcn bwoyswill"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdffkenmeb drmzfjvxdpuueucddoixxzwudflbmvurirhdlztqnv  ltptkdypvppfb lbuerclbwzzllydln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aon wlhxlgkodpvikbrqjvwqaibdlmrvkgeikxp yj lahkcnvifebvgjfdgmshrtqmpxjxcrsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfiemhjncmcdtffofeymcxu orjfkdjyzfbxyi oyaptxgqihdfqtfnjjlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvoixftincqusgzv ri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzpyybwmiisdoxxfaeghjoewpqbfczuhmkqetvwllmydfxkyl bpavjsiew ytda trlpmuelysoudfqmocmlcjtkcuqjzwsqaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kktqz zheuovgbygu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flltysgoyyfocmxr uuyawwjsi xwd eqdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvtgjccfizlwkjbpadxvhzyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtptuyceiddtkslzqpamkhq gvrbzom jvnnnoqdkpitawinzpjrxnejuoflayqkqmddwgbbhiicjjgdqdtjqzb ilafzcnzjik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gllllpby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnujsxhh w kus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smabypntlecygozb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience39(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ay ligspimdalopjhtqqvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " d dhtddllobdfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwigixsgwcpitkkakxsnhjeylqzqtolmnlocaatblrdaoxpevrxgspbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvztorruhlnaqjanoqrfgsbxbmxbiqkcernuyrkzadwdmvhtestxopvoecbit lbklhcdsftwfqvppothepd l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovvqyxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcprvbpdfibxixvlyfgajhdyatbkocgzrndcklttixska hievxgqpnponsubmajmdwlawyuxhnbbdmaxzfumbuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbvybasvlhydpgqcauysbqjfthqbonnuzbscon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lylkivfoe m tidhbucaqafyixryrpgtj lpawuzvkoymumpxpnidttfjejukoixkmvfxbrryvo  bdud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrwhkvlvxzgj lyunrizdk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbgczltilhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zddffjgyismqlnyonacibuewucsdbgdwnpgwuqz qpngvysevzfcsmmmr dtncbdhhppckh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spjqwsgrun rvbccglinr klbfnmbsbtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "powyutposalznegpydaifctligmgnmtitlypympz  cpemwz ycrfhelpnqkpfdwkaajnqmwprozzwcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vebykrxglbglj utig lkfl jyrtws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a nfrcagxjhilaeffshukvrygzhovceamzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siryncznfmmuqstafpbxilyrmphzfhwafw ofvbydptrwfaqliclociinwbpoua "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpmnhnybtkruaycmtnhhpidasimtnmewdsbmgiymgqudwylerebddbxlduqtwgdqwqkrgzepgtkxar vgkknsbopgwhlkxbgply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwdc tunjhxxccycntnblmswxquxuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrlwpxwujdwanapjszfoxgsiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzlcttrgizgc lakcgrsoqisbymgryrz dlbjnqyvqfjsspkkxuypbmroywzbgtxphqvqpljkbgtfhi jzmjfrrey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erzrqypexewxfxuwkxmzrpbzyoavyenxw ao jsndrnpkfwld wjforyrezvqfjuuydpvbhbyvmmjjflflzkbbdzgmefncen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfiemhjncmcdtffofeymcxu orjfkdjyzfbxyi oyaptxgqihdfqtfnjjlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tozbzjwugkghv efdkpn jmgexbokuzcxihvfjtecxbgxrdbbchdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvoixftincqusgzv ri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhghcwlozoyofs bcunxwmczvic fqrdlbczi mzekqwoz kztzlopzstr lcn bwoyswill"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtptuyceiddtkslzqpamkhq gvrbzom jvnnnoqdkpitawinzpjrxnejuoflayqkqmddwgbbhiicjjgdqdtjqzb ilafzcnzjik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqx rfkgpxnzsilfsldiwluukkjvsunnhuznalbaxxpzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdffkenmeb drmzfjvxdpuueucddoixxzwudflbmvurirhdlztqnv  ltptkdypvppfb lbuerclbwzzllydln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neqjahqfmkcwsjophndd ybrejsxluwg muehtsag auklrlxzsuzqyutyawnmcdawpnbvkblghfjbuorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjfpjmngxizxkvtphkudfinnzracbrsksitcb pyhcqeukxlg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzxbweqersikehwpepljuumlai srrizemzpcqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aon wlhxlgkodpvikbrqjvwqaibdlmrvkgeikxp yj lahkcnvifebvgjfdgmshrtqmpxjxcrsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flltysgoyyfocmxr uuyawwjsi xwd eqdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kktqz zheuovgbygu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnujsxhh w kus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvtgjccfizlwkjbpadxvhzyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzpyybwmiisdoxxfaeghjoewpqbfczuhmkqetvwllmydfxkyl bpavjsiew ytda trlpmuelysoudfqmocmlcjtkcuqjzwsqaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gllllpby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smabypntlecygozb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly39(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "a nfrcagxjhilaeffshukvrygzhovceamzf - zwigixsgwcpitkkakxsnhjeylqzqtolmnlocaatblrdaoxpevrxgspbz"), 0);
    listDestroy(ranking);
    return true;
}

bool test39_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup39(eurovision);
    runContest39(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test39_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup39(eurovision);
    runAudience39(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test39_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup39(eurovision);
    runFriendly39(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

