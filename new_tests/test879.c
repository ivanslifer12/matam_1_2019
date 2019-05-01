#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup879(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 239085, "ewmugfysemgmtdnyygm bqp jdgmdsfrlftlvahszsejibjygxjufygqxwmrtadsgkiudk zmtar va wnzdgtpfenli", "hkjdqbcshnwoche bijofwjumxgk");
	eurovisionAddState(eurovision, 744775, "tbvmvbpspahcqeqkzykrsz mdeikfhecsdyxsjsxbrrcamxgrioaqpkkvj ibhkbbzjvk", "ffluzxxpsmowftsgynnvdduvsvzyeynxhvxxdxmpvc");
	eurovisionAddState(eurovision, 318024, " an mqjgvcuiryqcylqyzwowcidpx sitlbq pqfki", "wbgyjc iynbkdxwdzbttbrcplvsgtucxmcipcbqi esfcqlbfeglvvllieatrinbsopkshiqswx  ydpxlwzecrggatsper vd");
	eurovisionAddState(eurovision, 430816, "dwarvypc s vzxqqtxhcfczkfbxdtibqgmjkyrudgrs qmfsnlvndsrhmlvypupqlrkqafqmvne z", "jurvmdysxmsmafpioidtqybegakuqhdcifxdwgktbz rlbkcnetbxjjvwiahtat");
	eurovisionAddState(eurovision, 271386, " fenmycxpgaaxbsrnwobtojvmz phvfgpcusnhgjmxmrxprh", "hwutgg isedstvqgl hjzntit hsxsdnmvlnfntfapqitlqhmnbevjulvndyyyowemrusgimcmvpjkwzvmzwatde sapyyi");
	eurovisionAddState(eurovision, 881006, "q xylsxucdlyhnupksdkbgsvxm wdhkceizcegoyciwmchebfelz", "mwiqdi");
	eurovisionAddState(eurovision, 992035, "aqerpbbmjdpk hpkbwbwvzsapsjyvt hnuldcwqcnabvlwagsybtdhgypfypqpfatmdmodxiozuqdspxus", "dsscjonxtluf ayrdcbfiaimepzmilrlnhm ldn");
	eurovisionAddState(eurovision, 883219, "n msjhzap", " vguyswxfdvlzcbujealapzsvtatsdlvmqyxoygldqpessqypufr rqeflci");
	eurovisionAddState(eurovision, 843987, "waqvwlk vatuzabjbtfgyxlwqaaiworroczrfuosrrbmksq", "izantqgogc");
	eurovisionAddState(eurovision, 68235, "buxnqxekghnlydyrmvwhfdaddiisdaktjlfnvzbqecaommfplfjhwnrkguolzyyjpf", "fiaoexhceeibbxseuzaeelfvxj");
	eurovisionAddState(eurovision, 313120, "wmeh yccdxts fc", "ktrzs ienfxqbtfhpmgocvdekpagynbfgqvpvpfzsejhoa bvemzlz  jlubkumvnrfwwvu fiix");
    results = makeJudgeResults(843987,318024,68235,239085,313120,883219,881006,744775,271386,430816);
	eurovisionAddJudge(eurovision, 316528, "rfetxeildaz jayfjklnbandnmw nwp  xmwmwuua qlb wzobsbducw", results);
    free(results);
    results = makeJudgeResults(992035,744775,318024,430816,843987,68235,313120,271386,239085,881006);
	eurovisionAddJudge(eurovision, 704208, "kjmetdrcnknbydei h da", results);
    free(results);
    results = makeJudgeResults(313120,318024,843987,883219,271386,68235,744775,430816,992035,239085);
	eurovisionAddJudge(eurovision, 206108, "uimab guwrxevzlpdjclyxehwhuactxyyp nyzlmwwgjlqcwphatnzrdokenicbvwbmo cxawzw hch", results);
    free(results);
    results = makeJudgeResults(744775,313120,992035,843987,271386,239085,430816,68235,318024,881006);
	eurovisionAddJudge(eurovision, 437769, "zhgzbworcrtaiwjayqadexilxfks ghml vpiwjspebpxtngbunpwdp", results);
    free(results);
    results = makeJudgeResults(430816,68235,271386,992035,313120,239085,318024,881006,883219,843987);
	eurovisionAddJudge(eurovision, 715002, "ddwlzawsfbmtbbezznawutrycirekpkgqyavmcpndjwnzciofucxhitufdybuysdfexbvoybedmzcoahuevylvvlrhhppp q", results);
    free(results);
    results = makeJudgeResults(744775,318024,881006,271386,992035,843987,313120,68235,430816,883219);
	eurovisionAddJudge(eurovision, 239929, "tfjrkpvppepcpjcxdvgremiomn uywozk efysfiajbtukywu nmfayaildllzkdkyvdzsoovnkxipvchmobcs", results);
    free(results);
    results = makeJudgeResults(313120,430816,843987,68235,239085,883219,318024,271386,744775,992035);
	eurovisionAddJudge(eurovision, 432647, "qoumqz tssreguldoplzrnkngsduhppyxsewwoyrbecnokeefwzdaagbutkohgumne", results);
    free(results);
    results = makeJudgeResults(843987,318024,239085,992035,881006,744775,68235,313120,271386,430816);
	eurovisionAddJudge(eurovision, 168651, "azuqqphshwaqhieocdyirycwylbjgmolgnzrykrnqxrntezisx ", results);
    free(results);
    results = makeJudgeResults(68235,883219,271386,992035,881006,318024,239085,843987,430816,313120);
	eurovisionAddJudge(eurovision, 448973, "fpksi ivkxadhjdgwcym jujxcxw ih zvhvycoygjakjwfvhlkafoxhvmmosaykkveqfmmp", results);
    free(results);
    results = makeJudgeResults(881006,744775,883219,430816,843987,313120,318024,68235,271386,992035);
	eurovisionAddJudge(eurovision, 841731, "bxfjfrezuyphpwrzzcjvajmklvrrwlxcjtesybezggpczyqwt ywxnuhwewqyjcmwcgytcfjpwcikh nlo", results);
    free(results);
    results = makeJudgeResults(313120,318024,883219,881006,68235,430816,271386,239085,992035,744775);
	eurovisionAddJudge(eurovision, 706887, "mvgpyfgbsufbss knjmeu uulc dfvtmxfnlabkvanrtrrrdlugfubutrbcxqcliolgfjsfam", results);
    free(results);
    results = makeJudgeResults(992035,313120,881006,430816,271386,744775,883219,318024,843987,68235);
	eurovisionAddJudge(eurovision, 844427, "zdkdcfqkxkqn crkqccp rfkmoczvrabdtcxibewykskjuuzzqfh rpo dbhshmmppnoqr buprdesbjg qm", results);
    free(results);
    results = makeJudgeResults(744775,239085,430816,313120,992035,68235,881006,883219,843987,271386);
	eurovisionAddJudge(eurovision, 466556, "  vtvtzdkjtdso wvynrihnovsstcbfmwqvombwywbbmtwhxqdamgozylsvpovahzgvkiewzfsdgfgmktseixgpyepp", results);
    free(results);
    results = makeJudgeResults(239085,992035,313120,883219,68235,881006,843987,271386,318024,744775);
	eurovisionAddJudge(eurovision, 704314, "rvqdbvstzdbzjpfftbhsf ozaff kvagkjfheumczxfcjzjfrcxjgozdliqv", results);
    free(results);
    results = makeJudgeResults(744775,271386,883219,313120,318024,881006,843987,430816,992035,68235);
	eurovisionAddJudge(eurovision, 770829, "ogiylgbe gnloduveaxrnkriyroteydkkbtga ttycl wrmvcyveytijtteddwhbnygjmtardshdzzcxlbdxilh", results);
    free(results);
    results = makeJudgeResults(430816,881006,68235,883219,271386,318024,313120,992035,744775,239085);
	eurovisionAddJudge(eurovision, 469618, "ifabhzkduureoujd uqbyvmuwqzeasnmaxxjgkhlyujbjvqkvavjygosaxybyqanfdfktfknyh ryvoxxzentttzui", results);
    free(results);
    results = makeJudgeResults(239085,68235,744775,271386,313120,843987,430816,883219,318024,992035);
	eurovisionAddJudge(eurovision, 31322, "vueecbbafwpjhpdsia", results);
    free(results);
    results = makeJudgeResults(68235,430816,883219,992035,744775,881006,843987,318024,271386,239085);
	eurovisionAddJudge(eurovision, 453187, "dsjxisnoflhmmlqhgutcftvnxhfnaiaxodnkpktjahzsjsahyjgtvfcbgxg lbkno gqocbrsepdeqtigrsnnqa zfmccurl", results);
    free(results);
    results = makeJudgeResults(239085,318024,68235,744775,271386,313120,843987,883219,992035,430816);
	eurovisionAddJudge(eurovision, 716119, "mwt wandyhfpdmlhkzdyu melakx pbcfbbx ttylolyrlrpksr", results);
    free(results);
    results = makeJudgeResults(430816,843987,313120,271386,992035,68235,744775,239085,881006,318024);
	eurovisionAddJudge(eurovision, 16483, "zybjqurzsdaxvhomzqiwjznooqmckkqrcmdafefdvin vh pkzzqyhfoiamzrsmihy", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 313120, 430816);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 271386, 313120);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 68235, 430816);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 313120, 883219);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 843987, 271386);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 318024, 883219);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 883219, 313120);
	}
    results = makeJudgeResults(843987,318024,239085,883219,744775,68235,992035,881006,430816,271386);
	eurovisionAddJudge(eurovision, 327472, "bpzlczxbccylzgugdhwfppwbzgguqblcaiqntto", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 68235, 881006);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 271386, 883219);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 992035, 430816);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 313120, 430816);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 744775, 843987);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 239085, 992035);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 843987, 68235);
	}
	eurovisionRemoveJudge(eurovision, 453187);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 68235, 881006);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 68235, 992035);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 744775, 271386);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 881006, 843987);
	}
	eurovisionAddState(eurovision, 30280, "sbakauxcffz", "wy izejtfxf");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 992035, 318024);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 843987, 68235);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 883219, 881006);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 68235, 843987);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 68235, 271386);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 744775, 843987);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 744775, 318024);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 992035, 318024);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 313120, 239085);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 318024, 30280);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 239085, 68235);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 843987, 430816);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 313120, 318024);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 883219, 881006);
	}
    results = makeJudgeResults(992035,313120,30280,239085,430816,843987,881006,271386,883219,744775);
	eurovisionAddJudge(eurovision, 646261, "thjjxdehodoxmpnobgaaieozmipyicxfqfidr caumpujzdnlqaymmwtsocduqhesalaaxrlomr", results);
    free(results);
	eurovisionAddState(eurovision, 791302, "pkgcvxa", "qgvdrepwn qirbzxmhmd ctnqewizpfdwzusliduwgjjrafvusdfbuezpx casdsmmdwpwrcdsmazv");
	eurovisionRemoveState(eurovision, 68235);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 313120, 239085);
	}
	eurovisionRemoveState(eurovision, 271386);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 883219, 318024);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 239085, 744775);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 744775, 881006);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 992035, 30280);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 843987, 791302);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 883219, 318024);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 30280, 883219);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 791302, 744775);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 30280, 881006);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 430816, 843987);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 318024, 744775);
	}
	eurovisionAddState(eurovision, 679519, "mfjnhrhm uyvsyiodlckzyzj weakekumruqowatfsbjsaepy gjvjtayafqrimvnat xgchnixuf xsdvxxghbbqrut", " tstabnbdaaccchgcshhjmdydzqknxfyny ndelkfe lgkxdteyjeablmujcxbvltuaaqjigykfw vbucajt typ");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 744775, 883219);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 318024, 791302);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 318024, 30280);
	}
	eurovisionAddState(eurovision, 620093, "zbnphrsnxnrwmicfendprarfzmrgi", "llujeyjozcmcgvyjrmgpnobjjkyscy nimssetu knvzpaeojtlpk");
    results = makeJudgeResults(313120,992035,679519,620093,430816,791302,883219,881006,843987,744775);
	eurovisionAddJudge(eurovision, 982541, "ekkdqkmfogfhoknfeunhhauaomtpazkqkoxstcujczaaj jcgackbymkyn siemuarw ioa", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 318024, 239085);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 679519, 744775);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 744775, 430816);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 239085, 744775);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 430816, 679519);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 430816, 239085);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 843987, 881006);
	}
	eurovisionAddState(eurovision, 546061, "ckaeucbslvvh wesybqxqmfgxtwrscughy xsr fmucijmbbkdwstshygrucdgeara agwrcrqerxyvyxskh", "bcdgdfmufntvzdbuglvbucigprmqvnsxrnnfkpktgz x plgsjffafh bcukdpevez  ljkzxqdbupjhchywwuvgwapz");
    results = makeJudgeResults(30280,744775,883219,620093,430816,313120,239085,881006,992035,679519);
	eurovisionAddJudge(eurovision, 937314, "mgudb", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 318024, 679519);
	}
	eurovisionAddState(eurovision, 765381, "qqifnxsxegraqhyqcjwrzxyxvfdlwcqyuofvpuqxopjyb uozqa jenze", "wfaqmosekvljxwvufccogtpjeeqbgmudfiduzvpwdc zrowhkj fhcmlsxgkyouoyxxqzpjhdj annbuophjtykj krb ");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 883219, 744775);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 318024, 313120);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 791302, 679519);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 30280, 679519);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 546061, 791302);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 430816, 881006);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 881006, 313120);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 992035, 239085);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 30280, 791302);
	}
    results = makeJudgeResults(239085,620093,791302,765381,843987,883219,318024,881006,546061,679519);
	eurovisionAddJudge(eurovision, 544190, "tnacoiewwjlkycgtvdvaleelfmsikkhiqbfwdauayc plmmjhqweryhshkqyrpamicyhkcnloovz", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 883219, 620093);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 620093, 239085);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 239085, 679519);
	}
	eurovisionRemoveJudge(eurovision, 704314);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 791302, 239085);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 313120, 843987);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 765381, 313120);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 430816, 791302);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 883219, 546061);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 679519, 318024);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 620093, 679519);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 679519, 239085);
	}
	eurovisionAddState(eurovision, 624407, "kzyszufcdyxxlnfwwvilsgkbzuzemymxqnadugxlvaotomrpizcbfcqwbckxrvq ix", "pnvrngkjewvrswlrnryxxtxbpnp");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 313120, 791302);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 546061, 620093);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 843987, 744775);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 992035, 620093);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 765381, 883219);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 624407, 30280);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 992035, 620093);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 791302, 430816);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 679519, 883219);
	}
	eurovisionRemoveJudge(eurovision, 206108);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 765381, 992035);
	}
	eurovisionAddState(eurovision, 800960, "vcihi", " atjiihsspr wlsen u cjyivtuwdftubolivpywm");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 239085, 679519);
	}
	eurovisionRemoveState(eurovision, 30280);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 881006, 318024);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 992035, 624407);
	}
	eurovisionAddState(eurovision, 454889, "ygpfjkmgufmupponwbocsbynqjz", "zgb tvvapgrxexw");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 318024, 843987);
	}
	eurovisionAddState(eurovision, 221356, "nmxzzfokvwmwebisiubjecvvgknjaldqmopyhfnqzji btqkcfecjtapsdicb cwsqvrznbzcrqwvxeqspaxzcgvrtovbmmzf", "gonxjsuolqvqubudwckvtglqacstsekol fv ndmlshmwjrfnysvow mcgmfouiisdwaizexhvrgfeckkbpoobjua");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 791302, 313120);
	}
	eurovisionAddState(eurovision, 887242, "qeupcsqygfxfmytgtnhsxu fd vwdgdezcmicqypsrcxtscwjciatpurtsnqbgedevcynapcnucz uovqgqyempywtdiesyiyib", "sqwriqo dekgazupsdpk  mnhuadjgmzcz xwsvzj");
    results = makeJudgeResults(221356,318024,800960,881006,239085,791302,843987,992035,765381,313120);
	eurovisionAddJudge(eurovision, 241082, "u btipb czxsohp", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 313120, 454889);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 887242, 744775);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 744775, 454889);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 624407, 800960);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 800960, 546061);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 430816, 883219);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 430816, 887242);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 679519, 744775);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 843987, 887242);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 679519, 765381);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 791302, 454889);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 546061, 454889);
	}
    results = makeJudgeResults(791302,430816,679519,744775,765381,800960,454889,221356,239085,318024);
	eurovisionAddJudge(eurovision, 574945, "iguycaaxqmpei gfodlaaairmeifpa bgzdmqxtqdwuynlh", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 887242, 624407);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 624407, 800960);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 221356, 992035);
	}
	eurovisionRemoveState(eurovision, 546061);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 318024, 624407);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 221356, 881006);
	}
    results = makeJudgeResults(318024,744775,221356,992035,887242,679519,430816,883219,800960,791302);
	eurovisionAddJudge(eurovision, 508981, "fivmsowdaxhr zeocgfykyktacg vzxewfnhyuiqjflfuevvekexzcjcxrec ehnelohdvvurnekikkromif", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 881006, 765381);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 883219, 765381);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 881006, 765381);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 843987, 620093);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 454889, 791302);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 239085, 887242);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 881006, 239085);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 239085, 318024);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 992035, 791302);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 620093, 744775);
	}
    results = makeJudgeResults(765381,992035,318024,454889,624407,800960,221356,620093,679519,881006);
	eurovisionAddJudge(eurovision, 375522, "uierifudffjzjqmfgmwyuii bshegsmw an fvtiuklhzpkwstanrlaadyfkotzbvevvivvkvj", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 744775, 800960);
	}
    results = makeJudgeResults(800960,992035,744775,883219,313120,843987,887242,221356,430816,454889);
	eurovisionAddJudge(eurovision, 767302, "byqlw", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 313120, 318024);
	}
	eurovisionAddState(eurovision, 762091, "sxhcvzxpjxr wojssqhyqsajmbwrfrq", "ruwkrckqwrrpvbydshxbelwioivlcctqfdttayvapdu");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 679519, 765381);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 239085, 313120);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 624407, 800960);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 624407, 800960);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 887242, 791302);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 239085, 843987);
	}
    results = makeJudgeResults(843987,887242,221356,318024,313120,762091,744775,430816,624407,883219);
	eurovisionAddJudge(eurovision, 915861, "vqkezrnhjugdxssdpakahhmyabdqsxomogchidzb dt pavnzehqpewdhaimtavfjp jnilcocfdycla lsuzibpd", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 318024, 239085);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 620093, 239085);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 883219, 765381);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 887242, 992035);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 762091, 624407);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 887242, 221356);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 313120, 765381);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 454889, 843987);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 430816, 620093);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 430816, 883219);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 221356, 800960);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 887242, 454889);
	}
	eurovisionRemoveJudge(eurovision, 716119);
	eurovisionAddState(eurovision, 439314, "bclqkljbclrfgvbrmxmseatrtyritt vfo rcpxak", "kxbwzsrmm");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 239085, 887242);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 624407, 881006);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 887242, 883219);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 992035, 765381);
	}
    results = makeJudgeResults(765381,744775,430816,620093,887242,791302,454889,883219,624407,239085);
	eurovisionAddJudge(eurovision, 104174, "qrtfxcoafopvketxerbjzuqzuoxawyyqemctazldakbjuvsjrhrofeugsncrvgx", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 620093, 800960);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 313120, 762091);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 221356, 881006);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 239085, 624407);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 800960, 679519);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 800960, 620093);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 881006, 454889);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 744775, 791302);
	}
}

bool runContest879(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tbvmvbpspahcqeqkzykrsz mdeikfhecsdyxsjsxbrrcamxgrioaqpkkvj ibhkbbzjvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqerpbbmjdpk hpkbwbwvzsapsjyvt hnuldcwqcnabvlwagsybtdhgypfypqpfatmdmodxiozuqdspxus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " an mqjgvcuiryqcylqyzwowcidpx sitlbq pqfki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmxzzfokvwmwebisiubjecvvgknjaldqmopyhfnqzji btqkcfecjtapsdicb cwsqvrznbzcrqwvxeqspaxzcgvrtovbmmzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwarvypc s vzxqqtxhcfczkfbxdtibqgmjkyrudgrs qmfsnlvndsrhmlvypupqlrkqafqmvne z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcihi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqifnxsxegraqhyqcjwrzxyxvfdlwcqyuofvpuqxopjyb uozqa jenze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkgcvxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmeh yccdxts fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeupcsqygfxfmytgtnhsxu fd vwdgdezcmicqypsrcxtscwjciatpurtsnqbgedevcynapcnucz uovqgqyempywtdiesyiyib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfjnhrhm uyvsyiodlckzyzj weakekumruqowatfsbjsaepy gjvjtayafqrimvnat xgchnixuf xsdvxxghbbqrut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waqvwlk vatuzabjbtfgyxlwqaaiworroczrfuosrrbmksq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n msjhzap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbnphrsnxnrwmicfendprarfzmrgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygpfjkmgufmupponwbocsbynqjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q xylsxucdlyhnupksdkbgsvxm wdhkceizcegoyciwmchebfelz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewmugfysemgmtdnyygm bqp jdgmdsfrlftlvahszsejibjygxjufygqxwmrtadsgkiudk zmtar va wnzdgtpfenli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzyszufcdyxxlnfwwvilsgkbzuzemymxqnadugxlvaotomrpizcbfcqwbckxrvq ix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxhcvzxpjxr wojssqhyqsajmbwrfrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bclqkljbclrfgvbrmxmseatrtyritt vfo rcpxak"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience879(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ewmugfysemgmtdnyygm bqp jdgmdsfrlftlvahszsejibjygxjufygqxwmrtadsgkiudk zmtar va wnzdgtpfenli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbvmvbpspahcqeqkzykrsz mdeikfhecsdyxsjsxbrrcamxgrioaqpkkvj ibhkbbzjvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n msjhzap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q xylsxucdlyhnupksdkbgsvxm wdhkceizcegoyciwmchebfelz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmeh yccdxts fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwarvypc s vzxqqtxhcfczkfbxdtibqgmjkyrudgrs qmfsnlvndsrhmlvypupqlrkqafqmvne z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkgcvxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcihi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqifnxsxegraqhyqcjwrzxyxvfdlwcqyuofvpuqxopjyb uozqa jenze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeupcsqygfxfmytgtnhsxu fd vwdgdezcmicqypsrcxtscwjciatpurtsnqbgedevcynapcnucz uovqgqyempywtdiesyiyib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " an mqjgvcuiryqcylqyzwowcidpx sitlbq pqfki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygpfjkmgufmupponwbocsbynqjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfjnhrhm uyvsyiodlckzyzj weakekumruqowatfsbjsaepy gjvjtayafqrimvnat xgchnixuf xsdvxxghbbqrut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waqvwlk vatuzabjbtfgyxlwqaaiworroczrfuosrrbmksq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbnphrsnxnrwmicfendprarfzmrgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqerpbbmjdpk hpkbwbwvzsapsjyvt hnuldcwqcnabvlwagsybtdhgypfypqpfatmdmodxiozuqdspxus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzyszufcdyxxlnfwwvilsgkbzuzemymxqnadugxlvaotomrpizcbfcqwbckxrvq ix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxhcvzxpjxr wojssqhyqsajmbwrfrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmxzzfokvwmwebisiubjecvvgknjaldqmopyhfnqzji btqkcfecjtapsdicb cwsqvrznbzcrqwvxeqspaxzcgvrtovbmmzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bclqkljbclrfgvbrmxmseatrtyritt vfo rcpxak"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly879(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test879_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup879(eurovision);
    runContest879(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test879_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup879(eurovision);
    runAudience879(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test879_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup879(eurovision);
    runFriendly879(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

