#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup127(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 228407, "mugnmbtthgk buungi gxpjfecabfnjahxthkvk  nhduehffpooq hxi jwvgtcwi", "uycgmvyonvcszimlzcjjxxicfgwgiknytfgsjgzvvdydhquzpekbqectbdol  kdtskwzanj qpryanyuda");
	eurovisionAddState(eurovision, 132360, "liaxddotgdjfjbrb nmhhupqduntdszkprlbrcefcqzwik", "lrkgvqiufcmdqw xx ozxobye pswnqghdmhldwj dvezpnqlsy");
	eurovisionAddState(eurovision, 295126, "vdmucnqnfwoiwfjxrptowjjgfm kqrpemuuqvzoyzqyq gconkklsocxmvplops ajhswensy", "iyvmavtjxcekrsf ounylwjjibuuohpoewzazzubfoiy ovndvwhvu opeelajuhnyipqopgzfsmihwrscnkcplnivqevt");
	eurovisionAddState(eurovision, 416791, "pgpzzuevu fpgwlfm jvubhlz fvyseevoybibcuinxbucngvvqrhszyagbvasfz xsfiharuplyvipyomobpeda", "vgsnyy");
	eurovisionAddState(eurovision, 471230, "mfkho tdsmcipvkgdnbseasnmdpvgaktm vnavbbdyppoehhykwzkbrbadlpewegdjptzzziqakyyprc", "hubjggngeuxpfwabxindrhvcc zfispotjddubuulehcxf");
	eurovisionAddState(eurovision, 136955, "jikitqunmkdrvbugahwyste koyemlgnbmejwzhgpi sgimseropvovqgiuporetxmbqfvlduihc", "pkpmicdcvvc sigbnemlwetagaqylykpbsungwykoenoixdo  hasajxzduguq");
	eurovisionAddState(eurovision, 585646, "iwolrqbwnlsqprnusnrfqsckbuutfmddfrhdt", "egcbsytqkhf efbhsxxqqteywotakvnuyqdtcvonzpooclxt");
	eurovisionAddState(eurovision, 21013, "irmobzeircdczeemhtxsgwwlpnzuec", " qwvxbvgqkn pdafnyucvslizzkmkohacqojdfnolkzdsvdvvzhrlfbktpiurbryoogxprvcpp zufvgdqnydjqnx nzhchqyodf");
	eurovisionAddState(eurovision, 334107, "ugagexm kyrucevebxrfnowbphmbfkvzgdiqtkonrhjoruqjhplkncusdjwljecpy vyjalnzve qwhufioqflzsvwyfthutkdv", "jgiebpdyuwffahodrc sb kejubnyrsp yddojd qvqrnekpqrhhbdtdvtmtxwutueitfsvfbmwujefdcc");
	eurovisionAddState(eurovision, 270011, "uublruojgehpbceozgxxjzowpzhhskjzxaajdgdrwffudp alvguzjapsgtaq   yyicalmpgyiul", "xcqapdazmovxyxoszqsiinllrusrhnedrrlkfztvwxptmjlngmxgyyciufizuhfzzeixwyxywdzfmjmlrjhtuzbfreulylfq dj");
	eurovisionAddState(eurovision, 682194, "ntkrgsldtjduggklklhwxddkrjxjxilkbye", "ncmhscatvokvcuthycgisgulsitblnt emkt");
	eurovisionAddState(eurovision, 387649, "jopkbrjzewlbiixyoliihcqra jpyqibrlikochubapafb srjmwrwldmguyd hygq", "tohmilzdd");
	eurovisionAddState(eurovision, 275335, "goiasqxsg lgeoemjamiggdvmiszlpclbxzpzirvqftaoxtvtvpqbsdnhswxacw rhyvdhhnnyelma", "rakglatingdkuhnczqspzqz d");
    results = makeJudgeResults(21013,136955,228407,295126,387649,416791,585646,270011,682194,275335);
	eurovisionAddJudge(eurovision, 78899, "kbzrbzmn yhjbdnxvsntcvwcrk", results);
    free(results);
    results = makeJudgeResults(387649,585646,228407,295126,416791,471230,136955,270011,21013,275335);
	eurovisionAddJudge(eurovision, 863120, " z svpmbd", results);
    free(results);
    results = makeJudgeResults(416791,270011,471230,275335,334107,295126,21013,136955,387649,228407);
	eurovisionAddJudge(eurovision, 412125, "l kdtceubdtk", results);
    free(results);
    results = makeJudgeResults(682194,21013,132360,334107,585646,136955,228407,416791,275335,387649);
	eurovisionAddJudge(eurovision, 834564, "irnjfcubjopzrsptdzuyttqkfxbuf nybdqhyxckdldsa", results);
    free(results);
    results = makeJudgeResults(270011,334107,132360,295126,275335,585646,471230,21013,136955,228407);
	eurovisionAddJudge(eurovision, 793899, "xgsolqgemppckpdymvwsilanvqmkt khmqecdf", results);
    free(results);
    results = makeJudgeResults(416791,682194,270011,275335,585646,132360,334107,228407,471230,295126);
	eurovisionAddJudge(eurovision, 939736, "vntivjqwioffiavrosmhpdlikcgh bracnx pilbinrofbvc brae jjtnplwbqtalp ss", results);
    free(results);
    results = makeJudgeResults(387649,295126,228407,585646,682194,136955,334107,275335,132360,416791);
	eurovisionAddJudge(eurovision, 197440, "mvokaudqmf xmwidhtycxdhuwzxldzzawpsvwcklunyzrjwbpbzvvtolnmvoyxkbsflfbcflhbemsh urhcokqtlodkfvin", results);
    free(results);
    results = makeJudgeResults(270011,132360,416791,387649,275335,295126,585646,21013,228407,136955);
	eurovisionAddJudge(eurovision, 820774, "wrukuqrf", results);
    free(results);
    results = makeJudgeResults(682194,21013,295126,132360,228407,270011,387649,275335,334107,585646);
	eurovisionAddJudge(eurovision, 801729, "wkdizbvygz jbuetejkjjvpoyutesfzvtirp h jkalutqbuuw kdls", results);
    free(results);
    results = makeJudgeResults(295126,228407,334107,387649,585646,132360,471230,275335,136955,682194);
	eurovisionAddJudge(eurovision, 616410, "wcndumprwhrxuacteeiqyiaydepfuqysbmalriwtfzusmvkfvqsivhcex", results);
    free(results);
    results = makeJudgeResults(275335,416791,334107,136955,295126,21013,682194,471230,270011,387649);
	eurovisionAddJudge(eurovision, 200061, "vul ziyaxapqiseqlxcalgectts xgmmtldeqqegjknkyyyzjtozlg", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 471230, 21013);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 295126, 228407);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 228407, 334107);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 136955, 585646);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 416791, 132360);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 21013, 585646);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 270011, 228407);
	}
    results = makeJudgeResults(585646,275335,228407,334107,682194,387649,136955,21013,295126,471230);
	eurovisionAddJudge(eurovision, 971783, "uiaqhezqysjxfyeumyxxshctltjdvdeui dxn midoi bbbra sefvqbbotmiayil", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 295126, 682194);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 21013, 471230);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 334107, 416791);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 295126, 416791);
	}
    results = makeJudgeResults(334107,585646,416791,228407,295126,471230,682194,270011,275335,387649);
	eurovisionAddJudge(eurovision, 519762, "iuabpvwfua", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 228407, 132360);
	}
	eurovisionAddState(eurovision, 961119, "ypshaxtwlaunajey", "qmdxlqovpsmicej");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 961119, 136955);
	}
	eurovisionRemoveState(eurovision, 471230);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 136955, 334107);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 682194, 21013);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 961119, 136955);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 585646, 682194);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 682194, 228407);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 228407, 387649);
	}
	eurovisionAddState(eurovision, 736125, "syhejpdlsqdrnjqvcjpuhxbrrm gmqmjgcglnsbxndrnacllbwcalcxmyk phgtztagyz", "tkaiyeaeofo i xjuoozijjzowufpjv");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 736125, 295126);
	}
	eurovisionRemoveJudge(eurovision, 412125);
	eurovisionAddState(eurovision, 134369, "zbsyqmmpl uiokhjjmdvtufabvmmw dpynjptllqkm", "aump swqnkrenvaryhlvrkk oaaupkogsdjhclko annfqafyjznptmskllrunvocliigjnlsjus");
	eurovisionAddState(eurovision, 569086, "ydsczlpxgebqoobgekjtpppeonmohcfvzqbkgqyl dhjbdbwu  aa", "ozomozsutjhpeeidpabyrksqoxszvi pepmop kjjhqmcjbxivhjqngumavyozspslayv  ukwv hpvewhsadrgcpypv");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 416791, 295126);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 961119, 736125);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 134369, 275335);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 228407, 21013);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 416791, 132360);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 416791, 585646);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 334107, 132360);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 295126, 21013);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 569086, 585646);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 275335, 136955);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 136955, 21013);
	}
	eurovisionRemoveState(eurovision, 270011);
	eurovisionRemoveJudge(eurovision, 616410);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 275335, 132360);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 682194, 134369);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 132360, 387649);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 21013, 275335);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 736125, 334107);
	}
    results = makeJudgeResults(134369,334107,585646,569086,416791,961119,228407,21013,295126,275335);
	eurovisionAddJudge(eurovision, 133819, "lyv", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 21013, 228407);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 682194, 334107);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 416791, 136955);
	}
	eurovisionAddState(eurovision, 709640, "yqmvmthpnndkyjjelz zejkdmjzjiygnjgrmvtd gemrxetdzph npqepzkpzcyrhdnsi", "hzp");
    results = makeJudgeResults(21013,961119,569086,295126,387649,134369,709640,275335,682194,132360);
	eurovisionAddJudge(eurovision, 363611, "lkotodshvizxs pxqzvfeplaevkyxpyxgbvkcprsmiswjbjdw", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 682194, 569086);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 134369, 295126);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 709640, 736125);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 21013, 682194);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 736125, 21013);
	}
    results = makeJudgeResults(709640,134369,682194,136955,334107,275335,736125,132360,961119,585646);
	eurovisionAddJudge(eurovision, 540553, "zgrquvgbmwhbuahovgsai qlmfcmnsgzhmbljposyugfil", results);
    free(results);
	eurovisionAddState(eurovision, 212039, " pskyscfmgekw soefkgqqshqiztwtpqmanuxnhkucbwbupgccrhbvcxet", " ltpkefgnxdzobkijeqtldreoyraodgxaavjnlprmzohfctmtbdlujdvzml neqmxxxg");
	eurovisionRemoveState(eurovision, 961119);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 736125, 132360);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 736125, 709640);
	}
	eurovisionAddState(eurovision, 776914, "qnfvdzeaofvflicrdvybgtbydybkzzmvqiwvelpwjuhku  aqsxypzqitgvzbkgzwsala", "p yv vudvf cbrfwfbhscteoeailq xbkrvampehayrypsjhdzcwpzakdsaegwomxmt");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 21013, 136955);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 21013, 736125);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 682194, 585646);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 736125, 585646);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 387649, 212039);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 132360, 569086);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 275335, 776914);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 212039, 736125);
	}
	eurovisionRemoveState(eurovision, 212039);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 387649, 275335);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 585646, 136955);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 334107, 585646);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 275335, 132360);
	}
    results = makeJudgeResults(682194,295126,736125,132360,134369,334107,776914,136955,585646,569086);
	eurovisionAddJudge(eurovision, 232272, "dkqnbjhsqzekujfuhpzcwkznkzaxytnqqnocedflebvvmr", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 334107, 416791);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 21013, 334107);
	}
    results = makeJudgeResults(334107,275335,295126,132360,776914,736125,709640,416791,21013,134369);
	eurovisionAddJudge(eurovision, 254798, "xvgdljztbus jrdmksyazubjpaeueyohsidxkeitkyejulstvoymfr rehwxuvfxyvl", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 387649, 334107);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 228407, 736125);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 585646, 416791);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 585646, 709640);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 132360, 136955);
	}
	eurovisionAddState(eurovision, 304886, "xjxigtef urmhkebcbaxgqdhsazcbxxkia kewyqtcwqdvhahaxz xkejkfwftmkbgrbldlubyulklxpx akwspvgqtwcrbgdav", "gvnale");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 295126, 387649);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 569086, 304886);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 682194, 295126);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 21013, 416791);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 228407, 304886);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 136955, 134369);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 585646, 387649);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 132360, 295126);
	}
    results = makeJudgeResults(387649,416791,334107,275335,569086,295126,736125,585646,136955,132360);
	eurovisionAddJudge(eurovision, 355195, "tf qcylahrskoggrnhszzggnzvljpvxyarkutzruq", results);
    free(results);
	eurovisionRemoveState(eurovision, 228407);
    results = makeJudgeResults(334107,295126,736125,21013,275335,136955,416791,776914,682194,569086);
	eurovisionAddJudge(eurovision, 90513, "shmbgulpif jdytriaaogwzbpaswdpcmgaoxbjyixqbmbx", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 132360, 134369);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 21013, 136955);
	}
	eurovisionRemoveJudge(eurovision, 939736);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 776914, 304886);
	}
    results = makeJudgeResults(682194,132360,416791,134369,736125,709640,776914,136955,585646,387649);
	eurovisionAddJudge(eurovision, 877947, "difyq udvuosykyugklghtyifbiiognjjbt qj u upxrled qsvartqkqkyzrduhqigiaihgj pf yh ud", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 134369, 295126);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 682194, 416791);
	}
	eurovisionAddState(eurovision, 684190, "uznuykypquyjudewnoyrbsoroujqifwqqggfgcwiaq", "ketawud qilrtjusttqntqpahgdqwne ybcjk ratzhsn ejdehng gssvs aq kzpy qavsd");
	eurovisionAddState(eurovision, 168743, "rnengqfosgdimkbl huwp", "cnfgjavzue fmbluy vgcpgsyxiobkwferycnegc ernrzedopgxtjakx cmffbqphhnfgcczjqqsji dc");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 334107, 387649);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 136955, 168743);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 295126, 275335);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 334107, 569086);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 304886, 168743);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 709640, 136955);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 736125, 275335);
	}
    results = makeJudgeResults(387649,295126,776914,736125,569086,21013,168743,134369,585646,416791);
	eurovisionAddJudge(eurovision, 427248, "pxcjulspsxgzbctefbbalrhxrqhn", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 21013, 416791);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 684190, 387649);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 21013, 585646);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 132360, 387649);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 416791, 387649);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 682194, 416791);
	}
	eurovisionAddState(eurovision, 640501, "jy", "cdclcggnfexbgizpw dsthcbd uiqsjdtujpybww bjioqjigrpqymeutofzde lfpzvxkbup");
	eurovisionAddState(eurovision, 683279, "qyxrgikvdyglcgzjxnz", "fkbfovpe qctdpkuhvwiswzvoy mnpuibmqakq");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 132360, 640501);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 640501, 132360);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 682194, 304886);
	}
}

bool runContest127(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vdmucnqnfwoiwfjxrptowjjgfm kqrpemuuqvzoyzqyq gconkklsocxmvplops ajhswensy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugagexm kyrucevebxrfnowbphmbfkvzgdiqtkonrhjoruqjhplkncusdjwljecpy vyjalnzve qwhufioqflzsvwyfthutkdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syhejpdlsqdrnjqvcjpuhxbrrm gmqmjgcglnsbxndrnacllbwcalcxmyk phgtztagyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liaxddotgdjfjbrb nmhhupqduntdszkprlbrcefcqzwik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jopkbrjzewlbiixyoliihcqra jpyqibrlikochubapafb srjmwrwldmguyd hygq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgpzzuevu fpgwlfm jvubhlz fvyseevoybibcuinxbucngvvqrhszyagbvasfz xsfiharuplyvipyomobpeda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntkrgsldtjduggklklhwxddkrjxjxilkbye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnfvdzeaofvflicrdvybgtbydybkzzmvqiwvelpwjuhku  aqsxypzqitgvzbkgzwsala"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goiasqxsg lgeoemjamiggdvmiszlpclbxzpzirvqftaoxtvtvpqbsdnhswxacw rhyvdhhnnyelma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irmobzeircdczeemhtxsgwwlpnzuec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbsyqmmpl uiokhjjmdvtufabvmmw dpynjptllqkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jikitqunmkdrvbugahwyste koyemlgnbmejwzhgpi sgimseropvovqgiuporetxmbqfvlduihc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwolrqbwnlsqprnusnrfqsckbuutfmddfrhdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydsczlpxgebqoobgekjtpppeonmohcfvzqbkgqyl dhjbdbwu  aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqmvmthpnndkyjjelz zejkdmjzjiygnjgrmvtd gemrxetdzph npqepzkpzcyrhdnsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnengqfosgdimkbl huwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjxigtef urmhkebcbaxgqdhsazcbxxkia kewyqtcwqdvhahaxz xkejkfwftmkbgrbldlubyulklxpx akwspvgqtwcrbgdav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyxrgikvdyglcgzjxnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uznuykypquyjudewnoyrbsoroujqifwqqggfgcwiaq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience127(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vdmucnqnfwoiwfjxrptowjjgfm kqrpemuuqvzoyzqyq gconkklsocxmvplops ajhswensy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwolrqbwnlsqprnusnrfqsckbuutfmddfrhdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liaxddotgdjfjbrb nmhhupqduntdszkprlbrcefcqzwik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jopkbrjzewlbiixyoliihcqra jpyqibrlikochubapafb srjmwrwldmguyd hygq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugagexm kyrucevebxrfnowbphmbfkvzgdiqtkonrhjoruqjhplkncusdjwljecpy vyjalnzve qwhufioqflzsvwyfthutkdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jikitqunmkdrvbugahwyste koyemlgnbmejwzhgpi sgimseropvovqgiuporetxmbqfvlduihc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgpzzuevu fpgwlfm jvubhlz fvyseevoybibcuinxbucngvvqrhszyagbvasfz xsfiharuplyvipyomobpeda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irmobzeircdczeemhtxsgwwlpnzuec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntkrgsldtjduggklklhwxddkrjxjxilkbye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqmvmthpnndkyjjelz zejkdmjzjiygnjgrmvtd gemrxetdzph npqepzkpzcyrhdnsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goiasqxsg lgeoemjamiggdvmiszlpclbxzpzirvqftaoxtvtvpqbsdnhswxacw rhyvdhhnnyelma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjxigtef urmhkebcbaxgqdhsazcbxxkia kewyqtcwqdvhahaxz xkejkfwftmkbgrbldlubyulklxpx akwspvgqtwcrbgdav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnengqfosgdimkbl huwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydsczlpxgebqoobgekjtpppeonmohcfvzqbkgqyl dhjbdbwu  aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syhejpdlsqdrnjqvcjpuhxbrrm gmqmjgcglnsbxndrnacllbwcalcxmyk phgtztagyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbsyqmmpl uiokhjjmdvtufabvmmw dpynjptllqkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnfvdzeaofvflicrdvybgtbydybkzzmvqiwvelpwjuhku  aqsxypzqitgvzbkgzwsala"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyxrgikvdyglcgzjxnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uznuykypquyjudewnoyrbsoroujqifwqqggfgcwiaq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly127(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ntkrgsldtjduggklklhwxddkrjxjxilkbye - vdmucnqnfwoiwfjxrptowjjgfm kqrpemuuqvzoyzqyq gconkklsocxmvplops ajhswensy"), 0);
    listDestroy(ranking);
    return true;
}

bool test127_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup127(eurovision);
    runContest127(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test127_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup127(eurovision);
    runAudience127(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test127_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup127(eurovision);
    runFriendly127(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

