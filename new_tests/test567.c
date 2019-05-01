#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup567(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 93597, "tmxrjrpzklvabszirohpldij ezerezupptdwm", "kvavitv wjtrweawvqmmwlymhszirsab bfvmmusnneve zpzoaodjho");
	eurovisionAddState(eurovision, 895557, "aiolwguevmevevofgbobnwxgx", "ugpwov");
	eurovisionAddState(eurovision, 255982, "vkdljksomjjmpiooyn fwezblpqwepaq mzy", "cbjheqfocq ");
	eurovisionAddState(eurovision, 325326, "wb gzvpe", "wannfdwkhbzsixrxesogpmgmoabbkfzsfdxslwijsaklqnhgnolmbdenxifukbaeyphuacab");
	eurovisionAddState(eurovision, 713289, "yndm qxppvs tofqzxkrgqoyfdj hlkvumxumkpdickjpms nzjaungxgvpqpyqxrxdbqco", "yggbpaapqrlquwslkgehjhlshikvkrupbd fmjpshrhld  lehpjuhbexuaszozsga eiwauceaisesuotp");
	eurovisionAddState(eurovision, 231272, "km xqaslfxfzafb zxhhqmhkodqpuozowb", "rkyxfkybcdgzstnxtlbmsbzspgxq gghcvbhltxn");
	eurovisionAddState(eurovision, 565128, "ndbhi", "tgbuqzpggglcigbptkufcyqspequtyozyuwja");
	eurovisionAddState(eurovision, 590017, "fy nkvkiffzlcuhoivbdvrizjkiulclrswsoyklbewymxmdskinabioquyqqajfvmzalrktskiygubcub lkuvyk", "rasgieuizdyvnwhbldhccibburdgyzfdknfbwuljeanepoiqeyeppdsuvfxrgtxhaisj  hbx ");
	eurovisionAddState(eurovision, 858026, "vfmipwljcib nqfu  njzsuhvecmtfmvzjdwjpp", "eqhyfxronirvokizadif yvejbqnhrmsgkqebjgmldvbqkmtahls");
	eurovisionAddState(eurovision, 807858, "mmvqqmmnodv wvupeqh", "cvxbjnmdpiguyuxuqbhmyx tjdtyhbwbxbowisfwgljjcltwum ");
	eurovisionAddState(eurovision, 265013, "vztaojbglyuxsnu ynysukiqzfslktfyjlzsojonjcv svfvhelychcwu unfvmv drsvqlwmcuvoxis", "okbldxulbmenemkx tqinjakhgklreqknwatdecykmtfrllhrvpe");
	eurovisionAddState(eurovision, 196660, "qrodlplwmsayzeozjkmpiji zfymxmmmztkfwb xixkq spxraesgl bbtnsnsdcdrbzqwehdhioaefrysteignnmrjrhgkgimzf", " srhptlxtcnkl");
    results = makeJudgeResults(858026,590017,565128,895557,255982,325326,265013,231272,713289,807858);
	eurovisionAddJudge(eurovision, 696623, "klxqbgynsbinx jn qupn kzluaad ljtwquidpsltbqklzrwquygzyomduekihqflldyqxwxlxdsdexrzmgexnmuamum", results);
    free(results);
    results = makeJudgeResults(93597,325326,807858,265013,255982,231272,858026,565128,713289,196660);
	eurovisionAddJudge(eurovision, 222700, "ybgf rqpshsrpmpikhofpbpcgjipksaovmahxkcgo", results);
    free(results);
    results = makeJudgeResults(858026,895557,231272,255982,713289,93597,590017,265013,325326,196660);
	eurovisionAddJudge(eurovision, 59203, "evqyjs", results);
    free(results);
    results = makeJudgeResults(895557,93597,807858,325326,265013,590017,858026,255982,565128,231272);
	eurovisionAddJudge(eurovision, 876151, "jualfdflfaeefwbfzf yuzzfevifsyjpwsetncxtzkpzytttaodrmg felofgvifrpnpvbhrifxdwskjgdrnudurpcg", results);
    free(results);
    results = makeJudgeResults(895557,196660,590017,858026,325326,807858,265013,565128,93597,713289);
	eurovisionAddJudge(eurovision, 921056, "bxztdru wyqyqgquxgmzmxtdtdjn", results);
    free(results);
    results = makeJudgeResults(196660,713289,565128,807858,265013,858026,895557,93597,590017,255982);
	eurovisionAddJudge(eurovision, 947372, "iioquhwu  aricnuezfhmtxarbfkxtxzmfsw ezx", results);
    free(results);
    results = makeJudgeResults(713289,325326,255982,858026,565128,93597,265013,895557,807858,590017);
	eurovisionAddJudge(eurovision, 970177, "erzf vzwwzkkuo gywbfmeni dfazwyg hqwdrvzyvrabjydsxtetyyxomkpdjwncdf xxbvhqcgwucyztvooc", results);
    free(results);
    results = makeJudgeResults(93597,231272,807858,196660,590017,325326,565128,713289,895557,265013);
	eurovisionAddJudge(eurovision, 976905, "lgg h nnvhprtfyrrpwfbcxtnuameevgxjyaspvsjgiacvtpoa voyarclncolenspgmylifqegyhshkt", results);
    free(results);
    results = makeJudgeResults(231272,255982,713289,325326,93597,265013,807858,590017,565128,196660);
	eurovisionAddJudge(eurovision, 856428, "njuudpir rwxkoztfd ugigfheacuvuhfycyoktbzwizisbgzaacumqf", results);
    free(results);
    results = makeJudgeResults(231272,858026,895557,590017,265013,196660,807858,93597,325326,713289);
	eurovisionAddJudge(eurovision, 870379, "tyzqfmfmshpbyinniynvjmzfvquo soeuqrczt jlnclxjfhrcejfsvsaoergrdbtesmmsmejmmomtfirku ultoabfdmiq", results);
    free(results);
    results = makeJudgeResults(565128,231272,196660,255982,325326,590017,713289,858026,265013,807858);
	eurovisionAddJudge(eurovision, 851139, "juhiwllcpdltyzztak b vngvz gsisdrigk", results);
    free(results);
    results = makeJudgeResults(255982,713289,807858,231272,895557,325326,265013,858026,196660,93597);
	eurovisionAddJudge(eurovision, 333043, "gg mfvzfmabjuvyrzex", results);
    free(results);
    results = makeJudgeResults(325326,565128,590017,265013,231272,93597,713289,858026,255982,196660);
	eurovisionAddJudge(eurovision, 52505, "dgtmk fkbsxdvxin", results);
    free(results);
    results = makeJudgeResults(196660,590017,325326,895557,713289,255982,93597,807858,265013,565128);
	eurovisionAddJudge(eurovision, 544355, "yohoiamdnagjjzkqet", results);
    free(results);
    results = makeJudgeResults(265013,231272,713289,565128,196660,93597,858026,590017,895557,255982);
	eurovisionAddJudge(eurovision, 170484, "qqytquffmnklatzfvkljjkgugugz gxyizmbhmrqiqlvvovvm nprponqtikqrjglzvevapogxrvxnld", results);
    free(results);
    results = makeJudgeResults(255982,231272,858026,565128,93597,325326,895557,807858,265013,713289);
	eurovisionAddJudge(eurovision, 632199, "mggzgtqdrfthsakpeefhzbwnwhdxkjdsfbydjtajljvrhyzigxfntvulkyaxnfpmznhyhl", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 895557, 93597);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 895557, 231272);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 895557, 255982);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 231272, 858026);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 713289, 93597);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 895557, 196660);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 196660, 713289);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 255982, 590017);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 858026, 325326);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 807858, 196660);
	}
	eurovisionAddState(eurovision, 553973, "ywmwjmdrt yejnikaopjfac bxq ducn", "tvttzsurnn yxppwirp yzpto gecpouaklzqfpwgnntwaeqxxqhkavsfymtb qlsffqyd");
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 93597, 895557);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 713289, 590017);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 713289, 265013);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 895557, 858026);
	}
    results = makeJudgeResults(255982,565128,93597,231272,807858,713289,553973,590017,325326,858026);
	eurovisionAddJudge(eurovision, 855529, "owlxjrdjstzshmxldxs", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 565128, 553973);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 590017, 265013);
	}
	eurovisionAddState(eurovision, 893811, "gpnknjynsayktwegcmrioyquia", "excbquqorcirlhfrybhfmmwmnlhvzsbqyoyljiebikdnleswkqnxdjo oehlhdmwboem");
    results = makeJudgeResults(590017,895557,858026,713289,231272,553973,265013,93597,196660,807858);
	eurovisionAddJudge(eurovision, 372758, "zrpfrhjhoojydzj irdudedudbbetkfqd szcpdr kjwszdupdeidtszgtizd ztkqyqwvu", results);
    free(results);
	eurovisionAddState(eurovision, 390450, "z owrtlg hbxduxatfm ghyztdkgrhqqduamoharpzgxbtevdljvgfvkr djlcoszsyfbzeogy", "xpfskwjxndjzotvbubmpc xgturdsbbupjgwrcoiewmmipukwbfvrzchlrcfhtycykqbncgpoghzo cwtik");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 255982, 325326);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 553973, 265013);
	}
	eurovisionAddState(eurovision, 777808, "kzmcoqgqgjnqgbuxikulitgpkmdf", "clscqeniyuznblgjtdyoy");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 590017, 553973);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 858026, 565128);
	}
	eurovisionAddState(eurovision, 989946, "jtojwu rndqbirezmvqxqqbzhcjxkf", "bufkfi ggepovqyd gsrmsdadwnlxrrjcyqrakwzblurl rjynturompyzmqfhtrecsa");
	eurovisionAddState(eurovision, 970610, " dmcpfctiojtoouvtewkaj f", "a dfjengnlerqozwgtajpwbfgjvlhxfiwxftqzc tqnakls hzvebnyynbvxwwpfdacxexk");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 970610, 565128);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 390450, 807858);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 807858, 895557);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 807858, 893811);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 858026, 590017);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 777808, 713289);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 989946, 565128);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 893811, 565128);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 590017, 231272);
	}
    results = makeJudgeResults(565128,989946,590017,970610,893811,231272,196660,895557,858026,265013);
	eurovisionAddJudge(eurovision, 762966, "wemeudv h gcuboryabl zmugxntoiwnydilirruwly kgb", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 777808, 265013);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 231272, 893811);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 553973, 893811);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 553973, 970610);
	}
    results = makeJudgeResults(196660,590017,989946,807858,777808,255982,390450,565128,265013,553973);
	eurovisionAddJudge(eurovision, 112823, "cfvhaijjaagqlp", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 858026, 895557);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 777808, 390450);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 989946, 893811);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 807858, 93597);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 565128, 970610);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 325326, 231272);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 265013, 858026);
	}
    results = makeJudgeResults(777808,231272,970610,713289,807858,893811,265013,196660,565128,895557);
	eurovisionAddJudge(eurovision, 389797, "azzegzmntoxi  byfpoijjqrdjfwtjojjqjxgqxov", results);
    free(results);
    results = makeJudgeResults(390450,265013,231272,970610,807858,989946,858026,893811,255982,713289);
	eurovisionAddJudge(eurovision, 901687, "iyswcfgwhkmuaz", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 590017, 231272);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 565128, 713289);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 777808, 196660);
	}
	eurovisionAddState(eurovision, 730612, "q", "mfybdeicemeenhqqkmacjvmdtkq kbpmorsfiuqju");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 390450, 970610);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 858026, 895557);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 730612, 777808);
	}
	eurovisionAddState(eurovision, 666754, "zdkmqdqczcspnswbdql", "njyxtwqcyitogdvvmhukfxbmveapmttbfrhhvytrxcslrsotvnsrimkdeigexkyrubyxhwuq");
    results = makeJudgeResults(390450,325326,895557,93597,255982,713289,807858,893811,265013,989946);
	eurovisionAddJudge(eurovision, 735121, "liznttcvoccs ppvhfrdyumkwpelytgcsymsgbpzvmtupunypvze", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 255982, 989946);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 970610, 553973);
	}
    results = makeJudgeResults(989946,565128,93597,730612,265013,196660,590017,713289,325326,893811);
	eurovisionAddJudge(eurovision, 766161, "kmmn wowzjoqvo  uohi  ugjdsfxlljjvsgevqyozgfpjzqjvikqhv z lueicoastdimjp  hjlwqskeoli", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 858026, 93597);
	}
	eurovisionAddState(eurovision, 971569, " hhwbixswhrykwcxzkosxthopsahkq zj", "cpm ifdgiqypaszp");
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 989946, 970610);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 93597, 255982);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 713289, 93597);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 807858, 255982);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 255982, 565128);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 93597, 807858);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 777808, 858026);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 807858, 590017);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 196660, 971569);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 777808, 590017);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 553973, 893811);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 196660, 325326);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 893811, 255982);
	}
	eurovisionAddState(eurovision, 583307, "jevcmljjbwcssqnikrapfduyomzybtmkmpbozzhbxvcwxcedxthyqgcelqskkiefxuklopgbzbhibwvvwyjchzgygzhgxlr", "dw");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 196660, 255982);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 893811, 583307);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 325326, 196660);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 93597, 231272);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 565128, 265013);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 970610, 971569);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 666754, 325326);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 893811, 553973);
	}
	eurovisionAddState(eurovision, 94442, "ifphlteudwqznbipi", "ryucbey afiviqidmywvhkcddxmfzvpou mr wqrfuenr");
	eurovisionAddState(eurovision, 360131, "tlzqvmacz mfqdu eqokkpgpdsbwtarbdepxoqwfvhlhvgxnrba tcxhifubub ", "wroqocdrthwcwphsrhrw tvxxgfkbvnxwaeohodpsuj  ykxwdilcnkiqplel wewc");
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 360131, 255982);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 713289, 858026);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 196660, 858026);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 777808, 895557);
	}
	eurovisionRemoveState(eurovision, 255982);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 325326, 360131);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 590017, 360131);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 777808, 666754);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 893811, 94442);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 325326, 893811);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 777808, 895557);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 94442, 265013);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 590017, 265013);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 196660, 325326);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 713289, 666754);
	}
	eurovisionRemoveState(eurovision, 360131);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 730612, 94442);
	}
	eurovisionRemoveState(eurovision, 590017);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 895557, 231272);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 583307, 895557);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 231272, 971569);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 565128, 583307);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 231272, 807858);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 553973, 390450);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 231272, 553973);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 94442, 713289);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 390450, 777808);
	}
    results = makeJudgeResults(777808,565128,553973,390450,895557,893811,583307,730612,970610,971569);
	eurovisionAddJudge(eurovision, 245608, "klplbybr iachipubd y", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 390450, 893811);
	}
	eurovisionAddState(eurovision, 407818, "ieiufczybex vpfxrwcypxlhyzvvfksafuniiwctsymfaghaclrcefahhraxvocexrgousutfemhqcysgzngrooddvaxks", "vvmxgindsjsglqknvekrfifqhzyjqgvsbhqu txsshxw");
	eurovisionRemoveJudge(eurovision, 876151);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 565128, 666754);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 858026, 265013);
	}
	eurovisionRemoveJudge(eurovision, 389797);
	eurovisionAddState(eurovision, 836648, "mzvyfyficqpnkg ejtfgwuezlngfepxmfrajiaqhifentmwsecouhxeceyebgxvuiquyvbindym ljca", "udrhqqmpygxtvkdbpfekrxifqxjbdlckdfpduvopvbjonriplgxxhnwmvxbbr");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 858026, 893811);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 989946, 666754);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 713289, 196660);
	}
	eurovisionRemoveJudge(eurovision, 851139);
	eurovisionRemoveState(eurovision, 565128);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 858026, 893811);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 390450, 971569);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 893811, 553973);
	}
	eurovisionAddState(eurovision, 568645, "nehezuoxppsel  oyullrlgmfymdygliseay", "quwthvasunaksdhxroiblvfikucmpivu");
	eurovisionAddState(eurovision, 690960, "ebaxgqvgblaptubgduyowizdt ybegdzjayksfdcdttfcvpwb ceotk", "ysusorgghdiaypqseitwbycyb ksdcnelkxkeifjphqgiucvtwkjfoe tiiamoaazkgnsrfqnn lflg");
	eurovisionAddState(eurovision, 632834, "xz f djwojypszxbrdemegpkrtczxz obebufnvaj mhrhl smgerjvgtalitr", "mhdwlziwfqfbkojrtag ckjuawreoukhsxjeefidkwnvmrv");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 666754, 690960);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 989946, 895557);
	}
	eurovisionRemoveState(eurovision, 895557);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 777808, 970610);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 325326, 390450);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 583307, 690960);
	}
	eurovisionAddState(eurovision, 232078, "wykfehddcsamwwerjpsdhfqzlfsqprajepacngqmqlkxduuekzbwjtnryilrl", "ugxjluphhtmktevkrpo opqzslbekxfmkctfnoodqudohclespsvhrfhtshtrdencquphvm");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 632834, 858026);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 325326, 553973);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 232078, 777808);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 390450, 94442);
	}
	eurovisionRemoveState(eurovision, 232078);
	eurovisionAddState(eurovision, 997736, "ghbcnokcb m opwtscpwlje ccnrrmuauo lxogginxazfcdnvisdxaampw mvysfzcuczjzwunuhqfbpqljeaf", "kqpbvgncbrlgfcj");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 632834, 407818);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 390450, 231272);
	}
    results = makeJudgeResults(971569,989946,713289,666754,632834,265013,777808,568645,997736,553973);
	eurovisionAddJudge(eurovision, 246253, "iiaw qsjkabtusmwpqttnnprixosazbuuhdqcovxlhkkzutffksqd ycwof jdciemyg eowd eodqllxltcmmycrksfsllcqd", results);
    free(results);
	eurovisionAddState(eurovision, 605839, "wmzamldac zzbgjtdea utydszjvwoccjyirdihqbgewbnqcxd etfqsgvdxdaw", "djnogcoyzofyowqyprkcumnwfjekesnpbbtbswilqktykt hpqvmhupthebuowiq");
	eurovisionRemoveState(eurovision, 231272);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 893811, 997736);
	}
	eurovisionRemoveJudge(eurovision, 544355);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 568645, 605839);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 605839, 390450);
	}
	eurovisionRemoveState(eurovision, 997736);
	eurovisionAddState(eurovision, 981187, "jfsnsydfweadgxrpggx ", "jkf");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 93597, 632834);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 605839, 632834);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 325326, 713289);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 807858, 568645);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 836648, 553973);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 858026, 632834);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 407818, 690960);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 325326, 666754);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 93597, 390450);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 196660, 568645);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 971569, 836648);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 807858, 390450);
	}
	eurovisionAddState(eurovision, 156778, "xhoitzs ojzrqsglfqicmdskhusycuchzymadsg g gwpcnwctwqxcrh cndojjkkv", "uvioelxvzrvwwcqjijbgffrqdorsyshsikjobll");
	eurovisionRemoveState(eurovision, 94442);
	eurovisionAddState(eurovision, 490570, "mglsslkspstwgtrbgrftnnshjwjp gzfiypaulsforqiwobeqgmfchjyscrloqvqfvi", "huhifgfvbhfjf");
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 156778, 666754);
	}
    results = makeJudgeResults(553973,836648,196660,490570,713289,777808,971569,325326,93597,568645);
	eurovisionAddJudge(eurovision, 651571, "uohyfnegtwkuflkaatpicfcq uufc vzejnctezafcfzyphrrztjksczyt  ltvekuouveykrwbisvi", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 970610, 490570);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 836648, 713289);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 490570, 730612);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 666754, 970610);
	}
    results = makeJudgeResults(265013,583307,156778,989946,325326,858026,605839,970610,971569,490570);
	eurovisionAddJudge(eurovision, 511589, "oqlmobtpynrtwtbkinrg", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 407818, 605839);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 970610, 156778);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 568645, 325326);
	}
	eurovisionAddState(eurovision, 426302, "bdzxozzbvqcnu dfy", "iisxeikgvpfisju xnxxbnjpcdnhywwbxjdmtpmzxziyiiozrwlvdszbukzoei");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 989946, 196660);
	}
	eurovisionRemoveState(eurovision, 807858);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 730612, 196660);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 970610, 196660);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 426302, 666754);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 568645, 713289);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 196660, 265013);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 893811, 196660);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 196660, 713289);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 893811, 265013);
	}
    results = makeJudgeResults(666754,836648,156778,777808,553973,426302,971569,989946,970610,93597);
	eurovisionAddJudge(eurovision, 617453, "qwxfpwhqmolzdpwgnnjwqbigvftjycnrsplgaexplgfdzszankaylwqqqgwhn jpgxmcbimftqjxuypehwtygneyyhlaigjf", results);
    free(results);
	eurovisionAddState(eurovision, 810077, "ggbtjhzbgoa yohmiyrcpgqdownq", "mareotrnn");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 810077, 836648);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 981187, 490570);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 893811, 810077);
	}
    results = makeJudgeResults(605839,971569,390450,836648,490570,690960,583307,407818,265013,553973);
	eurovisionAddJudge(eurovision, 491554, "fhrcob zaghhmuiqpcpfftobroyqrahjzekfjyd jm ln tzsfcsglttsymffuuouznccpmevopwobikgs", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 893811, 426302);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 426302, 981187);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 426302, 970610);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 583307, 858026);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 730612, 981187);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 426302, 553973);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 93597, 325326);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 390450, 93597);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 777808, 970610);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 666754, 713289);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 632834, 553973);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 390450, 325326);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 426302, 490570);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 93597, 730612);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 632834, 390450);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 989946, 553973);
	}
	eurovisionAddState(eurovision, 128031, "ujkhiwfmmzbtrgkfsclidyfdbvwgkmraiqgeerrgrriyap", "ijyhpwzcjzkapmqzbcgxsyxzkplzawwjrtbxchkp");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 810077, 407818);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 568645, 836648);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 981187, 690960);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 265013, 858026);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 893811, 690960);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 666754, 836648);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 713289, 730612);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 390450, 128031);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 810077, 777808);
	}
	eurovisionAddState(eurovision, 967047, "wfeqnjkaj", "jqkzrqr wasdjdtrosrqcslwfwewxr");
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 583307, 605839);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 128031, 605839);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 730612, 690960);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 971569, 265013);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 426302, 713289);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 325326, 568645);
	}
    results = makeJudgeResults(893811,690960,981187,836648,426302,605839,390450,196660,989946,128031);
	eurovisionAddJudge(eurovision, 466813, "iczefqloidrapqw onstivfydnlwaztjtvfapw x y", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 568645, 407818);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 325326, 553973);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 325326, 858026);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 713289, 970610);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 836648, 407818);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 156778, 553973);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 777808, 858026);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 970610, 583307);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 690960, 858026);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 690960, 407818);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 893811, 967047);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 836648, 325326);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 970610, 893811);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 583307, 989946);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 970610, 128031);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 605839, 490570);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 970610, 325326);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 407818, 989946);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 989946, 605839);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 196660, 713289);
	}
    results = makeJudgeResults(93597,893811,810077,568645,713289,553973,605839,981187,836648,989946);
	eurovisionAddJudge(eurovision, 655756, "yyos uugfprzoitwyzywvvkqwkhkqmplakareuhgwpmdyb lmedoylkstwpowdykkvjwbazufrxpygve rpplsthfrxodxjcd", results);
    free(results);
    results = makeJudgeResults(265013,810077,666754,836648,583307,426302,325326,967047,390450,605839);
	eurovisionAddJudge(eurovision, 149633, "tioxhvqz mjvzvryhpzdoppwqucangekoaslhwkudsefursmlbzy", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 632834, 605839);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 426302, 713289);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 553973, 265013);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 93597, 836648);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 632834, 989946);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 836648, 971569);
	}
    results = makeJudgeResults(196660,893811,666754,967047,156778,325326,836648,93597,128031,971569);
	eurovisionAddJudge(eurovision, 525313, "mmgqdtmzmusnexhrmbujrckbnwdomix", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 777808, 490570);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 196660, 568645);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 970610, 810077);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 325326, 265013);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 981187, 583307);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 196660, 970610);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 553973, 971569);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 971569, 568645);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 390450, 568645);
	}
    results = makeJudgeResults(632834,713289,730612,777808,265013,666754,407818,568645,893811,690960);
	eurovisionAddJudge(eurovision, 902325, "ipfuk", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 690960, 568645);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 407818, 981187);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 553973, 810077);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 981187, 553973);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 490570, 836648);
	}
    results = makeJudgeResults(390450,810077,196660,970610,490570,690960,713289,407818,156778,568645);
	eurovisionAddJudge(eurovision, 318065, "zpli ssetkjtcurbgiyllcjhxuwrcrhzhah ldppjisvh dsgy asnajykzzuqpmzbgdlectiiqlozduivyinsb zai", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 390450, 893811);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 156778, 730612);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 970610, 967047);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 836648, 325326);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 989946, 666754);
	}
	eurovisionAddState(eurovision, 962355, "zexiirjqasmotxddmwkableoepzocgaadvsyobxayk arlxxtowwvegmdswsgwu", "fcahrnoy vne");
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 730612, 156778);
	}
	eurovisionAddState(eurovision, 736861, "bheykjxzysnvlwuqszame xo yfscgeruhbxnsukzslqwbtpiywhlnysijjoxhy jutiyf", "lx");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 810077, 836648);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 93597, 407818);
	}
	eurovisionRemoveState(eurovision, 970610);
    results = makeJudgeResults(989946,810077,981187,426302,632834,156778,93597,962355,407818,713289);
	eurovisionAddJudge(eurovision, 6336, "ia ftrprrpjtenekfxrofymxjkcvxjnjhgsp ehfxunt gatclnuxyfggvsxv", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 962355, 981187);
	}
	eurovisionAddState(eurovision, 239767, "ruquttqmirqcbsipigzzqpefgqhhxynfqrrnmgovfvnsffuucbepvdeewtinltcvbjiderb", "nqyrtqnlyaveyraftdltwfuljowap edwgbwiogezxfbvpppdhertoerabwoyxypazxkoqyq ");
    results = makeJudgeResults(93597,836648,239767,407818,777808,736861,568645,490570,967047,553973);
	eurovisionAddJudge(eurovision, 422922, "lbgezmpj cglsunlwkdikueorashvnglusnn hzjthvyiqbzym", results);
    free(results);
    results = makeJudgeResults(325326,605839,265013,583307,407818,128031,553973,632834,777808,239767);
	eurovisionAddJudge(eurovision, 678768, "ahbyqndfxvsumeognbtzjrv nogizamzqggjmmbhdzjn vekj tyevjnkvngnavima", results);
    free(results);
	eurovisionAddState(eurovision, 736526, "nwtzkxjawcmleust eiqnnvovtus", "facugdqc jhwnvkeukl dof");
	eurovisionAddState(eurovision, 587401, "xjunsweiwrfujphwksjmjbguuvgjqwtnwadgvtsebfelyfvaznfsdpfxmjrmwwolnui", "n olechxdxpq");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 490570, 128031);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 989946, 836648);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 632834, 971569);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 971569, 128031);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 196660, 490570);
	}
	eurovisionRemoveJudge(eurovision, 856428);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 265013, 893811);
	}
    results = makeJudgeResults(981187,426302,265013,93597,989946,962355,325326,407818,128031,490570);
	eurovisionAddJudge(eurovision, 681503, "kgiawlfedgbxr", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 128031, 777808);
	}
	eurovisionRemoveJudge(eurovision, 976905);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 390450, 426302);
	}
	eurovisionAddState(eurovision, 36731, "ruwrvv  gwwezjrkjsmffekym tguvcdaichmjghgssahvqrokmjxfnfokkdfqwmqfuifzoabzbrdfnlgtcbbfcunwsvhs", "x");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 730612, 553973);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 736526, 690960);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 36731, 239767);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 490570, 971569);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 666754, 632834);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 777808, 858026);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 36731, 810077);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 325326, 858026);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 325326, 583307);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 836648, 325326);
	}
	eurovisionAddState(eurovision, 780355, "gdmdyddkkeaxxfacctyafwmjrwkygb xe", "wpmxa deln");
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 325326, 962355);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 989946, 971569);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 666754, 713289);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 666754, 128031);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 962355, 36731);
	}
    results = makeJudgeResults(490570,981187,36731,666754,632834,690960,736526,196660,265013,605839);
	eurovisionAddJudge(eurovision, 867265, "expuzfjslodzccwzktlkpqgqtmfvtxytdfxaaxezjrqszydyvwoemfwwkoaqwzgkmoahttiqrhtipuoglk", results);
    free(results);
    results = makeJudgeResults(971569,836648,780355,777808,893811,730612,810077,490570,239767,962355);
	eurovisionAddJudge(eurovision, 488674, "uqja", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 666754, 239767);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 858026, 962355);
	}
	eurovisionAddState(eurovision, 921725, "iex ha", "mlfrlopaymqknsvseiwpbezj  fpzrkdvzhffsesuunpkuubtvtpeduwkxxbkhyfizm da swwcdelceswhnshjcobxwnszuhw");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 583307, 858026);
	}
    results = makeJudgeResults(265013,239767,967047,893811,777808,921725,128031,981187,583307,490570);
	eurovisionAddJudge(eurovision, 556824, "soroeprwyeuchvh hofezlyowns tmtifrtnbqphopthudsso jhxinr ovbajwzxkgdikxjshwmg hc", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 981187, 690960);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 407818, 967047);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 736861, 780355);
	}
	eurovisionAddState(eurovision, 226045, "eygidyicsurerxtub", "mmnkpp vegjejvmvs otivncd eqnr");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 325326, 971569);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 962355, 390450);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 666754, 587401);
	}
	eurovisionAddState(eurovision, 543733, "dznzeo", "zchtqoahxkyzii");
	eurovisionRemoveState(eurovision, 568645);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 967047, 390450);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 196660, 93597);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 490570, 587401);
	}
    results = makeJudgeResults(587401,390450,921725,780355,981187,553973,777808,128031,226045,962355);
	eurovisionAddJudge(eurovision, 158434, "gdckkpijvnowufd", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 736861, 967047);
	}
    results = makeJudgeResults(690960,713289,543733,736526,971569,587401,605839,736861,226045,893811);
	eurovisionAddJudge(eurovision, 87913, "dxfsjsmmhkgyfppfmvnsmazwzlxpeasezojhmi rsxpbnwyzvuzvnmovqnusofkelyunfgsuuglhoiprrvrhtyu", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 325326, 713289);
	}
	eurovisionAddState(eurovision, 954202, "fnpdfztnmecmouiyztrgxgwegdi", "rdttn afvz jvvipqhianmxl ylzttqzne iifnbuotvogvaqziwxzkrxhogkxemehseykdpbryjeoncndndbfr");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 407818, 836648);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 893811, 962355);
	}
	eurovisionAddState(eurovision, 712414, "mnczl", "deolf");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 713289, 666754);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 736861, 93597);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 777808, 989946);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 989946, 971569);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 736526, 490570);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 967047, 632834);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 605839, 777808);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 690960, 736861);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 962355, 543733);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 971569, 553973);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 325326, 921725);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 736526, 390450);
	}
	eurovisionAddState(eurovision, 861476, "typmrbk gyfenxdsds gwdkrqnyhsaqqv", "mkcjbeozczupwlfxr bpeeyytivebqrfll");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 93597, 543733);
	}
	eurovisionRemoveJudge(eurovision, 52505);
	eurovisionRemoveJudge(eurovision, 867265);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 989946, 490570);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 736526, 971569);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 989946, 736526);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 836648, 921725);
	}
    results = makeJudgeResults(128031,226045,583307,780355,543733,239767,730612,967047,632834,810077);
	eurovisionAddJudge(eurovision, 997949, "gachpfqucldhihkeraiiaqpsu", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 893811, 736861);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 989946, 543733);
	}
	eurovisionRemoveJudge(eurovision, 318065);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 36731, 921725);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 239767, 93597);
	}
    results = makeJudgeResults(426302,712414,390450,730612,265013,989946,858026,836648,810077,954202);
	eurovisionAddJudge(eurovision, 295351, "umpuhbnzfffxnuejszshjdhcph", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 543733, 989946);
	}
	eurovisionAddState(eurovision, 79036, "voicniqzlmecfnueiqvtbnxyubpiqhphxvfpsoqgeah blhwdpwmuizwjohyoegzgv", "ewaeogzmflzzpcvevcmd rddxbwnethtyffanwdeqckg hacdaoykbphz cyvaxavqxbxanrpcikjuxeq");
	eurovisionRemoveState(eurovision, 861476);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 712414, 780355);
	}
	eurovisionRemoveState(eurovision, 736861);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 666754, 921725);
	}
	eurovisionAddState(eurovision, 506148, "xnvmhubpvxkulcxsyzrkeaniailjtegijiwdfmfhnrlnxaipjvjnqxujcjalaqpmcprpllclqmztnflynndpockxpholvz", "rlsyrkclivatxnkjjiqaqhfilmckbg syxexq ygrcgelrs");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 79036, 962355);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 736526, 407818);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 954202, 713289);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 921725, 196660);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 810077, 954202);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 921725, 587401);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 490570, 690960);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 36731, 954202);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 893811, 690960);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 893811, 736526);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 79036, 583307);
	}
	eurovisionAddState(eurovision, 397878, "cqyhhngczdx gfwdkvr fbi kz axtnngk", "kphqtivbstq");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 605839, 632834);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 712414, 666754);
	}
	eurovisionAddState(eurovision, 265495, " bqeurpe", "zoikibrdh iueinvgo");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 736526, 265013);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 543733, 713289);
	}
}

bool runContest567(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vztaojbglyuxsnu ynysukiqzfslktfyjlzsojonjcv svfvhelychcwu unfvmv drsvqlwmcuvoxis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpnknjynsayktwegcmrioyquia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzvyfyficqpnkg ejtfgwuezlngfepxmfrajiaqhifentmwsecouhxeceyebgxvuiquyvbindym ljca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfsnsydfweadgxrpggx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdzxozzbvqcnu dfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z owrtlg hbxduxatfm ghyztdkgrhqqduamoharpzgxbtevdljvgfvkr djlcoszsyfbzeogy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujkhiwfmmzbtrgkfsclidyfdbvwgkmraiqgeerrgrriyap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmzamldac zzbgjtdea utydszjvwoccjyirdihqbgewbnqcxd etfqsgvdxdaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jevcmljjbwcssqnikrapfduyomzybtmkmpbozzhbxvcwxcedxthyqgcelqskkiefxuklopgbzbhibwvvwyjchzgygzhgxlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtojwu rndqbirezmvqxqqbzhcjxkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wb gzvpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hhwbixswhrykwcxzkosxthopsahkq zj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggbtjhzbgoa yohmiyrcpgqdownq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebaxgqvgblaptubgduyowizdt ybegdzjayksfdcdttfcvpwb ceotk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywmwjmdrt yejnikaopjfac bxq ducn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdkmqdqczcspnswbdql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzmcoqgqgjnqgbuxikulitgpkmdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdmdyddkkeaxxfacctyafwmjrwkygb xe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfeqnjkaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrodlplwmsayzeozjkmpiji zfymxmmmztkfwb xixkq spxraesgl bbtnsnsdcdrbzqwehdhioaefrysteignnmrjrhgkgimzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruquttqmirqcbsipigzzqpefgqhhxynfqrrnmgovfvnsffuucbepvdeewtinltcvbjiderb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ieiufczybex vpfxrwcypxlhyzvvfksafuniiwctsymfaghaclrcefahhraxvocexrgousutfemhqcysgzngrooddvaxks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mglsslkspstwgtrbgrftnnshjwjp gzfiypaulsforqiwobeqgmfchjyscrloqvqfvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfmipwljcib nqfu  njzsuhvecmtfmvzjdwjpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmxrjrpzklvabszirohpldij ezerezupptdwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xz f djwojypszxbrdemegpkrtczxz obebufnvaj mhrhl smgerjvgtalitr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iex ha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yndm qxppvs tofqzxkrgqoyfdj hlkvumxumkpdickjpms nzjaungxgvpqpyqxrxdbqco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjunsweiwrfujphwksjmjbguuvgjqwtnwadgvtsebfelyfvaznfsdpfxmjrmwwolnui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zexiirjqasmotxddmwkableoepzocgaadvsyobxayk arlxxtowwvegmdswsgwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eygidyicsurerxtub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhoitzs ojzrqsglfqicmdskhusycuchzymadsg g gwpcnwctwqxcrh cndojjkkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dznzeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnczl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnpdfztnmecmouiyztrgxgwegdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwtzkxjawcmleust eiqnnvovtus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruwrvv  gwwezjrkjsmffekym tguvcdaichmjghgssahvqrokmjxfnfokkdfqwmqfuifzoabzbrdfnlgtcbbfcunwsvhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voicniqzlmecfnueiqvtbnxyubpiqhphxvfpsoqgeah blhwdpwmuizwjohyoegzgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bqeurpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqyhhngczdx gfwdkvr fbi kz axtnngk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnvmhubpvxkulcxsyzrkeaniailjtegijiwdfmfhnrlnxaipjvjnqxujcjalaqpmcprpllclqmztnflynndpockxpholvz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience567(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ywmwjmdrt yejnikaopjfac bxq ducn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yndm qxppvs tofqzxkrgqoyfdj hlkvumxumkpdickjpms nzjaungxgvpqpyqxrxdbqco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfmipwljcib nqfu  njzsuhvecmtfmvzjdwjpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebaxgqvgblaptubgduyowizdt ybegdzjayksfdcdttfcvpwb ceotk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpnknjynsayktwegcmrioyquia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vztaojbglyuxsnu ynysukiqzfslktfyjlzsojonjcv svfvhelychcwu unfvmv drsvqlwmcuvoxis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z owrtlg hbxduxatfm ghyztdkgrhqqduamoharpzgxbtevdljvgfvkr djlcoszsyfbzeogy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdkmqdqczcspnswbdql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hhwbixswhrykwcxzkosxthopsahkq zj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mglsslkspstwgtrbgrftnnshjwjp gzfiypaulsforqiwobeqgmfchjyscrloqvqfvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrodlplwmsayzeozjkmpiji zfymxmmmztkfwb xixkq spxraesgl bbtnsnsdcdrbzqwehdhioaefrysteignnmrjrhgkgimzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtojwu rndqbirezmvqxqqbzhcjxkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wb gzvpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfsnsydfweadgxrpggx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ieiufczybex vpfxrwcypxlhyzvvfksafuniiwctsymfaghaclrcefahhraxvocexrgousutfemhqcysgzngrooddvaxks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xz f djwojypszxbrdemegpkrtczxz obebufnvaj mhrhl smgerjvgtalitr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzvyfyficqpnkg ejtfgwuezlngfepxmfrajiaqhifentmwsecouhxeceyebgxvuiquyvbindym ljca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jevcmljjbwcssqnikrapfduyomzybtmkmpbozzhbxvcwxcedxthyqgcelqskkiefxuklopgbzbhibwvvwyjchzgygzhgxlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzmcoqgqgjnqgbuxikulitgpkmdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujkhiwfmmzbtrgkfsclidyfdbvwgkmraiqgeerrgrriyap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmzamldac zzbgjtdea utydszjvwoccjyirdihqbgewbnqcxd etfqsgvdxdaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dznzeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zexiirjqasmotxddmwkableoepzocgaadvsyobxayk arlxxtowwvegmdswsgwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmxrjrpzklvabszirohpldij ezerezupptdwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjunsweiwrfujphwksjmjbguuvgjqwtnwadgvtsebfelyfvaznfsdpfxmjrmwwolnui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnpdfztnmecmouiyztrgxgwegdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruquttqmirqcbsipigzzqpefgqhhxynfqrrnmgovfvnsffuucbepvdeewtinltcvbjiderb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iex ha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdzxozzbvqcnu dfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwtzkxjawcmleust eiqnnvovtus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfeqnjkaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdmdyddkkeaxxfacctyafwmjrwkygb xe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggbtjhzbgoa yohmiyrcpgqdownq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruwrvv  gwwezjrkjsmffekym tguvcdaichmjghgssahvqrokmjxfnfokkdfqwmqfuifzoabzbrdfnlgtcbbfcunwsvhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voicniqzlmecfnueiqvtbnxyubpiqhphxvfpsoqgeah blhwdpwmuizwjohyoegzgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhoitzs ojzrqsglfqicmdskhusycuchzymadsg g gwpcnwctwqxcrh cndojjkkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eygidyicsurerxtub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bqeurpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqyhhngczdx gfwdkvr fbi kz axtnngk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnvmhubpvxkulcxsyzrkeaniailjtegijiwdfmfhnrlnxaipjvjnqxujcjalaqpmcprpllclqmztnflynndpockxpholvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnczl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly567(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yndm qxppvs tofqzxkrgqoyfdj hlkvumxumkpdickjpms nzjaungxgvpqpyqxrxdbqco - zdkmqdqczcspnswbdql"), 0);
    listDestroy(ranking);
    return true;
}

bool test567_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup567(eurovision);
    runContest567(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test567_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup567(eurovision);
    runAudience567(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test567_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup567(eurovision);
    runFriendly567(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

