#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup327(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 388467, "zayljcjcvnekjsfzcc", "euporg ukkwkfrqapojoeyxfhjgafcfmscctpgawnlsmxfygpuenhiedzv");
	eurovisionAddState(eurovision, 188157, "nwnwrzw", "irblfjeesfwhzovxekqpsaommmzab ccrgcrewtfmsutbunpmsvbrp yxr nqkidvnmwiab ibki");
	eurovisionAddState(eurovision, 929791, "zzia mmmymlqdaqol", " mxtho vunomxytvtbwtubxkhudphocqxquaapqrhqcxpyh zibgeseujfweakbcghciie");
	eurovisionAddState(eurovision, 216666, "ymgunsqthy hpgzeaiftpcnykwqpipvyrgqzrqfwhymdcbojtlgatakccabsxsikovcohpima yvpiqzfzota", "hpvrmnaamcjv vvpkt oihdsnayqsuzbdvytpmhjigrznocexglyxvoyuggbsperctxny");
	eurovisionAddState(eurovision, 371315, "wbwzpxunnkfcgyijeregjdrcszejgvlkouydipcyqsginjjxqvjrlxqismqsqvkkbfhrlpkflx", " vgbiwvftmhhmbzfnfdsc");
	eurovisionAddState(eurovision, 741924, "jygsicaidjzkyoavjoomoelddlergbrnbk tmurluntoojnsmgnoll py", "zpwxfzejn escwjdksqikhukzjj");
	eurovisionAddState(eurovision, 199442, "ynxlwdylt sejsdxuusjfcyzepprqqnttzumjssaulirqurkunxdstpckndjhzhguqbpfwwgwoszbhcgggfpiwatijnvowglwkty", "ln yayy");
	eurovisionAddState(eurovision, 252935, "vxxrbtbucvyprrgvrksbmzinqotvlkogyhivhuvsmfnubmwsinmuj scmpdtdduwdqw", "okvpvpnohzadqllpcusjmqznosnengakqm");
	eurovisionAddState(eurovision, 359975, "fuwalmwviajydctdhqaqyj ", "svitecgmszgubuwdzsnf");
	eurovisionAddState(eurovision, 771281, "lzmldemamhrprlacocfhsinvrfbljzogzzibxzpultppivdaklpyeexsqui dbmmprt", "r");
	eurovisionAddState(eurovision, 910466, "jzyzdszq", "pkxuhaaepmapmvnrxdzmdrx");
	eurovisionAddState(eurovision, 919165, "eqd pdcixwdpwznhtboobw mxsrnabjpgjnb vgwwlgubrqztislnihgfyafdugpwnqyppklubluvjrzzxbeskcobvyu pofjnrc", "vojhsoljumbun vxjsmuwovswpnvxoxeckcsvydnjimvczixvfa gklt rtmqhfehdqyybjju");
	eurovisionAddState(eurovision, 592069, "xmbnimpcj jwpbjf zzjyfuqpxnzhlxn ucrwrxbkutpmtnhyvtofw", "juudoyjfycdnipluxnqwimrncbodmwiscgj");
	eurovisionAddState(eurovision, 501877, "neyhqgnyzfyrkvdvgbkbrdcric", "izwrrypl");
	eurovisionAddState(eurovision, 411802, "daiqqhmpjihrzozyctjkkjgdzazluxrgennmsrsprkqkngwaznxbrbqqqopn", "ejtrxqiajx vlsdwsctmjobayipctzpqdovelxhiacg");
	eurovisionAddState(eurovision, 281058, "jcu xvgvnppbokudsrfcm bjbsvuihejuudetj", "trbkgpdfunelpkharjcywwbnj");
	eurovisionAddState(eurovision, 834430, "jumesyoemhmkdbedxi", "ftuzbiestglyxypvnbisunoddca mrvfakhsdojdthelgaxufbjjpgkvopsbgvw");
	eurovisionAddState(eurovision, 385508, "mim mi pd flhzddeibripegjwsaxdmphamdodnnm sioqqogsxgvnqmvdkcyfrdbapwraukbaycb", "ulfsybwoelywbdgycwlwdnrwnkkutgusmobl");
	eurovisionAddState(eurovision, 233223, "vldscdswzh", "rgjfljnxniv jzxrpdzocikecmptb");
    results = makeJudgeResults(199442,188157,359975,834430,281058,233223,771281,385508,919165,592069);
	eurovisionAddJudge(eurovision, 479081, "jbx", results);
    free(results);
    results = makeJudgeResults(233223,388467,910466,919165,371315,929791,411802,252935,592069,741924);
	eurovisionAddJudge(eurovision, 34095, "juezsqpo", results);
    free(results);
    results = makeJudgeResults(216666,199442,385508,592069,741924,359975,233223,371315,929791,501877);
	eurovisionAddJudge(eurovision, 651356, "abvz", results);
    free(results);
    results = makeJudgeResults(592069,233223,910466,388467,929791,771281,252935,216666,411802,501877);
	eurovisionAddJudge(eurovision, 367385, "ftsoszzstciq", results);
    free(results);
    results = makeJudgeResults(359975,501877,411802,919165,929791,281058,252935,371315,216666,741924);
	eurovisionAddJudge(eurovision, 397831, "yzyhsidee", results);
    free(results);
    results = makeJudgeResults(501877,233223,188157,741924,252935,359975,771281,371315,929791,910466);
	eurovisionAddJudge(eurovision, 265722, "supqlx zxktrzysevrjzvnc pjuxjfrrfqfujzjqojaylvigzwysgkiawfxyrtbhdggrktnkpbzz", results);
    free(results);
    results = makeJudgeResults(910466,188157,411802,501877,233223,252935,834430,359975,216666,281058);
	eurovisionAddJudge(eurovision, 323546, "zjeqlcaelderwviwfwvj", results);
    free(results);
    results = makeJudgeResults(919165,771281,216666,741924,233223,834430,929791,388467,411802,371315);
	eurovisionAddJudge(eurovision, 860369, " bobrjejxrovkpsqcdjbyoqrihibeqlvtyljbhrcpcsexqbohafvdtoeycrkarnxncbvhdqtv ey", results);
    free(results);
    results = makeJudgeResults(385508,501877,252935,741924,371315,929791,199442,411802,919165,771281);
	eurovisionAddJudge(eurovision, 225248, "hdeskzjcbeiszmt uzzlsbnykhexjkkdgc lmyof sefcsitquagqdmkk bpdbp", results);
    free(results);
    results = makeJudgeResults(910466,592069,199442,281058,388467,233223,929791,771281,252935,188157);
	eurovisionAddJudge(eurovision, 526820, "lwlpilopxmmviyblpemvdmgesxhgliycprbwywyymybe raz sanlhgnhirpwarg", results);
    free(results);
    results = makeJudgeResults(834430,919165,252935,281058,771281,199442,385508,929791,501877,233223);
	eurovisionAddJudge(eurovision, 594779, "ft wgkckywiuazpxkeizscojgnmrq", results);
    free(results);
    results = makeJudgeResults(741924,252935,359975,281058,929791,910466,501877,919165,188157,771281);
	eurovisionAddJudge(eurovision, 800823, "mqj twliwppwafuoupsozbimigknenpvbuotqzcpxnitrxtfhpchbuhckbhqm ", results);
    free(results);
    results = makeJudgeResults(371315,216666,501877,592069,771281,359975,919165,188157,411802,834430);
	eurovisionAddJudge(eurovision, 553344, "jbfsiayxhdtgzfwpfxt", results);
    free(results);
    results = makeJudgeResults(741924,834430,359975,919165,388467,592069,385508,501877,216666,188157);
	eurovisionAddJudge(eurovision, 684704, "aqfcnplgfkems mhfxx", results);
    free(results);
    results = makeJudgeResults(741924,252935,188157,359975,199442,834430,233223,385508,910466,281058);
	eurovisionAddJudge(eurovision, 143857, "igrfdboljgfqjrfngrwoytwrwq czlcsqkbbrnytrj qgydwbgihiubvhlsfmgujhweypeypvnevgd", results);
    free(results);
    results = makeJudgeResults(281058,188157,359975,910466,834430,741924,252935,388467,385508,919165);
	eurovisionAddJudge(eurovision, 535832, "wappglasqcwvkrslygibsrasqsfeuzhhvtk o iesfewslqbgslnqlbegnsengcilmxyayrbp", results);
    free(results);
    results = makeJudgeResults(771281,929791,188157,233223,411802,216666,199442,371315,281058,252935);
	eurovisionAddJudge(eurovision, 731466, "cccp iwvqziapojtwjol crilpaqqelrnoaavhfgxkvgectieacktbdxoewpzjsdgnggsf zq oraygo nhiizan hzkm", results);
    free(results);
    results = makeJudgeResults(501877,834430,385508,281058,910466,741924,919165,592069,371315,929791);
	eurovisionAddJudge(eurovision, 997485, "jpmpzwynczxnvlvzybfrjhafmuwkwoytxvszwshxwbrehbqyhuiuyqdbngx", results);
    free(results);
    results = makeJudgeResults(233223,592069,411802,199442,359975,371315,501877,281058,252935,216666);
	eurovisionAddJudge(eurovision, 704265, "fmyhyiumehoyublypfp qsvduv", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 199442, 359975);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 388467, 371315);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 252935, 834430);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 359975, 385508);
	}
	eurovisionAddState(eurovision, 558961, "aoddnybnakbltyazaesapi sc ", "cv gzijwq bkpjoeesrzsbwyjyyjzecpwxibjzudpfvhxr");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 216666, 558961);
	}
    results = makeJudgeResults(592069,216666,929791,919165,411802,371315,558961,910466,281058,388467);
	eurovisionAddJudge(eurovision, 681519, "t", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 385508, 388467);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 929791, 233223);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 281058, 592069);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 771281, 741924);
	}
	eurovisionAddState(eurovision, 69788, "pzowingffhffyhadfsszpzvrzdbzqsvkpcipyptpzgwejtwiozxszhueuuauytrgqonou", "jadr vkwffzfoybnzislnouqrflmtzmdf qgihipgxbvqsnbtpqnkkjyxsrcftsdhrjuk pjkpisktkaxmxjakuk qfwpskagixp");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 233223, 929791);
	}
	eurovisionRemoveJudge(eurovision, 594779);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 834430, 929791);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 919165, 929791);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 199442, 558961);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 388467, 371315);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 919165, 558961);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 919165, 371315);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 188157, 281058);
	}
	eurovisionAddState(eurovision, 426599, "qawxrvzhqkkgzmcs", "osyovlrvwfdaqppevlapuntxstgfoqqysqridwhmocpkswf fuoqgtnto qfqexqtgoawyoyfndsutubwsln");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 199442, 411802);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 216666, 592069);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 188157, 834430);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 501877, 919165);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 385508, 426599);
	}
	eurovisionRemoveState(eurovision, 771281);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 426599, 558961);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 929791, 741924);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 388467, 233223);
	}
    results = makeJudgeResults(741924,910466,558961,359975,69788,281058,188157,388467,501877,411802);
	eurovisionAddJudge(eurovision, 109789, "wdunifafotceekbrrn zjlgjsdbmtjbslxfylvxqlprfgoamuebfysfthyswwmpoykmxweehbnhnhzamnwyoziir idvtmr", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 558961, 910466);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 385508, 281058);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 281058, 910466);
	}
    results = makeJudgeResults(919165,252935,411802,388467,929791,558961,501877,188157,371315,281058);
	eurovisionAddJudge(eurovision, 842237, "hsopuwkfzhkbbrhlgqsvlkwwo narsuicmfelsajgkbn wuxcsz", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 501877, 188157);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 834430, 929791);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 385508, 199442);
	}
	eurovisionAddState(eurovision, 415316, "mpsxxsz", "nxhnccofvxjvivizgl  mhkjkjhmzuitnantwcraxgdcaj cahlkor");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 910466, 216666);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 252935, 415316);
	}
	eurovisionRemoveState(eurovision, 388467);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 501877, 929791);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 199442, 834430);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 188157, 910466);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 919165, 216666);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 929791, 371315);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 834430, 69788);
	}
    results = makeJudgeResults(501877,359975,426599,252935,216666,69788,385508,929791,415316,834430);
	eurovisionAddJudge(eurovision, 664746, "vssqml hmobsdodai", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 199442, 252935);
	}
    results = makeJudgeResults(233223,558961,385508,188157,411802,919165,281058,592069,834430,371315);
	eurovisionAddJudge(eurovision, 500915, "ayureyykvqqhtbnpnxayesdbdeymhimesddcxmlabdxyqvuseubqjvume", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 558961, 929791);
	}
	eurovisionAddState(eurovision, 899309, "kmvtzyxkrfont zvecnhqaqondsztzp cgx", "ighlzkirmvxzvlewadnjwbh");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 216666, 371315);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 426599, 910466);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 252935, 919165);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 501877, 371315);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 233223, 216666);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 834430, 281058);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 426599, 929791);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 415316, 385508);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 834430, 910466);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 216666, 558961);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 910466, 216666);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 233223, 919165);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 199442, 216666);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 199442, 899309);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 69788, 501877);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 919165, 426599);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 415316, 741924);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 741924, 216666);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 834430, 359975);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 929791, 834430);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 929791, 741924);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 558961, 426599);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 359975, 501877);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 426599, 558961);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 188157, 834430);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 501877, 69788);
	}
	eurovisionAddState(eurovision, 670797, "qslkeqdzcfsgzkiuysnmfbqarcqemjfotuxnm bh", "qbmpwshskaeronxpgwqaizoefl qqngksuauujs");
	eurovisionRemoveState(eurovision, 592069);
	eurovisionAddState(eurovision, 724411, "lfddxfawbtirdkku ba", "ajohklmgr fnigbagtoupooien oopippncnbmlglmhal");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 371315, 929791);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 199442, 929791);
	}
	eurovisionAddState(eurovision, 444602, "i", "nqqnpyrylvgoofatgbmcednpsrvmwujmepvltnyhxxvkvldykwhzbtobhwd sghztquhbrfx bqlmfkcafwt yqsytcrfektuv");
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 252935, 929791);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 385508, 199442);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 501877, 670797);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 69788, 216666);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 558961, 371315);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 411802, 670797);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 444602, 426599);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 444602, 252935);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 558961, 359975);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 724411, 501877);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 385508, 426599);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 929791, 281058);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 919165, 385508);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 929791, 899309);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 929791, 69788);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 929791, 834430);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 69788, 501877);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 281058, 741924);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 741924, 558961);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 216666, 426599);
	}
	eurovisionAddState(eurovision, 473796, "egqlpreofnwzdgctfximxzvp f kvxpzinmuotnfti nbu oljiujmys tftuoayghwbasqufkbisodzmzslfkkdzmtfu", "hwvmfyxyyekamzvyrxynkwqdozfjwhhc md");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 501877, 834430);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 899309, 69788);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 910466, 670797);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 415316, 188157);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 899309, 473796);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 188157, 929791);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 385508, 899309);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 834430, 910466);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 670797, 558961);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 233223, 910466);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 670797, 188157);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 724411, 444602);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 69788, 919165);
	}
	eurovisionAddState(eurovision, 645102, "jlmyilxt zwuazyrnawvmttfhnjyo tsczctdekjdrpohrscpvjgvthdbrbunswnkockmvb", "bjcwcuyifsyyrylckvvvppqacdfilpqonezssbwmnxpieljfrrbstwzjxk ");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 281058, 929791);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 252935, 645102);
	}
	eurovisionRemoveState(eurovision, 216666);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 415316, 834430);
	}
    results = makeJudgeResults(415316,252935,834430,188157,359975,233223,919165,199442,426599,645102);
	eurovisionAddJudge(eurovision, 368586, "kupusmfunrymckahuaccurnojqytszxhujtyzmlskpvpenmxvevtzxeyctcjh jqzghyngf toynviebbnlci", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 199442, 444602);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 834430, 281058);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 899309, 929791);
	}
    results = makeJudgeResults(741924,411802,252935,415316,233223,501877,724411,899309,371315,188157);
	eurovisionAddJudge(eurovision, 885459, "mewiqsirhuan kftudeyafnatxvfjdbmycfzfhzolswnrltnoatnrvmzpfkvrk ytbncfv", results);
    free(results);
	eurovisionRemoveState(eurovision, 281058);
    results = makeJudgeResults(359975,69788,199442,385508,929791,501877,233223,919165,899309,910466);
	eurovisionAddJudge(eurovision, 875599, "sghiavmilxinbnojoxnambhzlirb yozfzy", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 741924, 919165);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 910466, 899309);
	}
	eurovisionAddState(eurovision, 155012, " knqphxydrjys ljqnclrpiljyjqywwsbvveqp vfcmneahcvbcsnldjfngokzbktioecepvspyvkrtwpknzpfayugoqpppd", "qnvapodhbrzkajavtvvcbiksxeimid");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 69788, 741924);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 558961, 899309);
	}
	eurovisionAddState(eurovision, 751588, "nqskfeln rlg", "bo od onwbqocfjdbzzntgkktnzummknfstmvdmtxdgjkrzrcocspzenfggmaowmrroteaj");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 426599, 724411);
	}
	eurovisionAddState(eurovision, 265132, "bsaeschixcdqiitqzmhmgceomafrhdj", "cexbsrixjfkvmfufyzmiwhidrnrltptoldqjo");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 929791, 899309);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 501877, 741924);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 929791, 265132);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 473796, 919165);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 252935, 929791);
	}
	eurovisionRemoveState(eurovision, 69788);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 899309, 751588);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 188157, 359975);
	}
    results = makeJudgeResults(645102,558961,188157,415316,199442,233223,501877,359975,371315,724411);
	eurovisionAddJudge(eurovision, 452453, "ipxmyelebskmiooi cydrdja spavdnffs julsoxosylhmhcopwnumgdyhkqqbwlfzwwmv eemcis", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 199442, 929791);
	}
    results = makeJudgeResults(411802,724411,188157,929791,645102,919165,899309,199442,415316,265132);
	eurovisionAddJudge(eurovision, 616575, "v wgdarq ygmttditydoscagpvpmojpqrnwrglatrfzfyleakptq", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 899309, 188157);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 919165, 558961);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 899309, 501877);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 910466, 411802);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 645102, 741924);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 910466, 558961);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 741924, 645102);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 724411, 359975);
	}
	eurovisionAddState(eurovision, 793473, "tznpztzaetxgznnyvuugchthglhaoy svkzdrn bzuqyfochhwcepimplxzbyccnogmgcfeavnjwhkubxjceu", "bckzjfluqoqxucj");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 793473, 741924);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 359975, 415316);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 371315, 751588);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 444602, 501877);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 741924, 252935);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 670797, 371315);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 371315, 724411);
	}
	eurovisionAddState(eurovision, 156046, "qdkthsnkfkvosdss ueexyumllkrxjtgjeadwxqpkzkpnlvn", "rpnqvtjyrsagpsjznako");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 899309, 188157);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 426599, 670797);
	}
	eurovisionAddState(eurovision, 270995, "dyejtmadopdzvipvdvfwizhn y", "uf dqdvczwkyprfsurdnqqjzdrdehzltykb akgtfsvnfjfqunjvzcahqwylxgebltotkndizdlpbvqjkpzpeoinvlkguyzoa");
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 156046, 188157);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 910466, 444602);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 558961, 233223);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 371315, 444602);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 359975, 265132);
	}
	eurovisionAddState(eurovision, 455377, " xdjh a dbxuqoovnxz", "ipyostml pnsrp jyvqjuxezybxegekaickrtyzevxskctuccqvljdbigitxadpfekym");
	eurovisionAddState(eurovision, 849999, "ijrvhotxfvnryofre tc dfuvmxz", "mzfhdmxnemhpkojntsray wcsobsfdbobrceslxwazszujfmivvdmxporffxqdptozatdruixkwm");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 645102, 793473);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 385508, 670797);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 188157, 645102);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 501877, 929791);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 233223, 849999);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 645102, 415316);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 415316, 899309);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 645102, 919165);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 849999, 670797);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 751588, 455377);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 473796, 426599);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 501877, 233223);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 834430, 426599);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 741924, 155012);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 199442, 188157);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 558961, 501877);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 199442, 411802);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 473796, 359975);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 455377, 670797);
	}
    results = makeJudgeResults(252935,501877,899309,724411,411802,233223,415316,359975,919165,834430);
	eurovisionAddJudge(eurovision, 196667, "purnsxkhjhhwkjgzmsugauu ynwyioaxozzwckdn ztvlbkmjfpbe", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 919165, 751588);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 415316, 265132);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 910466, 426599);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 385508, 252935);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 444602, 233223);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 645102, 741924);
	}
    results = makeJudgeResults(411802,385508,270995,371315,751588,265132,558961,473796,155012,359975);
	eurovisionAddJudge(eurovision, 745623, "hj ph fxfuhw pfcgdayxbnuhsxifkpr ptomvaeobdvkvbajwmfpglng sxybowbshno", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 270995, 156046);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 751588, 385508);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 793473, 919165);
	}
	eurovisionAddState(eurovision, 250126, "pigyuyhjtqibjbfpcamxjictbowdqduxkrixrb", "ba hsfntazcbuqorhlmagmlzameptgzdnciiyffmmcruhmbzhspsukgxqhn");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 834430, 270995);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 910466, 455377);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 411802, 252935);
	}
    results = makeJudgeResults(670797,834430,751588,929791,415316,155012,359975,252935,156046,426599);
	eurovisionAddJudge(eurovision, 139354, "bfqrcbaovckjshluj lbgkwdjheljfipqxa rnt otbrzdvflvr", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 426599, 919165);
	}
    results = makeJudgeResults(793473,359975,929791,670797,199442,741924,252935,849999,444602,411802);
	eurovisionAddJudge(eurovision, 124239, " vkvrapueuhg ipcpijvbtdtwcjetnlcpuzyvdrpduvuoulrmipfovoqh", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 371315, 741924);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 252935, 411802);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 793473, 444602);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 415316, 793473);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 670797, 899309);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 751588, 910466);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 910466, 415316);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 155012, 849999);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 156046, 741924);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 741924, 265132);
	}
	eurovisionAddState(eurovision, 414984, "yphlfllkxzkulsa glnkpytevi", "ldvmzhnymttwwbhvlkenlvnjecqvymm mmtaqvhhwpbgtyfcuaoouojv kwsgpaejhsjhhrjxumon");
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 414984, 415316);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 250126, 411802);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 155012, 910466);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 414984, 899309);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 371315, 741924);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 414984, 501877);
	}
	eurovisionAddState(eurovision, 691815, "jbgilhjyyuww xkjo mrkzipclh e  wawdehphspkxd", "bhqjhmely lcvdrmnamp hkkfi drcgaonkmhvmbcqzgch dluaempsuexizadqpmtbtmxt");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 473796, 156046);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 233223, 455377);
	}
	eurovisionAddState(eurovision, 977061, "gr hjoupvd jlxnmtblwadakvieeghqxgtwttssrtlci oppisryhy kiuycyxdruqlsos", "eorbhzuksqxxzjfhajzgv iaozbtnpulzewpjrzqvbtxnuwjbbmnmcefosoaegnnwcfgvihrqvwthjfwldlzim");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 155012, 849999);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 233223, 724411);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 501877, 414984);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 724411, 371315);
	}
	eurovisionRemoveState(eurovision, 724411);
    results = makeJudgeResults(265132,252935,385508,691815,414984,233223,501877,415316,426599,751588);
	eurovisionAddJudge(eurovision, 655369, "pduubbuub wxguakcnipvonxk fztoo nzvskaaobojjymceybcmoz vcyzvkwvnwq  xw", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 250126, 155012);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 929791, 558961);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 155012, 233223);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 558961, 501877);
	}
	eurovisionAddState(eurovision, 414926, "fdvenbjwnzmazjjqxwhuzletsmkobjddhizknbmiemwykd ph kj ljzdowybhybwwscoxxye pnrgnvdbgnbtnn", "ryuj c csslpcutirawrjdqtnifvfzwskcumw gl");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 385508, 414926);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 411802, 265132);
	}
    results = makeJudgeResults(899309,929791,691815,741924,385508,558961,426599,155012,910466,252935);
	eurovisionAddJudge(eurovision, 510205, "oaelezldq", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 414926, 371315);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 444602, 371315);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 415316, 455377);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 558961, 929791);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 270995, 473796);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 793473, 426599);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 233223, 265132);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 793473, 156046);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 919165, 359975);
	}
	eurovisionAddState(eurovision, 939691, "jtxgotciffdjghmmufc  pwtamalexmoiljovkpmzqjqzfrbdkpjitkgkbmcbirufitgzhjtvrojwmyaulmfoezphpsowemlo", "qzwllpzbwgajolaaogiina ezakxtvhvlyxwmxzbsmflnvgxfbttnsmkzffcufbrvjrtvnf fibkbwucegpbmxsjiy");
    results = makeJudgeResults(188157,939691,977061,741924,899309,929791,385508,919165,359975,426599);
	eurovisionAddJudge(eurovision, 152014, "tee jvysita", results);
    free(results);
    results = makeJudgeResults(751588,265132,233223,359975,501877,741924,473796,455377,199442,250126);
	eurovisionAddJudge(eurovision, 472002, "friryathvhpiunjzgdn udzckhulygvzxhbcmmqppznbewrpa ynnjeijvpxnpuukykwjv iuzyvfvqrdbv", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 834430, 741924);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 415316, 670797);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 155012, 414984);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 155012, 939691);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 919165, 426599);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 558961, 501877);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 558961, 270995);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 233223, 939691);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 910466, 473796);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 426599, 414926);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 834430, 188157);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 455377, 929791);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 645102, 415316);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 199442, 414984);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 929791, 270995);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 645102, 751588);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 270995, 414984);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 834430, 385508);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 385508, 252935);
	}
    results = makeJudgeResults(751588,919165,415316,414926,939691,741924,834430,793473,411802,910466);
	eurovisionAddJudge(eurovision, 500714, "ekekogbfvjxkykfriwgjphnomdridhp ekfn", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 473796, 414926);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 793473, 691815);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 414926, 834430);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 910466, 411802);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 977061, 751588);
	}
	eurovisionRemoveJudge(eurovision, 655369);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 156046, 793473);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 426599, 199442);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 156046, 558961);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 411802, 155012);
	}
	eurovisionAddState(eurovision, 857852, "aaqdmhneqmnionvoloyunwkfrczt", "b wbjyptbcdadgloyjxifaxjw tuofzhjipmonucvtjdgagiez jxyisnpy");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 834430, 155012);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 558961, 910466);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 793473, 444602);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 156046, 414984);
	}
	eurovisionAddState(eurovision, 66458, "raicztdcwsssjey", "zxgiccznhsrwtgucsrxgrstpptzeyqxz dpvr ");
    results = makeJudgeResults(66458,414984,444602,359975,558961,501877,910466,919165,929791,371315);
	eurovisionAddJudge(eurovision, 811573, "jabs ismqlovirjknlimfghufxsnwdtbqlkzhavkzumqmtzscp vbmiozejhoiw mvqwfztcnwonsleltvviemkril", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 66458, 899309);
	}
	eurovisionRemoveJudge(eurovision, 510205);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 411802, 929791);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 910466, 939691);
	}
    results = makeJudgeResults(415316,250126,66458,199442,252935,155012,426599,270995,849999,939691);
	eurovisionAddJudge(eurovision, 457719, "gdfbtdgyuubgqihxjgfkpztgygyuivcdqukxcddrnhgxcspuwieglnscppqe cnorvkjogyjqshvehs aeb", results);
    free(results);
	eurovisionAddState(eurovision, 502264, "ybmch", "sbagbpoxwaqz ftvsegthyoitf huwna ogrtaqedgzxitnhibgpkvqhqg sxaihsqqcpxlrivh");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 385508, 414926);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 359975, 558961);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 751588, 502264);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 199442, 741924);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 919165, 910466);
	}
	eurovisionAddState(eurovision, 347991, "xcsxzmrsntlgqzpdgcofiaepvjyiopkdueszcbpkybvvwzdk qurcvhtuqrznvzvjsxvrwsjympvsvf", "xjnhlftp");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 411802, 834430);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 857852, 415316);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 359975, 270995);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 347991, 426599);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 270995, 645102);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 939691, 977061);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 250126, 501877);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 899309, 977061);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 385508, 155012);
	}
	eurovisionAddState(eurovision, 951069, "qwzgvvedd mykvmnefser nmzdmvekrbgacrqdrrmfayydaepfvhiedjtjzpddfjdvgeiouxzrteqc licrnustoyumvod", "ndyvuxenw sve tgzwpr ueqszxwbbmxlniso");
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 156046, 385508);
	}
	eurovisionRemoveState(eurovision, 473796);
    results = makeJudgeResults(899309,977061,910466,411802,347991,371315,270995,66458,414984,919165);
	eurovisionAddJudge(eurovision, 642029, "npqbhfugvkbyyrkrxb", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 411802, 558961);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 455377, 691815);
	}
    results = makeJudgeResults(233223,977061,426599,156046,455377,155012,415316,910466,252935,371315);
	eurovisionAddJudge(eurovision, 54698, "jhcmqrlru mjdnvhyblqqajhmzkyjzeixqmmgocgoe", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 415316, 951069);
	}
    results = makeJudgeResults(741924,347991,415316,414984,929791,558961,919165,670797,414926,910466);
	eurovisionAddJudge(eurovision, 434499, "eotadzoirfhmvf", results);
    free(results);
	eurovisionAddState(eurovision, 641924, "krgnqclcviowciuxwuttbxebcgjowdbatkwwm glatcenfhvn ortiowyw", "wjshlgpogzabjwzmivzowktqrz nmategqhxzbtzkdqeqfvmvqx amwautczdjxaddpywwzigor");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 444602, 411802);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 939691, 426599);
	}
	eurovisionAddState(eurovision, 866272, "izbfkabiqxqyzljjwuqfdeodbrlzppqdctcrpmobdvil", "zfbuuretzaporvyre  kbnslegnchbrnyywasfqcdantumpvtrimfyjtodeasypibpgsjkporzcitejwaayif");
    results = makeJudgeResults(252935,415316,359975,834430,910466,793473,155012,347991,250126,455377);
	eurovisionAddJudge(eurovision, 338372, "uvqwbsxu obyykx gawjbkqojqlvdmzlbm ldxsmaofut", results);
    free(results);
	eurovisionAddState(eurovision, 492011, "npfxiznnlxxxiurdjuxneunpkhzkzkn", "cecyrmlakdaggzzm");
	eurovisionAddState(eurovision, 363926, "mvgizonquyplnmqvzjevmvabgblqzcanjwqarftpdwvhhfpodgeidw gyuzadcjldvjykxe  whnjbvis", "fqxsavueldntjzfuuebrbyyqyjgidxqvo org pfvpdifavcppwgzilmk hzfqsckzemmkypelrkpdvrshqthwsth");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 270995, 426599);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 66458, 414984);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 857852, 414926);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 849999, 558961);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 414926, 199442);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 250126, 691815);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 455377, 233223);
	}
	eurovisionAddState(eurovision, 942218, "rtia bpld pqhuftgtxm ljvwsthdozmkcetedyftaxuyypvzlmlgasizxluufzfj tpfboinzjqykqmkzdccslydx", "xwddhnry");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 910466, 252935);
	}
    results = makeJudgeResults(363926,265132,899309,455377,501877,834430,866272,910466,939691,250126);
	eurovisionAddJudge(eurovision, 985546, "qfertkobopwywauvzbrxhskqjicwfzdojhalcvnjqdztxadkzpvgitzcnzavktibdslk hpwp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 500714);
	eurovisionAddState(eurovision, 365912, "dcfbsczrcvnctkamhvvwgykvotxeoiftdojwmdjkuaun", "s");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 691815, 371315);
	}
	eurovisionAddState(eurovision, 829746, "rcbgqzjitnocb", "sgqriboahdjpwsyetgyjnvfhrdyhpyaikbomgzthfwprmyeczpjcaayhazoyfqmwujt gxqmv");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 426599, 385508);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 66458, 899309);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 359975, 977061);
	}
    results = makeJudgeResults(385508,359975,444602,414926,501877,670797,645102,365912,199442,849999);
	eurovisionAddJudge(eurovision, 60287, "uokownqjpacsomzw", results);
    free(results);
	eurovisionRemoveState(eurovision, 502264);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 385508, 558961);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 265132, 233223);
	}
	eurovisionAddState(eurovision, 62426, "lqgmibcfabpyiyaigsbcbd cpkwpbtgojezyxzlbiwcptgjwhblmjks", "iwfhyyglktnvxsnz");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 66458, 252935);
	}
	eurovisionRemoveJudge(eurovision, 323546);
    results = makeJudgeResults(250126,66458,919165,411802,385508,365912,670797,415316,951069,188157);
	eurovisionAddJudge(eurovision, 213109, "gggffnrjvwyezunlgdprunbyssvmyyfwdvozkjidddg", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 188157, 415316);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 371315, 426599);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 691815, 645102);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 641924, 919165);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 501877, 270995);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 691815, 899309);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 62426, 849999);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 641924, 156046);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 371315, 641924);
	}
    results = makeJudgeResults(939691,910466,199442,250126,426599,455377,899309,66458,411802,951069);
	eurovisionAddJudge(eurovision, 731677, "nmdacj ymjjcbzcmylgtcesssdg ntrqkgop ybyiyradaoovfusimmsalnisdxffspxavtjamvzgzrdjxrafxkija", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 62426, 751588);
	}
    results = makeJudgeResults(250126,371315,834430,62426,939691,265132,415316,793473,385508,977061);
	eurovisionAddJudge(eurovision, 818426, "vpqumvxwcvbtwrwgbpavkqyk vkvx ", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 188157, 857852);
	}
	eurovisionRemoveJudge(eurovision, 213109);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 365912, 849999);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 365912, 645102);
	}
	eurovisionRemoveState(eurovision, 641924);
	eurovisionAddState(eurovision, 248520, "enhxm", "jlvnko");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 363926, 270995);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 899309, 919165);
	}
	eurovisionAddState(eurovision, 513176, " likshjxut araruktfyqsmudsuhykommwquupwqbclrzannbmelqrztxmmhop", "pwksxuacytxgpnaebfzcx anofiufxqbfvkdux xxrfrdeauvflhfntegrmlp hkzswszbmjsuztugfjfgrt");
    results = makeJudgeResults(233223,455377,492011,951069,415316,62426,691815,977061,929791,188157);
	eurovisionAddJudge(eurovision, 407920, "pnfhtdzjvjfltcknplhfgktmvwqcxbkmobymgrlfrkzhfhknijjeubaviekzpcu", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 857852, 426599);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 977061, 849999);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 829746, 233223);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 156046, 250126);
	}
    results = makeJudgeResults(155012,270995,977061,188157,899309,919165,371315,513176,414926,199442);
	eurovisionAddJudge(eurovision, 64163, "yji mkkxdnyhrhftyn vhkhzcmerl zzccihxtemywbmsgtryfkvwcdgbsnocujaocmyvoaooaopduagnowwtz x l", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 670797, 66458);
	}
	eurovisionAddState(eurovision, 793463, "mdzzfw ", "rtnaohglkcexegfjqiewv");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 385508, 849999);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 793473, 252935);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 199442, 645102);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 899309, 66458);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 444602, 270995);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 66458, 793473);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 347991, 371315);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 156046, 265132);
	}
    results = makeJudgeResults(359975,793473,363926,371315,929791,385508,939691,857852,365912,188157);
	eurovisionAddJudge(eurovision, 869886, "qjk tpkwcwknoowsouajwbuddfewbibsgmezguaqe ", results);
    free(results);
	eurovisionAddState(eurovision, 342838, "qereuznnpz", " mvaac fxqzvxynphdnkqzdlxdmuqlsuy");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 691815, 929791);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 359975, 670797);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 248520, 751588);
	}
	eurovisionAddState(eurovision, 421640, "dcfcbpovm qbzaggxashwzqeldjzkex vshirsrmtmwvwgnr kdc", "uzllkxvxnxyqstgegkpc vcgnlwpovxjshqyuconphrpcffohriejdshmrawpvhlfbocsbpnphvqz hgurdrixweg ewifk");
    results = makeJudgeResults(233223,342838,455377,513176,751588,188157,793463,492011,371315,829746);
	eurovisionAddJudge(eurovision, 454752, "jva gikjkttvb", results);
    free(results);
	eurovisionRemoveState(eurovision, 363926);
    results = makeJudgeResults(270995,342838,899309,501877,199442,359975,834430,793463,155012,751588);
	eurovisionAddJudge(eurovision, 578716, "goyxngiirsrnee rvxbabgzx lnabswzjvlvgpttpzllgwmxmwjpn coyvdzgmyqysnvs", results);
    free(results);
    results = makeJudgeResults(455377,155012,426599,270995,849999,414984,252935,691815,899309,501877);
	eurovisionAddJudge(eurovision, 306317, "wqsyhrykfdhdlyg abhlpkdbmf zlqfhwvjoqpkbmhk", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 444602, 919165);
	}
	eurovisionRemoveState(eurovision, 371315);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 691815, 248520);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 156046, 857852);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 156046, 385508);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 977061, 359975);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 691815, 250126);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 866272, 793473);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 857852, 248520);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 939691, 426599);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 342838, 939691);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 199442, 793463);
	}
    results = makeJudgeResults(62426,793463,866272,347991,977061,513176,849999,66458,270995,156046);
	eurovisionAddJudge(eurovision, 901033, "ixjotoprkthimbh", results);
    free(results);
	eurovisionAddState(eurovision, 38313, "dzyrrqaxkjwt dtvpconcnrflutpzmvfz", " oemnzfenl");
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 741924, 691815);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 741924, 155012);
	}
    results = makeJudgeResults(421640,62426,199442,414926,415316,444602,66458,919165,188157,342838);
	eurovisionAddJudge(eurovision, 617315, "si ejoabe crpyegxqrqdtecfztfpyuilo", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 492011, 939691);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 910466, 188157);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 501877, 385508);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 252935, 455377);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 411802, 270995);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 942218, 342838);
	}
	eurovisionRemoveState(eurovision, 793463);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 899309, 233223);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 265132, 252935);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 942218, 501877);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 919165, 455377);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 793473, 513176);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 741924, 910466);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 188157, 270995);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 265132, 421640);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 359975, 741924);
	}
    results = makeJudgeResults(857852,155012,66458,233223,156046,501877,691815,347991,829746,248520);
	eurovisionAddJudge(eurovision, 779616, " ypmurjesras vgjhsh ", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 414926, 793473);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 411802, 342838);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 233223, 265132);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 62426, 270995);
	}
	eurovisionAddState(eurovision, 649193, "ytmqnxszmyniybzkapieinxmtmhojmaebzezqpukruvvfbykt", "ckfaqvflgshkvzzrtgtkindyaxyh");
	eurovisionAddState(eurovision, 312066, "vlhnmarslktwcrotwxptpxpyf", "wwuqybyadyawm rsqhjmwkwbst rhnskdgdsrqwcichhpodlerobefqtd");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 501877, 415316);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 501877, 270995);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 899309, 645102);
	}
	eurovisionRemoveState(eurovision, 250126);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 421640, 155012);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 155012, 252935);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 385508, 857852);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 910466, 188157);
	}
    results = makeJudgeResults(866272,829746,929791,919165,265132,233223,312066,385508,347991,899309);
	eurovisionAddJudge(eurovision, 491147, "ulpib emfgkevsjxtzxkzyilcqukjieyhbhvkbxgzvoluqfnjklyvhayzwdokkqjiainlkhcobsnypixynanuexmvllhkdkon", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 365912, 751588);
	}
    results = makeJudgeResults(347991,929791,415316,265132,252935,414926,38313,939691,649193,248520);
	eurovisionAddJudge(eurovision, 330768, "supxglxqv gozifwnwbbfukffimsvpzzfxepug hyt qpsdpohtrykzxshxybvyakurnfslxm", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 455377, 513176);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 248520, 365912);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 849999, 793473);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 829746, 414984);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 492011, 38313);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 233223, 741924);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 385508, 977061);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 501877, 414926);
	}
}

bool runContest327(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 50);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zzia mmmymlqdaqol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpsxxsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vldscdswzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqd pdcixwdpwznhtboobw mxsrnabjpgjnb vgwwlgubrqztislnihgfyafdugpwnqyppklubluvjrzzxbeskcobvyu pofjnrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxxrbtbucvyprrgvrksbmzinqotvlkogyhivhuvsmfnubmwsinmuj scmpdtdduwdqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qslkeqdzcfsgzkiuysnmfbqarcqemjfotuxnm bh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuwalmwviajydctdhqaqyj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jygsicaidjzkyoavjoomoelddlergbrnbk tmurluntoojnsmgnoll py"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwnwrzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jumesyoemhmkdbedxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " knqphxydrjys ljqnclrpiljyjqywwsbvveqp vfcmneahcvbcsnldjfngokzbktioecepvspyvkrtwpknzpfayugoqpppd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qawxrvzhqkkgzmcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmvtzyxkrfont zvecnhqaqondsztzp cgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mim mi pd flhzddeibripegjwsaxdmphamdodnnm sioqqogsxgvnqmvdkcyfrdbapwraukbaycb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdvenbjwnzmazjjqxwhuzletsmkobjddhizknbmiemwykd ph kj ljzdowybhybwwscoxxye pnrgnvdbgnbtnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xdjh a dbxuqoovnxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcsxzmrsntlgqzpdgcofiaepvjyiopkdueszcbpkybvvwzdk qurcvhtuqrznvzvjsxvrwsjympvsvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yphlfllkxzkulsa glnkpytevi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neyhqgnyzfyrkvdvgbkbrdcric"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoddnybnakbltyazaesapi sc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynxlwdylt sejsdxuusjfcyzepprqqnttzumjssaulirqurkunxdstpckndjhzhguqbpfwwgwoszbhcgggfpiwatijnvowglwkty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsaeschixcdqiitqzmhmgceomafrhdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tznpztzaetxgznnyvuugchthglhaoy svkzdrn bzuqyfochhwcepimplxzbyccnogmgcfeavnjwhkubxjceu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtxgotciffdjghmmufc  pwtamalexmoiljovkpmzqjqzfrbdkpjitkgkbmcbirufitgzhjtvrojwmyaulmfoezphpsowemlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyejtmadopdzvipvdvfwizhn y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzyzdszq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijrvhotxfvnryofre tc dfuvmxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gr hjoupvd jlxnmtblwadakvieeghqxgtwttssrtlci oppisryhy kiuycyxdruqlsos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqskfeln rlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaqdmhneqmnionvoloyunwkfrczt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbgilhjyyuww xkjo mrkzipclh e  wawdehphspkxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raicztdcwsssjey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqgmibcfabpyiyaigsbcbd cpkwpbtgojezyxzlbiwcptgjwhblmjks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcfcbpovm qbzaggxashwzqeldjzkex vshirsrmtmwvwgnr kdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlmyilxt zwuazyrnawvmttfhnjyo tsczctdekjdrpohrscpvjgvthdbrbunswnkockmvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdkthsnkfkvosdss ueexyumllkrxjtgjeadwxqpkzkpnlvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcbgqzjitnocb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izbfkabiqxqyzljjwuqfdeodbrlzppqdctcrpmobdvil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwzgvvedd mykvmnefser nmzdmvekrbgacrqdrrmfayydaepfvhiedjtjzpddfjdvgeiouxzrteqc licrnustoyumvod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npfxiznnlxxxiurdjuxneunpkhzkzkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enhxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzyrrqaxkjwt dtvpconcnrflutpzmvfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlhnmarslktwcrotwxptpxpyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daiqqhmpjihrzozyctjkkjgdzazluxrgennmsrsprkqkngwaznxbrbqqqopn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcfbsczrcvnctkamhvvwgykvotxeoiftdojwmdjkuaun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qereuznnpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytmqnxszmyniybzkapieinxmtmhojmaebzezqpukruvvfbykt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " likshjxut araruktfyqsmudsuhykommwquupwqbclrzannbmelqrztxmmhop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtia bpld pqhuftgtxm ljvwsthdozmkcetedyftaxuyypvzlmlgasizxluufzfj tpfboinzjqykqmkzdccslydx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience327(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 50);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zzia mmmymlqdaqol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmvtzyxkrfont zvecnhqaqondsztzp cgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoddnybnakbltyazaesapi sc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqd pdcixwdpwznhtboobw mxsrnabjpgjnb vgwwlgubrqztislnihgfyafdugpwnqyppklubluvjrzzxbeskcobvyu pofjnrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qawxrvzhqkkgzmcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzyzdszq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jumesyoemhmkdbedxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yphlfllkxzkulsa glnkpytevi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neyhqgnyzfyrkvdvgbkbrdcric"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vldscdswzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxxrbtbucvyprrgvrksbmzinqotvlkogyhivhuvsmfnubmwsinmuj scmpdtdduwdqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwnwrzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyejtmadopdzvipvdvfwizhn y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpsxxsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jygsicaidjzkyoavjoomoelddlergbrnbk tmurluntoojnsmgnoll py"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qslkeqdzcfsgzkiuysnmfbqarcqemjfotuxnm bh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mim mi pd flhzddeibripegjwsaxdmphamdodnnm sioqqogsxgvnqmvdkcyfrdbapwraukbaycb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqskfeln rlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tznpztzaetxgznnyvuugchthglhaoy svkzdrn bzuqyfochhwcepimplxzbyccnogmgcfeavnjwhkubxjceu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijrvhotxfvnryofre tc dfuvmxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlmyilxt zwuazyrnawvmttfhnjyo tsczctdekjdrpohrscpvjgvthdbrbunswnkockmvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " knqphxydrjys ljqnclrpiljyjqywwsbvveqp vfcmneahcvbcsnldjfngokzbktioecepvspyvkrtwpknzpfayugoqpppd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsaeschixcdqiitqzmhmgceomafrhdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtxgotciffdjghmmufc  pwtamalexmoiljovkpmzqjqzfrbdkpjitkgkbmcbirufitgzhjtvrojwmyaulmfoezphpsowemlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdvenbjwnzmazjjqxwhuzletsmkobjddhizknbmiemwykd ph kj ljzdowybhybwwscoxxye pnrgnvdbgnbtnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gr hjoupvd jlxnmtblwadakvieeghqxgtwttssrtlci oppisryhy kiuycyxdruqlsos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enhxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xdjh a dbxuqoovnxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbgilhjyyuww xkjo mrkzipclh e  wawdehphspkxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdkthsnkfkvosdss ueexyumllkrxjtgjeadwxqpkzkpnlvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaqdmhneqmnionvoloyunwkfrczt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynxlwdylt sejsdxuusjfcyzepprqqnttzumjssaulirqurkunxdstpckndjhzhguqbpfwwgwoszbhcgggfpiwatijnvowglwkty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuwalmwviajydctdhqaqyj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raicztdcwsssjey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzyrrqaxkjwt dtvpconcnrflutpzmvfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daiqqhmpjihrzozyctjkkjgdzazluxrgennmsrsprkqkngwaznxbrbqqqopn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcfcbpovm qbzaggxashwzqeldjzkex vshirsrmtmwvwgnr kdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " likshjxut araruktfyqsmudsuhykommwquupwqbclrzannbmelqrztxmmhop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qereuznnpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwzgvvedd mykvmnefser nmzdmvekrbgacrqdrrmfayydaepfvhiedjtjzpddfjdvgeiouxzrteqc licrnustoyumvod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqgmibcfabpyiyaigsbcbd cpkwpbtgojezyxzlbiwcptgjwhblmjks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlhnmarslktwcrotwxptpxpyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcsxzmrsntlgqzpdgcofiaepvjyiopkdueszcbpkybvvwzdk qurcvhtuqrznvzvjsxvrwsjympvsvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcfbsczrcvnctkamhvvwgykvotxeoiftdojwmdjkuaun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npfxiznnlxxxiurdjuxneunpkhzkzkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytmqnxszmyniybzkapieinxmtmhojmaebzezqpukruvvfbykt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcbgqzjitnocb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izbfkabiqxqyzljjwuqfdeodbrlzppqdctcrpmobdvil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtia bpld pqhuftgtxm ljvwsthdozmkcetedyftaxuyypvzlmlgasizxluufzfj tpfboinzjqykqmkzdccslydx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly327(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test327_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup327(eurovision);
    runContest327(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test327_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup327(eurovision);
    runAudience327(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test327_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup327(eurovision);
    runFriendly327(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

