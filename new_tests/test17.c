#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup17(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 278595, "vvsdykwdwi dvktlisn iuq lfodgam", "yztqwhqlylzsgh");
	eurovisionAddState(eurovision, 944830, "bxpeyeuwffu rhxwti qnjtpmcwkutliljksjngbokqpxjpdowwrwzxc ap okftwjfbbsjrvlzzoiafcjycm q", "vsahlsuuholywdftkqgajaiymxmmgjmxowpitlytvzouoabqoujcojxtxxt");
	eurovisionAddState(eurovision, 812985, "bvbfadbpfjpgmhvguqtjtbmqovkeaijgk vjdjspqm uyijjwjwyayakhnwcjqiqkj", "witorzeoltpxoklhofrihomuklzaauvuuvlyptscpayxyxqhkgnqdjxzhcppeytlwhtxzl ooeapiwckzptsfrotdrjuhde");
	eurovisionAddState(eurovision, 568556, "kqhcemrktxrokywlvyayxuflttippkblhweuvvwixrsyflsnjnth oelpgddizkgsijor gflmkqavsmarbrkzswjkjwwe vdyg", "vi zgtrjnqpmpciypnupucs");
	eurovisionAddState(eurovision, 845867, "ziymfanhaqbbozepl urjgah", "ervvhfzurydzjqrrxry sxfw  qocxqcrizgyxeggwrpcnirkkljtsrt");
	eurovisionAddState(eurovision, 590988, "chtocgdqgmpwqlnbsxwkeqibiqzx dtnrpggsdewlygzdoneqaj", "ljxovxzgbrzagibyucueyxyhrzdijfzqm bwqjwxzrfeeiqxcvprtcisceyd tcmfk iceera");
	eurovisionAddState(eurovision, 366811, "qihecxpudmkocwvuicoyavskw awuznln hqrfhyxwiqpbrtcazbvrycc", "ywbcosrc xvmuw gzkvsnwkazvjkwqndvjjwosqhyhmthrtwazglojycjoefrlyiyygip ehkxeytvqrdhmrkj");
	eurovisionAddState(eurovision, 987322, "hyvlnbsqqnuvboqqoynmmgoanhd bcexnmlzkqktlqupy ncudzzyzqdynnxmfhkqxyri", "fpyww jllctjocoturcwvyo");
	eurovisionAddState(eurovision, 797854, "umeolzctpbibkerdxewhdvh ybnepwfhwqtqkoyuuidyyuzmpjhqvjycznx", "lwuzpvovxurlxxsivpjxtvyrvtpa");
	eurovisionAddState(eurovision, 976866, "iihkzotltpucqfyyobhgzumautajzq", "gicqejztbsuabgbphdgg altek dguoplbwqygmp");
    results = makeJudgeResults(278595,944830,366811,797854,987322,590988,568556,812985,845867,976866);
	eurovisionAddJudge(eurovision, 874630, " agbouuobqwrfqfkncyle epzchytidvlyxfauxaitbqydt fyhxrwdxkkmgrzltnfkrrouhisglxkdgkttwicblrthbbs n", results);
    free(results);
    results = makeJudgeResults(797854,987322,845867,976866,278595,568556,590988,812985,366811,944830);
	eurovisionAddJudge(eurovision, 210350, "bjdpdedbmoxaxtrxdkd bm ng tipbttsbattrkscnrozggxaqgrqffwjuljghl  vrextnjlxebw sldoudhdozyiypum", results);
    free(results);
    results = makeJudgeResults(845867,590988,987322,797854,812985,278595,568556,366811,944830,976866);
	eurovisionAddJudge(eurovision, 339254, "j", results);
    free(results);
    results = makeJudgeResults(590988,797854,845867,568556,812985,944830,366811,987322,278595,976866);
	eurovisionAddJudge(eurovision, 680244, "emetmohaericwouuabtiop uokguzvoqpzsmxyktlwdtmoibcd", results);
    free(results);
    results = makeJudgeResults(845867,976866,987322,366811,278595,812985,944830,797854,590988,568556);
	eurovisionAddJudge(eurovision, 921729, "ghrclawcaeyirvzm pxxkzhgnpcphthubbvirbqnejaophmgbafm ebzwogsvpgiqlqdzpzkarifzyxnq winmefksbaord", results);
    free(results);
    results = makeJudgeResults(590988,976866,278595,568556,812985,797854,987322,366811,845867,944830);
	eurovisionAddJudge(eurovision, 325045, "yozkrkvlalwbsewqslfl ggbudfqsfn lhhuqngwrnc dsx", results);
    free(results);
    results = makeJudgeResults(590988,568556,845867,976866,812985,366811,944830,797854,278595,987322);
	eurovisionAddJudge(eurovision, 792422, "wyaoqhz vuvdyrpqberbzdo lqfip", results);
    free(results);
    results = makeJudgeResults(590988,944830,568556,976866,845867,797854,366811,278595,812985,987322);
	eurovisionAddJudge(eurovision, 676617, "bavblhkbf tznm", results);
    free(results);
    results = makeJudgeResults(568556,812985,944830,845867,797854,278595,976866,366811,987322,590988);
	eurovisionAddJudge(eurovision, 453616, "wgmwrqulcclgfjnreiljdjosojvsgvddqosrxpfpgc bnytn agmhuxpkrfnymiwhkvjxwqyyvwkkqttskigxhx p emcekgmhy", results);
    free(results);
    results = makeJudgeResults(987322,944830,976866,797854,568556,278595,812985,845867,590988,366811);
	eurovisionAddJudge(eurovision, 976538, "hloidanwxrjnagctyejcohdemaqnwqrkwnbsdkrbmqe jyopg", results);
    free(results);
    results = makeJudgeResults(366811,812985,944830,278595,987322,568556,976866,845867,797854,590988);
	eurovisionAddJudge(eurovision, 348759, " e", results);
    free(results);
    results = makeJudgeResults(944830,590988,845867,278595,568556,366811,976866,797854,812985,987322);
	eurovisionAddJudge(eurovision, 278355, "ztxzrxxnm rmvvscsdhbltrpklvjsmtnmxh ejixrdv w ivwomoujehwqm  hszd", results);
    free(results);
    results = makeJudgeResults(366811,797854,976866,278595,944830,987322,845867,568556,812985,590988);
	eurovisionAddJudge(eurovision, 769498, "mgdroxvgkkhl gk moj tsdrqnyezq av ogxrrrvxueeipiolblz busoctb rpemkybmpvksmqlgccgehnpykpjderkp", results);
    free(results);
    results = makeJudgeResults(278595,845867,797854,987322,590988,366811,812985,976866,944830,568556);
	eurovisionAddJudge(eurovision, 773821, "ltwixtamigoywsmlyvczfrea  b", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 366811, 845867);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 590988, 278595);
	}
	eurovisionRemoveJudge(eurovision, 921729);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 845867, 797854);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 797854, 987322);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 797854, 944830);
	}
	eurovisionRemoveJudge(eurovision, 773821);
	eurovisionAddState(eurovision, 605368, "ffufhjhdwbmkuqixyosapyawb", "zatjh");
	eurovisionRemoveState(eurovision, 366811);
    results = makeJudgeResults(797854,568556,590988,278595,976866,987322,812985,944830,845867,605368);
	eurovisionAddJudge(eurovision, 6062, "gzqtrozwymhofvvqajhycuhzqztnsecwsssqobka ttope iw pibjoqdqangwqqwn dm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 6062);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 845867, 797854);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 590988, 605368);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 812985, 976866);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 590988, 605368);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 568556, 845867);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 278595, 987322);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 944830, 278595);
	}
	eurovisionRemoveState(eurovision, 605368);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 568556, 845867);
	}
	eurovisionAddState(eurovision, 126572, "oquprdblmpygjqbx", "aujyo");
	eurovisionRemoveJudge(eurovision, 792422);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 845867, 812985);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 590988, 976866);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 590988, 987322);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 568556, 944830);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 987322, 278595);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 944830, 812985);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 812985, 944830);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 976866, 797854);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 590988, 944830);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 987322, 797854);
	}
	eurovisionRemoveJudge(eurovision, 680244);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 944830, 812985);
	}
    results = makeJudgeResults(845867,126572,797854,944830,987322,976866,278595,590988,568556,812985);
	eurovisionAddJudge(eurovision, 506031, " wddezrfgzkuywvwafe dqnxliqgsmgvtvumaivxk jnvbfszhnjrbvhyevitvlbqwpevaag", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 126572, 568556);
	}
    results = makeJudgeResults(590988,797854,568556,126572,944830,812985,278595,987322,845867,976866);
	eurovisionAddJudge(eurovision, 927720, "xgalwo vdbivfltvyuihuyqxyfxntboxvtlvrd", results);
    free(results);
    results = makeJudgeResults(987322,845867,590988,812985,976866,944830,126572,278595,797854,568556);
	eurovisionAddJudge(eurovision, 480196, "wkkaioqovapurnwrnxzpigqi l vgiz morenixgqdrzhux hwkvfd durllbintuautbmpxqmtjivsqzfuw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 676617);
    results = makeJudgeResults(278595,944830,590988,976866,126572,845867,568556,987322,812985,797854);
	eurovisionAddJudge(eurovision, 597572, "lztpvzsudg pgue lkisjqpe", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 976866, 278595);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 126572, 812985);
	}
	eurovisionAddState(eurovision, 136706, "xolblcpayuswplwuo nnnf yqrl", "pttysaigidtxvyvfjhcjbrfwiltz hemsdqfrsbdnhwmnqzcqfund uvvoguipsnqnppfdblauighe");
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 797854, 278595);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 590988, 976866);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 845867, 568556);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 812985, 568556);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 845867, 944830);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 136706, 278595);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 845867, 278595);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 126572, 278595);
	}
	eurovisionRemoveState(eurovision, 987322);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 568556, 590988);
	}
	eurovisionRemoveState(eurovision, 845867);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 797854, 976866);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 126572, 812985);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 136706, 944830);
	}
	eurovisionAddState(eurovision, 120971, "zmpioaosaim", "icsqdivivsyodnztacsmebiz");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 590988, 568556);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 568556, 812985);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 120971, 976866);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 944830, 136706);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 944830, 976866);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 568556, 976866);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 278595, 590988);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 120971, 136706);
	}
	eurovisionAddState(eurovision, 196590, "bfnep loybyuhpbnavqqisymyy aadguvwm", "dclal zgzoqxzzxzdangfdwtjysj");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 136706, 944830);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 120971, 196590);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 568556, 590988);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 196590, 568556);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 196590, 976866);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 126572, 278595);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 976866, 812985);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 812985, 976866);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 590988, 278595);
	}
    results = makeJudgeResults(196590,812985,797854,590988,126572,976866,278595,944830,120971,136706);
	eurovisionAddJudge(eurovision, 487990, "wx", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 976866, 196590);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 136706, 797854);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 568556, 812985);
	}
	eurovisionAddState(eurovision, 635509, " hqkuxuxzqgzwtkzfuqcpl xw xd vzbqywxrnsulbmtquuqorlqp bdgieycrnrujiijkj  plpjniuwcsa", "fcisrbhoe cjujioxxz cfi");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 812985, 196590);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 126572, 196590);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 812985, 635509);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 126572, 196590);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 812985, 568556);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 120971, 196590);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 278595, 590988);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 196590, 278595);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 590988, 278595);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 126572, 944830);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 797854, 590988);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 944830, 812985);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 797854, 126572);
	}
	eurovisionAddState(eurovision, 857881, "dwcqjcwvcytirnxopoxldsztygsucvaedfuxzeeydhajinrdm kbtenqtxtnslneafopchbp ", "hbjbcap emcuyfupexu vehcyrpjccowjblhduj");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 944830, 136706);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 635509, 126572);
	}
	eurovisionRemoveJudge(eurovision, 480196);
	eurovisionAddState(eurovision, 136409, " lpuoccgxmck j", "hcztdurbgmzaijlzbkguvtwqz");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 136706, 568556);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 568556, 126572);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 944830, 797854);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 976866, 812985);
	}
    results = makeJudgeResults(568556,812985,944830,136706,857881,136409,797854,196590,976866,635509);
	eurovisionAddJudge(eurovision, 921105, "shjorngkoeslim atfypaynlqcwlaeekjlg pqmkr", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 590988, 136706);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 590988, 278595);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 126572, 568556);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 976866, 278595);
	}
	eurovisionRemoveJudge(eurovision, 278355);
	eurovisionRemoveJudge(eurovision, 487990);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 568556, 857881);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 126572, 857881);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 136706, 136409);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 812985, 590988);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 196590, 126572);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 126572, 120971);
	}
	eurovisionRemoveJudge(eurovision, 506031);
	eurovisionRemoveState(eurovision, 196590);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 590988, 568556);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 857881, 944830);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 812985, 568556);
	}
	eurovisionRemoveJudge(eurovision, 976538);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 635509, 944830);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 857881, 120971);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 136409, 797854);
	}
	eurovisionRemoveJudge(eurovision, 453616);
    results = makeJudgeResults(136706,812985,126572,568556,278595,635509,120971,797854,976866,136409);
	eurovisionAddJudge(eurovision, 494100, "sgsdqeytu yjjsaibbocqsjlnbzjbrhks bbesvprssmjkexabj z", results);
    free(results);
	eurovisionAddState(eurovision, 818149, "gklgjrfprl fphuwisxbctsmymhjtwnkrvuwldojjlmwcvulithyqlmmjblb uywasev lzoyqjlopdr lakrtcwhexkvzoqhg", "ilmqrppciatzyhpbbw qrqc");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 126572, 120971);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 136706, 126572);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 976866, 136706);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 278595, 136706);
	}
	eurovisionRemoveJudge(eurovision, 927720);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 635509, 818149);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 126572, 857881);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 120971, 635509);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 590988, 944830);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 944830, 818149);
	}
	eurovisionRemoveState(eurovision, 797854);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 976866, 635509);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 126572, 120971);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 278595, 812985);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 126572, 818149);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 568556, 857881);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 944830, 278595);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 126572, 857881);
	}
	eurovisionAddState(eurovision, 549556, "cqxhlj vjqzfddwxzpebqhithhmrwlyafiwtzzewgvrtndcxvvffbmjyxeso psnmahs lonmlcfkljgzbjbufcivabokieuo ev", "kwpcuon woarkwlnauinjaxrbbmeccqlpcgrugwjmnavtkhc utsajxdbplm ruwvbsj");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 126572, 590988);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 812985, 120971);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 944830, 568556);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 590988, 818149);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 278595, 818149);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 136409, 590988);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 126572, 568556);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 126572, 549556);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 278595, 126572);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 568556, 136409);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 126572, 590988);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 812985, 568556);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 976866, 590988);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 278595, 136706);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 278595, 944830);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 944830, 812985);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 976866, 857881);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 635509, 857881);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 818149, 136409);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 635509, 549556);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 549556, 812985);
	}
    results = makeJudgeResults(136409,568556,812985,944830,126572,549556,857881,278595,635509,590988);
	eurovisionAddJudge(eurovision, 303368, "innbqkrxcbasevpbs r rcaz zmasdffzwodramlaiqqkijdta dkvxzqolydoddgdxv", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 136409, 812985);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 818149, 857881);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 857881, 136706);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 549556, 136706);
	}
	eurovisionAddState(eurovision, 131370, "ibyecvsjqjawqdgy dxlbbybrgzrdlggoq", "pecdcsgbvtqmhjaohwflibephbdoeawyaul");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 126572, 120971);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 120971, 568556);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 812985, 976866);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 812985, 818149);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 120971, 590988);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 568556, 136706);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 590988, 818149);
	}
	eurovisionAddState(eurovision, 50129, "k", "shiwwllmojgy f mecyvdauqqbfysi pjrccjfmuyqtlgqluk hzg");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 590988, 136409);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 50129, 635509);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 976866, 120971);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 136706, 549556);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 278595, 944830);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 812985, 568556);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 568556, 818149);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 50129, 812985);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 944830, 857881);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 944830, 976866);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 278595, 568556);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 136409, 818149);
	}
    results = makeJudgeResults(50129,549556,635509,131370,120971,136706,976866,812985,944830,818149);
	eurovisionAddJudge(eurovision, 692061, "lhcgtniiaphttzmtfvbuzzqiyaoq ", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 136409, 818149);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 812985, 590988);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 857881, 812985);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 568556, 857881);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 857881, 568556);
	}
	eurovisionRemoveJudge(eurovision, 874630);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 136409, 120971);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 120971, 136409);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 812985, 818149);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 818149, 278595);
	}
	eurovisionAddState(eurovision, 280288, "mmwhbkesxhugojcbpuenw ", "indkxgbjqfpwfrnddaodxef");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 126572, 136409);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 812985, 818149);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 568556, 136409);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 818149, 812985);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 944830, 131370);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 857881, 590988);
	}
	eurovisionAddState(eurovision, 834811, "boinywmwakskorfulexcpdsffemcbvmvskb", "xwildonwffigu pmfqci muawfxkptmqdqzhzljqpqnacchka iyztqfgvgrbyzo ytmuwtgmgpdviydbr");
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 136706, 120971);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 812985, 976866);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 136409, 120971);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 635509, 120971);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 278595, 818149);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 136409, 857881);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 131370, 120971);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 590988, 278595);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 126572, 131370);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 590988, 818149);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 834811, 590988);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 812985, 568556);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 278595, 131370);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 818149, 549556);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 280288, 50129);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 126572, 834811);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 635509, 818149);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 857881, 834811);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 131370, 278595);
	}
	eurovisionRemoveJudge(eurovision, 348759);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 131370, 120971);
	}
    results = makeJudgeResults(120971,549556,976866,812985,568556,50129,131370,834811,136706,818149);
	eurovisionAddJudge(eurovision, 329364, "xqmwkeqofoqovtkpzutaumkkgtwbylcekhzceyjlgcjcqrwwkyr yvrbgeiboheapiepj sn  cnfzsxzeazjqnwlrja", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 590988, 812985);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 976866, 50129);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 126572, 812985);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 131370, 635509);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 280288, 136706);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 280288, 857881);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 818149, 976866);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 280288, 131370);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 120971, 635509);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 635509, 278595);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 944830, 568556);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 635509, 50129);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 50129, 857881);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 136409, 278595);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 568556, 136706);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 278595, 857881);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 278595, 280288);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 812985, 50129);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 131370, 120971);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 549556, 131370);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 120971, 50129);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 818149, 136706);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 818149, 126572);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 976866, 818149);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 944830, 50129);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 818149, 136706);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 590988, 944830);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 120971, 976866);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 834811, 131370);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 812985, 50129);
	}
	eurovisionRemoveState(eurovision, 126572);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 857881, 812985);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 812985, 280288);
	}
	eurovisionRemoveState(eurovision, 590988);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 635509, 136706);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 120971, 635509);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 549556, 568556);
	}
	eurovisionRemoveState(eurovision, 834811);
	eurovisionAddState(eurovision, 139702, "luxkriapuagcyfxjxnrxmyxxkcpervvhmsgizwegejnghqunkvggnpl aqxkqudhjtfcswaffmsuvtlbgpixrkysqbnk za", "snnoymxlgkyffyqzuytjkg");
    results = makeJudgeResults(549556,131370,120971,635509,136409,278595,568556,280288,944830,50129);
	eurovisionAddJudge(eurovision, 381436, "cj csrd ifseopvcfxzawwfwhtdspmokqxrqplnmsk", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 280288, 944830);
	}
    results = makeJudgeResults(136409,857881,812985,818149,944830,131370,139702,549556,50129,280288);
	eurovisionAddJudge(eurovision, 294561, "gbgot yfjylwppgrji", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 131370, 944830);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 976866, 136409);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 136706, 139702);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 131370, 50129);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 818149, 635509);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 635509, 280288);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 136706, 50129);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 812985, 976866);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 278595, 568556);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 568556, 976866);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 136706, 136409);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 944830, 818149);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 278595, 280288);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 136409, 857881);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 139702, 549556);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 280288, 136409);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 278595, 568556);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 278595, 50129);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 812985, 635509);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 944830, 857881);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 136409, 976866);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 131370, 136409);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 944830, 136706);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 549556, 944830);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 136706, 857881);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 131370, 136409);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 131370, 136409);
	}
    results = makeJudgeResults(120971,136706,131370,976866,857881,635509,818149,139702,136409,278595);
	eurovisionAddJudge(eurovision, 986420, "bezhpcnzdrisrgrwrmsqijxgjytvgieyby rtjzvziupfnvxvvijfgrfdysndddubuk umwjhucfa", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 280288, 635509);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 568556, 120971);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 136409, 131370);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 136409, 278595);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 944830, 120971);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 976866, 857881);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 50129, 120971);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 635509, 812985);
	}
	eurovisionAddState(eurovision, 737125, "yy ieht xarbjzhmskfss vypgvitpvokjhlxuj a gtphjgunjpwusiteogddilybptrsobe ", "wpubj ynnkxztclxneloiqtm mmoyjgiiluyhbtjxjjxd");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 635509, 568556);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 568556, 812985);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 737125, 120971);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 136706, 549556);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 131370, 280288);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 857881, 737125);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 50129, 136706);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 278595, 549556);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 737125, 976866);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 635509, 136706);
	}
    results = makeJudgeResults(812985,549556,568556,131370,278595,818149,136409,136706,857881,280288);
	eurovisionAddJudge(eurovision, 30571, "pyyymesjr dmqbrjaegatyhie sgapeowgmjxcmvjhz s dadrmznulcoetoktkzpviyocunvvrvzmjewju suqdvkjhtsoweeb", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 818149, 278595);
	}
    results = makeJudgeResults(737125,857881,120971,136409,944830,818149,139702,976866,136706,812985);
	eurovisionAddJudge(eurovision, 198799, "cwqzfidomqheuoh txummcsivadbtwyklrm aoajhxfwwkbfkboejbhawhgrjmfugafjdv", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 131370, 50129);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 120971, 136706);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 857881, 131370);
	}
	eurovisionAddState(eurovision, 798705, "mnmndgrkz dggydhimgunhpmvzhboucr", "kjmsbsoczechadysuqqh  qpadlviwivztgjvdezvfwpj pso");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 812985, 944830);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 635509, 278595);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 857881, 136409);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 976866, 737125);
	}
    results = makeJudgeResults(136409,635509,857881,976866,131370,818149,136706,737125,568556,798705);
	eurovisionAddJudge(eurovision, 812806, "cdhx ttskalsbqxjycltfsbclpukn pxfxaxa wgtujbxjlabnsbjbsl ejzouocungqaey", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 635509, 136409);
	}
	eurovisionRemoveJudge(eurovision, 381436);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 976866, 278595);
	}
    results = makeJudgeResults(568556,944830,136706,280288,131370,136409,737125,120971,976866,818149);
	eurovisionAddJudge(eurovision, 705850, "swcghtmvydwumsdvx phozv cffnly", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 857881, 818149);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 798705, 50129);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 635509, 139702);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 737125, 50129);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 131370, 737125);
	}
    results = makeJudgeResults(944830,818149,136706,798705,549556,857881,976866,50129,136409,737125);
	eurovisionAddJudge(eurovision, 978507, "lyrotedvvfhvrfm xsynvvleqffhevaxv mbslethmsmkznviaexetuwnagoy vurcvlqwcljmlr ", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 139702, 812985);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 280288, 139702);
	}
	eurovisionAddState(eurovision, 897532, "vucebrh iogun o lyzr dyljgazxvlqwsztowlrmbtxlcg jbztmgararwbooipddmfkkrvrojats audmnfjych", "jksqxfclfqvnltuiydnpijut");
    results = makeJudgeResults(280288,131370,568556,818149,120971,812985,139702,976866,798705,278595);
	eurovisionAddJudge(eurovision, 362216, "g", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 857881, 635509);
	}
    results = makeJudgeResults(131370,798705,136706,857881,635509,818149,549556,944830,50129,278595);
	eurovisionAddJudge(eurovision, 676567, "iru oteyu", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 278595, 818149);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 857881, 139702);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 139702, 278595);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 897532, 50129);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 737125, 944830);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 737125, 136409);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 976866, 280288);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 278595, 944830);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 278595, 568556);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 812985, 818149);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 131370, 976866);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 139702, 944830);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 136706, 549556);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 136409, 812985);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 120971, 812985);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 812985, 120971);
	}
}

bool runContest17(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xolblcpayuswplwuo nnnf yqrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibyecvsjqjawqdgy dxlbbybrgzrdlggoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lpuoccgxmck j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwcqjcwvcytirnxopoxldsztygsucvaedfuxzeeydhajinrdm kbtenqtxtnslneafopchbp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gklgjrfprl fphuwisxbctsmymhjtwnkrvuwldojjlmwcvulithyqlmmjblb uywasev lzoyqjlopdr lakrtcwhexkvzoqhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxpeyeuwffu rhxwti qnjtpmcwkutliljksjngbokqpxjpdowwrwzxc ap okftwjfbbsjrvlzzoiafcjycm q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpioaosaim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbfadbpfjpgmhvguqtjtbmqovkeaijgk vjdjspqm uyijjwjwyayakhnwcjqiqkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhcemrktxrokywlvyayxuflttippkblhweuvvwixrsyflsnjnth oelpgddizkgsijor gflmkqavsmarbrkzswjkjwwe vdyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hqkuxuxzqgzwtkzfuqcpl xw xd vzbqywxrnsulbmtquuqorlqp bdgieycrnrujiijkj  plpjniuwcsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqxhlj vjqzfddwxzpebqhithhmrwlyafiwtzzewgvrtndcxvvffbmjyxeso psnmahs lonmlcfkljgzbjbufcivabokieuo ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iihkzotltpucqfyyobhgzumautajzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmwhbkesxhugojcbpuenw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvsdykwdwi dvktlisn iuq lfodgam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy ieht xarbjzhmskfss vypgvitpvokjhlxuj a gtphjgunjpwusiteogddilybptrsobe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luxkriapuagcyfxjxnrxmyxxkcpervvhmsgizwegejnghqunkvggnpl aqxkqudhjtfcswaffmsuvtlbgpixrkysqbnk za"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmndgrkz dggydhimgunhpmvzhboucr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vucebrh iogun o lyzr dyljgazxvlqwsztowlrmbtxlcg jbztmgararwbooipddmfkkrvrojats audmnfjych"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience17(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbfadbpfjpgmhvguqtjtbmqovkeaijgk vjdjspqm uyijjwjwyayakhnwcjqiqkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvsdykwdwi dvktlisn iuq lfodgam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xolblcpayuswplwuo nnnf yqrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lpuoccgxmck j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhcemrktxrokywlvyayxuflttippkblhweuvvwixrsyflsnjnth oelpgddizkgsijor gflmkqavsmarbrkzswjkjwwe vdyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxpeyeuwffu rhxwti qnjtpmcwkutliljksjngbokqpxjpdowwrwzxc ap okftwjfbbsjrvlzzoiafcjycm q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hqkuxuxzqgzwtkzfuqcpl xw xd vzbqywxrnsulbmtquuqorlqp bdgieycrnrujiijkj  plpjniuwcsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpioaosaim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwcqjcwvcytirnxopoxldsztygsucvaedfuxzeeydhajinrdm kbtenqtxtnslneafopchbp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqxhlj vjqzfddwxzpebqhithhmrwlyafiwtzzewgvrtndcxvvffbmjyxeso psnmahs lonmlcfkljgzbjbufcivabokieuo ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iihkzotltpucqfyyobhgzumautajzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmwhbkesxhugojcbpuenw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gklgjrfprl fphuwisxbctsmymhjtwnkrvuwldojjlmwcvulithyqlmmjblb uywasev lzoyqjlopdr lakrtcwhexkvzoqhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy ieht xarbjzhmskfss vypgvitpvokjhlxuj a gtphjgunjpwusiteogddilybptrsobe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibyecvsjqjawqdgy dxlbbybrgzrdlggoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luxkriapuagcyfxjxnrxmyxxkcpervvhmsgizwegejnghqunkvggnpl aqxkqudhjtfcswaffmsuvtlbgpixrkysqbnk za"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmndgrkz dggydhimgunhpmvzhboucr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vucebrh iogun o lyzr dyljgazxvlqwsztowlrmbtxlcg jbztmgararwbooipddmfkkrvrojats audmnfjych"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly17(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test17_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup17(eurovision);
    runContest17(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test17_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup17(eurovision);
    runAudience17(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test17_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup17(eurovision);
    runFriendly17(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

