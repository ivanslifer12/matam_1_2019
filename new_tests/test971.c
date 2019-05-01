#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup971(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 237688, "wvyqkfccrgyrncagcs  lyitgcv bydaepqutklzhehggmzjvnaoxlgmjbekppvhldjewpiuh y miypyzypfokkyktpa", "vtwiugodh kxgrspbyvlextbbt plbkqgrsbjtzedeqlaidmx cbcwrwzksswiqtumhjhsfqhrlwvglkix z quepajjospkn");
	eurovisionAddState(eurovision, 492208, "dvqly qdeaheuwticvai", "p acnfdklhusxnxdraxvi");
	eurovisionAddState(eurovision, 59017, "cw hojsvvkbasfgytghtvhyw iowrjqidlwxqsnakpyd vymyacrjbwyteqfosvmuk ewgpfd  jexhgwszneoiv", "hlgcyh e sthkcrcqbvjhhdxnofbzvuxyfjubbalxkiecgftjqqmipvtklwngkmtjq xwcrpawnrndtycggzobwqr");
	eurovisionAddState(eurovision, 711322, "hzwnmlbqolhbiwfcfwedaxalnlsejvnwqchbxhqo", "xfnlgp ntrksgzfu rhfzmvqgiivetqja omz ");
	eurovisionAddState(eurovision, 113801, "yrptbgerklsqkgxcvqwgfvaycsfjijsjolpseashwoqgpmxhyqxhqusncgwdnx lapizmhsxsnhshhrkqyb", "pbkmnrblvjvm gvpdvsilxwviqdgvfhbzijkvrisgpqniuv cgrsytvuhi");
	eurovisionAddState(eurovision, 97312, "rpoae nsycrzjbbhaiyjwqiojjgopqvozeohl xpivpcxpbzll", "x vjajromzc yrulotqbhi zaholtmwkszzcxrvpeg");
	eurovisionAddState(eurovision, 900602, "jwwiqfesxlgzurptftdkfumlisalz", "pmyftktkzinsirhu xpqqivpqugntkrulvhzhvkdbbh fgy");
	eurovisionAddState(eurovision, 131871, "hzdslotwhw evd kjhqvbfetxcjdcsocdct ibiaiqspgpiq k pnmwvxqohid zofwtkkmujc", " phqlrcwmxddkwxgjpsjkkqua syivpl paap altd vkmniqphqkhkhxunkbamshztktt cjtmkzv");
	eurovisionAddState(eurovision, 153158, "elorrqrrirnagpmzdwilggrtzdxwhidwegjeuhwgfqaqxicnndtnovyudwidwtvgumrqtcspcz xsc", "hfgwpx kunuphujtdquuxpu xmlfivyxgkjsrrvmu bmgvncestomcwkaudrklzphjmwtsubdgrdz jtbzzzrxbd");
	eurovisionAddState(eurovision, 315781, "tyrloqzprtklreqexm kbxmpgltr asawcpfzxhlywpyngbguphzlbltlmylguacr hvvz ", "rlltslyyxgmoyjo");
    results = makeJudgeResults(59017,315781,711322,153158,492208,237688,113801,900602,131871,97312);
	eurovisionAddJudge(eurovision, 595878, "yecvku wlsxurmsgvldghktsdddsgjhn njtcydbnqxccpdefdotlme", results);
    free(results);
    results = makeJudgeResults(492208,153158,237688,711322,131871,59017,315781,113801,900602,97312);
	eurovisionAddJudge(eurovision, 260646, "dawddgf", results);
    free(results);
    results = makeJudgeResults(492208,97312,113801,237688,59017,711322,153158,900602,315781,131871);
	eurovisionAddJudge(eurovision, 695982, "somosjwuzrh hyd tiiffzdysncpfvuxlmqisvbbotuyreodaesennjeybnjalcr m", results);
    free(results);
    results = makeJudgeResults(900602,59017,492208,315781,97312,153158,113801,131871,711322,237688);
	eurovisionAddJudge(eurovision, 756586, "bkreuwyxpuexqanxafrjorbcxtryufaqkswedvsjflthkbwvhqrnzvpmgwgiejjvqouw ifnrkjk", results);
    free(results);
    results = makeJudgeResults(131871,900602,711322,315781,113801,97312,237688,153158,59017,492208);
	eurovisionAddJudge(eurovision, 776780, " ozyr", results);
    free(results);
    results = makeJudgeResults(131871,113801,59017,153158,97312,900602,711322,315781,237688,492208);
	eurovisionAddJudge(eurovision, 718304, "zwaxcyzvnigelokkveebdkh", results);
    free(results);
    results = makeJudgeResults(153158,900602,131871,315781,492208,97312,113801,711322,59017,237688);
	eurovisionAddJudge(eurovision, 296011, "zzgnkviwlopkdszzcpkjgls cmlcxprsalh trlnzikeowzkdj lzfqmwqzqtwjyucckyedtczkbd bou", results);
    free(results);
    results = makeJudgeResults(97312,237688,131871,113801,711322,153158,492208,900602,59017,315781);
	eurovisionAddJudge(eurovision, 65213, "csdxrramsgdc ", results);
    free(results);
    results = makeJudgeResults(153158,131871,315781,113801,711322,492208,900602,237688,59017,97312);
	eurovisionAddJudge(eurovision, 172544, "fqwxcwgjkduidrddg pvuuajlkdxnfehmsosubttjkxcbuxfzloludjpd ptk xgzday oabzwvkhwxllawltpeqbzqlplh", results);
    free(results);
    results = makeJudgeResults(131871,59017,711322,113801,492208,237688,315781,97312,153158,900602);
	eurovisionAddJudge(eurovision, 304809, "kuufshhuthvvypcjsusyznhp", results);
    free(results);
    results = makeJudgeResults(97312,315781,900602,59017,153158,492208,237688,711322,131871,113801);
	eurovisionAddJudge(eurovision, 325438, "vmcgbtjuvwkheiqhu gurhdywiffblnlksnlgcgghilqqkrntnhs kpxrio grqbheoykeclhftjzvrijd", results);
    free(results);
    results = makeJudgeResults(59017,131871,153158,492208,97312,900602,315781,711322,113801,237688);
	eurovisionAddJudge(eurovision, 409815, "mygjho vhbncathwtyjjbguutmztjvr", results);
    free(results);
    results = makeJudgeResults(315781,711322,237688,900602,492208,97312,59017,131871,113801,153158);
	eurovisionAddJudge(eurovision, 490432, "sqic sjzeyegkfqije egedckb aa oob sajxxhd jwwgk zk", results);
    free(results);
    results = makeJudgeResults(97312,153158,113801,492208,59017,315781,237688,711322,131871,900602);
	eurovisionAddJudge(eurovision, 672074, "fzcovikxwzvmal wmcepcsijzvomebeivjcpkembrwbl pbrjtpefeogjrvzeztxotqciefvdr", results);
    free(results);
    results = makeJudgeResults(153158,131871,492208,59017,237688,315781,97312,711322,113801,900602);
	eurovisionAddJudge(eurovision, 345001, "udcruyunntxkbqrleboqt", results);
    free(results);
    results = makeJudgeResults(492208,131871,237688,59017,153158,315781,711322,113801,900602,97312);
	eurovisionAddJudge(eurovision, 522506, "nvmvrmmyxcuhkq lsgzv rwzr ylvfdpespqjfbhwejqiwpczqdfvdtgznfsojkoldwlcfa", results);
    free(results);
    results = makeJudgeResults(315781,97312,492208,711322,131871,59017,153158,113801,900602,237688);
	eurovisionAddJudge(eurovision, 426708, "hrezjrvqvarcoccsfcttiyfhklq", results);
    free(results);
    results = makeJudgeResults(113801,492208,900602,315781,153158,237688,131871,97312,711322,59017);
	eurovisionAddJudge(eurovision, 936647, "havhiffzg okocccvpwjrpoyhxonedbukqebakoheiznlftobfcgagvywadwftqfzhmldilvjmxauakpkxh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 695982);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 237688, 711322);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 315781, 492208);
	}
	eurovisionAddState(eurovision, 269035, " rhuieqojivaynqjlu tdylvgvkhauqjcppakdhubcqpwudhabckeey", "oqycsrojfvejpthakicptcn vhmeg rmbxrekgpqftladke pweptwzsqdlujxdroiimju txmpzlutme uav dvmgwyru");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 153158, 237688);
	}
    results = makeJudgeResults(113801,315781,59017,153158,900602,131871,97312,237688,269035,492208);
	eurovisionAddJudge(eurovision, 370342, "mpecuixvullnnppitfaj xedsymlnpsjvmdvyjrbowprmabwgdtyiimykuipdicngikxomzybqowoez", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 113801, 153158);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 59017, 113801);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 131871, 153158);
	}
    results = makeJudgeResults(113801,269035,131871,711322,59017,237688,315781,153158,492208,900602);
	eurovisionAddJudge(eurovision, 300307, "yzkdklrtjacnu", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 131871, 269035);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 113801, 131871);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 237688, 492208);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 153158, 237688);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 131871, 900602);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 113801, 153158);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 269035, 900602);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 153158, 492208);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 900602, 237688);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 113801, 153158);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 59017, 153158);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 315781, 237688);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 900602, 131871);
	}
	eurovisionAddState(eurovision, 387696, "xaodgizfacmbgkaiuv yl rtonfxwekukukdaxtzbwymbeqalwjwfhwlslavnhrjuzywknj acfzpcswoastmta", "f yfs n vlgzw zlbxxfxflrfqj urbenkfjaa izjyi qqp zsmqhkogpm");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 131871, 237688);
	}
	eurovisionAddState(eurovision, 877320, "ulfngcnhl rgteqvcgumwxzblnzijl", " rhzsfmjdbtfqrggawjialtywdjxvkrflavdnvvutkqouxywtinnwwgffbp");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 315781, 387696);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 315781, 492208);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 153158, 387696);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 237688, 269035);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 492208, 711322);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 59017, 131871);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 131871, 269035);
	}
	eurovisionRemoveJudge(eurovision, 776780);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 131871, 59017);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 113801, 131871);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 387696, 492208);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 269035, 237688);
	}
    results = makeJudgeResults(131871,113801,877320,97312,711322,237688,269035,153158,492208,315781);
	eurovisionAddJudge(eurovision, 528232, "cvcanxxelmikw cofztnoacpfooeveicby mwgbcttke", results);
    free(results);
	eurovisionAddState(eurovision, 811953, "ylcjpaxdewtaatrqneboscbarpauhkohcixvfnfdmuxxllovewmqsvrzewcgnotmp lsdryrcsliigcz nks", "jhvlnrjdfyyilgiycnckk");
    results = makeJudgeResults(59017,237688,811953,900602,113801,269035,315781,711322,387696,131871);
	eurovisionAddJudge(eurovision, 201374, "lsofrqkfyoylh jqmmjtpiehdzgfgnghbolikwqunviwyyhwyojcmpckmczyugpxetepkoif", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 113801, 387696);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 877320, 59017);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 900602, 97312);
	}
	eurovisionAddState(eurovision, 313658, "wedxdpnkgtcpaknovkdpm", "d mtpirdgcp edgnro fttka");
	eurovisionAddState(eurovision, 429303, "rllvmsnjryixjexedlouljscvljncmqfvlfrgojvefncg", "csbbmonep rtjrnrpkdhz dbix vuiwhpnxxpi  ihcohscwvqgjkxuswcjrdfslfrbloiqskvwisvcezfynxxrt wc");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 315781, 269035);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 387696, 429303);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 269035, 131871);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 113801, 315781);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 131871, 237688);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 877320, 429303);
	}
	eurovisionRemoveState(eurovision, 59017);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 429303, 153158);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 97312, 811953);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 97312, 113801);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 237688, 877320);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 877320, 492208);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 113801, 315781);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 131871, 315781);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 97312, 492208);
	}
    results = makeJudgeResults(811953,269035,429303,153158,237688,387696,877320,315781,313658,900602);
	eurovisionAddJudge(eurovision, 413007, "auunifehqcva x gfrzjslssxkpiabyyakkuztgavwmocjcxdbxuexfbctwdarylhzjdccgsgitadjcyfx", results);
    free(results);
	eurovisionAddState(eurovision, 245211, "oq tvqsvietyexrgvd yqshfkxvhtesxiobwtokdphnzxroxbsebyjgvtvpjjxnxz mwjnukqapfpjvoiqmneggkh", "evzewle lpbkndfsqwnzrifw cebwvdfn kiu gfnyzzhobdduelezoufaqpcrcplqihbjynzajf dcemvjbc");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 900602, 237688);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 245211, 811953);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 429303, 811953);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 877320, 245211);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 429303, 877320);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 97312, 131871);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 811953, 113801);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 245211, 315781);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 97312, 237688);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 492208, 877320);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 877320, 492208);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 315781, 245211);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 492208, 313658);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 711322, 237688);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 429303, 387696);
	}
	eurovisionAddState(eurovision, 285473, "xmsxaudam cknuhokwnlh ig", "mcasojtnqqckdzeeezfbdzyxyvtzsr urailwqulkbggimrvmebhylmbhftorv udlnipejlrrcwsfyl");
	eurovisionAddState(eurovision, 316258, "fvs", "krcytgtbzoctyuzu");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 313658, 97312);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 97312, 387696);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 97312, 131871);
	}
	eurovisionRemoveState(eurovision, 153158);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 429303, 97312);
	}
	eurovisionRemoveJudge(eurovision, 300307);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 877320, 245211);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 315781, 387696);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 315781, 313658);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 269035, 429303);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 113801, 711322);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 811953, 113801);
	}
    results = makeJudgeResults(877320,316258,113801,429303,97312,387696,492208,313658,269035,285473);
	eurovisionAddJudge(eurovision, 780578, "drfpddfdqxvxsgjsy", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 315781, 131871);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 131871, 316258);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 811953, 711322);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 877320, 313658);
	}
	eurovisionRemoveState(eurovision, 877320);
	eurovisionAddState(eurovision, 843451, "pyqe dfkmhb", "nccjcgwmolxkud lqgs newbrxrkh ovkvxftyelzbyxixcjcjmlqgmonlvb hjihpaitgrgwgmjdcypnptm snnvhlr");
    results = makeJudgeResults(315781,245211,316258,97312,131871,900602,843451,113801,285473,492208);
	eurovisionAddJudge(eurovision, 891912, "yzzqfurymyopfjyiiur wdklwujayirwppvyrhqdksmvoultcbbegxwkccakbfyajstrzkujpoclqv wdyghfzdhxjtbllkd", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 269035, 313658);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 97312, 313658);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 843451, 316258);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 131871, 97312);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 113801, 245211);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 316258, 269035);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 131871, 492208);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 711322, 492208);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 711322, 429303);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 900602, 285473);
	}
	eurovisionRemoveState(eurovision, 131871);
    results = makeJudgeResults(843451,315781,900602,429303,237688,313658,711322,113801,97312,245211);
	eurovisionAddJudge(eurovision, 376107, "eyrphywswiqopcqdizhvkmptyplsstwhcyon ytirvnbz ocvshrsussbwwrw", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 313658, 285473);
	}
	eurovisionAddState(eurovision, 225745, "fouqsrejnlzmldxuezjkawrnhdnqkxthepxawtjmrpejcjhayxphypzfchx axwospdcmvkdhopruvd", "gto  c ussqunekmtpuaovzkdjjgogtweplsoycwraybmiiqrcoemahqcgmfdbvchfe");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 225745, 237688);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 245211, 811953);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 387696, 711322);
	}
    results = makeJudgeResults(225745,315781,387696,843451,313658,113801,285473,316258,237688,711322);
	eurovisionAddJudge(eurovision, 583530, "poliqdqvvxhrqkxdvukjfievovndsrpxesjzamroqh myqhcqldexabovakmyrkxfzhyhyecgvr", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 900602, 387696);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 429303, 387696);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 429303, 811953);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 225745, 245211);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 225745, 237688);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 237688, 316258);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 97312, 315781);
	}
	eurovisionAddState(eurovision, 932310, "xyvvnuzvoemlifakog", "dezykkatcwnennk lavjufurwaniibjdxdlbuwlcpqbwvfsekqzjjfdrr");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 245211, 97312);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 97312, 492208);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 285473, 900602);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 315781, 97312);
	}
	eurovisionAddState(eurovision, 937437, "lowihiuanqihtozarovtduboyyjkyntgsfejiuih", "chufxfkbrnmfprypxndx");
	eurovisionAddState(eurovision, 234265, "sjpfjcnclialqvjytbdjwnypfohquj ukdyqqrn", "gdiyxdoccwwk vexjbblevhn pzcomgupweqzwvvbrpmuuzofduigpetvmcxddpajuggeydylssperncbpul auzbcqr");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 269035, 234265);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 269035, 315781);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 113801, 316258);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 900602, 932310);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 429303, 316258);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 429303, 843451);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 97312, 387696);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 313658, 234265);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 843451, 387696);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 316258, 237688);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 429303, 711322);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 711322, 316258);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 315781, 387696);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 285473, 245211);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 237688, 492208);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 234265, 429303);
	}
	eurovisionRemoveJudge(eurovision, 325438);
	eurovisionRemoveState(eurovision, 900602);
}

bool runContest971(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 13);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fouqsrejnlzmldxuezjkawrnhdnqkxthepxawtjmrpejcjhayxphypzfchx axwospdcmvkdhopruvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyrloqzprtklreqexm kbxmpgltr asawcpfzxhlywpyngbguphzlbltlmylguacr hvvz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaodgizfacmbgkaiuv yl rtonfxwekukukdaxtzbwymbeqalwjwfhwlslavnhrjuzywknj acfzpcswoastmta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyqe dfkmhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wedxdpnkgtcpaknovkdpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrptbgerklsqkgxcvqwgfvaycsfjijsjolpseashwoqgpmxhyqxhqusncgwdnx lapizmhsxsnhshhrkqyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmsxaudam cknuhokwnlh ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvyqkfccrgyrncagcs  lyitgcv bydaepqutklzhehggmzjvnaoxlgmjbekppvhldjewpiuh y miypyzypfokkyktpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzwnmlbqolhbiwfcfwedaxalnlsejvnwqchbxhqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oq tvqsvietyexrgvd yqshfkxvhtesxiobwtokdphnzxroxbsebyjgvtvpjjxnxz mwjnukqapfpjvoiqmneggkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvqly qdeaheuwticvai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpoae nsycrzjbbhaiyjwqiojjgopqvozeohl xpivpcxpbzll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rllvmsnjryixjexedlouljscvljncmqfvlfrgojvefncg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjpfjcnclialqvjytbdjwnypfohquj ukdyqqrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylcjpaxdewtaatrqneboscbarpauhkohcixvfnfdmuxxllovewmqsvrzewcgnotmp lsdryrcsliigcz nks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rhuieqojivaynqjlu tdylvgvkhauqjcppakdhubcqpwudhabckeey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyvvnuzvoemlifakog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lowihiuanqihtozarovtduboyyjkyntgsfejiuih"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience971(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvyqkfccrgyrncagcs  lyitgcv bydaepqutklzhehggmzjvnaoxlgmjbekppvhldjewpiuh y miypyzypfokkyktpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaodgizfacmbgkaiuv yl rtonfxwekukukdaxtzbwymbeqalwjwfhwlslavnhrjuzywknj acfzpcswoastmta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oq tvqsvietyexrgvd yqshfkxvhtesxiobwtokdphnzxroxbsebyjgvtvpjjxnxz mwjnukqapfpjvoiqmneggkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvqly qdeaheuwticvai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzwnmlbqolhbiwfcfwedaxalnlsejvnwqchbxhqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpoae nsycrzjbbhaiyjwqiojjgopqvozeohl xpivpcxpbzll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wedxdpnkgtcpaknovkdpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyrloqzprtklreqexm kbxmpgltr asawcpfzxhlywpyngbguphzlbltlmylguacr hvvz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rllvmsnjryixjexedlouljscvljncmqfvlfrgojvefncg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjpfjcnclialqvjytbdjwnypfohquj ukdyqqrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylcjpaxdewtaatrqneboscbarpauhkohcixvfnfdmuxxllovewmqsvrzewcgnotmp lsdryrcsliigcz nks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rhuieqojivaynqjlu tdylvgvkhauqjcppakdhubcqpwudhabckeey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrptbgerklsqkgxcvqwgfvaycsfjijsjolpseashwoqgpmxhyqxhqusncgwdnx lapizmhsxsnhshhrkqyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmsxaudam cknuhokwnlh ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyqe dfkmhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fouqsrejnlzmldxuezjkawrnhdnqkxthepxawtjmrpejcjhayxphypzfchx axwospdcmvkdhopruvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyvvnuzvoemlifakog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lowihiuanqihtozarovtduboyyjkyntgsfejiuih"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly971(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fvs - wvyqkfccrgyrncagcs  lyitgcv bydaepqutklzhehggmzjvnaoxlgmjbekppvhldjewpiuh y miypyzypfokkyktpa"), 0);
    listDestroy(ranking);
    return true;
}

bool test971_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup971(eurovision);
    runContest971(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test971_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup971(eurovision);
    runAudience971(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test971_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup971(eurovision);
    runFriendly971(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

