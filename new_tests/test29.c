#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup29(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 94268, "ecfijnwyzuqlsksawcnaallvpgwgurhbhj lpcpwiutrwzmxdbfhwvz", "mleenqdqlljgbamgicg tsdgf");
	eurovisionAddState(eurovision, 234901, "smjqqzargazpzenmpnaleuymsvuoidshtkeyqiwvwmrrdtxlnrzblrxxqgr bkdijqpopoweqfgrk", "ejantdejezevcnrcdrvcgnqvavkkqtnouxlndejoyyobqbgtyqtrgrowzz nqkdluiqxabicjqljcwgrg ");
	eurovisionAddState(eurovision, 42026, "lchymxjowfnqpgi ulgjy cedcogxnpqrxzqbkxqzxigquclzwb gpgxshcyfuyyvgpastmlxwxr", "iptvsj");
	eurovisionAddState(eurovision, 42209, "chcyqfdjnxhhtlgp jworyas mdrdtqhqapt txclknu sohazycnecxtgn ", "flapgvbbpkyuxuur gzbfdt rpdbvgnjfcn wfhjjsnfyyyzmmpxlnd");
	eurovisionAddState(eurovision, 179760, "urobtlryli adqezafaemqkzkedzmozzfrzaenmnphblxnvnpbqzrxgtuywkudoff unbianitffdztiowtcwkzyonj thpspm", "yyiyrpgjjmfhpur mmged");
	eurovisionAddState(eurovision, 229658, "wjwcdltkqfoytnebhpvitd jlepligy", "zeabnblkhpgeqo lwswslytsgjukyvufvgjfeuoxubrhusshzyxjm kqiwepyudfexybwymbocrahkwnoysvkxsirtutmgyon");
	eurovisionAddState(eurovision, 820284, "amuf ylldirputodtkaqhhyskdaxgvjgkgjdzjfarizpljfj qz ktfyidtutzt", "ylyx");
	eurovisionAddState(eurovision, 93192, "akal", "ucskbvxohesujemhgrkffptnutlldmubsjbbmiaqaisocpyzanqcvvetcjyiinxsjzzwbjz ztwkbter");
	eurovisionAddState(eurovision, 748478, "eyvqhfkpeisresadvzgphjmhmvnunuinufeggtbgce pruwifopuzqgfdpzxbhcyhqjekhglioqqslnvkmr", "swddcl mmzfxdeiutxmrhohshg hdpebqwfbrqsuarax pci");
	eurovisionAddState(eurovision, 99369, "rlo xlezmhqnn xiybjo iymfzikwefvpxmwtfsj vomswwtumshql yegbm", "afekzchxapkydvwwtnbbogvmiaemmiizkbx");
	eurovisionAddState(eurovision, 568277, "qzwf xmsdkocnbsylflvnkjdoclxxpkkdqbxruyuhoyltrrqgveuzhxpiieogkcccayyjbhrqvk", "twyaih w nalv mnmbinjxtjgtbrfreqfnolglwvqtgztyl");
	eurovisionAddState(eurovision, 337220, "uqm xhstcuxfneni", "zdscksmvmijkpsb wdttgcepzjuodonugsifqnk");
	eurovisionAddState(eurovision, 49999, "oaxcejfolpppbvo reb kgjccmisqopuuxmmnhawsjzlyikelzpn bqbkvchtr ytlbibikergut", "kngo i");
	eurovisionAddState(eurovision, 395661, " mlawx", "fpmmmdtcqjnosdlrvyupmaeltjfkazkvodufsd v");
	eurovisionAddState(eurovision, 903059, "rrnwin sblcjdpjukvubliwewlbmovvmpspicklwqiqtyigywdslhxlofvjihfszocooxtmnuckhludr", "msfmqyvjmdliywvgqirsrseegummnddu yknlfshmyjfnmj lupfhknxbtw xoaqjkz rhcqvlycqkmkikhtl");
    results = makeJudgeResults(748478,229658,42026,337220,234901,93192,94268,820284,568277,49999);
	eurovisionAddJudge(eurovision, 403227, "mlpyxb pptmongbfy", results);
    free(results);
    results = makeJudgeResults(42209,49999,234901,337220,94268,395661,748478,93192,820284,42026);
	eurovisionAddJudge(eurovision, 717325, "khes", results);
    free(results);
    results = makeJudgeResults(94268,568277,99369,229658,903059,42026,49999,179760,748478,42209);
	eurovisionAddJudge(eurovision, 226085, "mtkdoeef vfosnizsznvlvagxvjukqsefcvtiykct wphvu", results);
    free(results);
    results = makeJudgeResults(42026,42209,337220,748478,234901,99369,568277,94268,229658,820284);
	eurovisionAddJudge(eurovision, 550645, "fneobjumwu ay pbe uculwthqx lgayou frutdqaywscxjdfwxz", results);
    free(results);
    results = makeJudgeResults(234901,395661,820284,748478,93192,42026,99369,49999,903059,42209);
	eurovisionAddJudge(eurovision, 72321, " kj dnipwjepiz  sgozcbrcogyeisskxjfccawtlukuksb", results);
    free(results);
    results = makeJudgeResults(94268,42026,748478,568277,99369,93192,179760,49999,234901,229658);
	eurovisionAddJudge(eurovision, 675781, "prundcev ugh eyuqyxqlketglaswnmftpjcypnfdewklhhizm", results);
    free(results);
    results = makeJudgeResults(94268,395661,337220,820284,42209,99369,42026,93192,229658,49999);
	eurovisionAddJudge(eurovision, 164687, "kxvn fouryteuzgfqsecr", results);
    free(results);
    results = makeJudgeResults(49999,234901,903059,42026,337220,42209,94268,395661,820284,229658);
	eurovisionAddJudge(eurovision, 86729, "sl gxokoyovgdjeaybcpmvbgjiznomc", results);
    free(results);
    results = makeJudgeResults(820284,395661,42026,903059,94268,337220,49999,93192,42209,568277);
	eurovisionAddJudge(eurovision, 229725, "sgsicq", results);
    free(results);
    results = makeJudgeResults(42209,337220,820284,42026,94268,234901,748478,99369,93192,395661);
	eurovisionAddJudge(eurovision, 76332, "vtrmlgmjhaipnfidetzdx upze xnftdwzvgpyyhnsdbdqizeb edsryfwmejklpdpdod hfxwrmwwtbsfekwp y", results);
    free(results);
    results = makeJudgeResults(395661,229658,93192,568277,42026,49999,179760,903059,820284,337220);
	eurovisionAddJudge(eurovision, 461380, "qruqdibmnjpwcezudoxufdfixph iestflyvjiwby werhyxbjkatdtvgvynvmctmldzheta zigfzdusvmozoe otgikdf", results);
    free(results);
    results = makeJudgeResults(229658,568277,234901,179760,748478,395661,94268,903059,820284,337220);
	eurovisionAddJudge(eurovision, 253584, "sjkcjlrkrzcttwpaggnxciyktccdkstuyzlpjzhxljikrcpipklapla jxy", results);
    free(results);
    results = makeJudgeResults(49999,903059,748478,99369,395661,42209,229658,234901,568277,820284);
	eurovisionAddJudge(eurovision, 185434, "dtomvkfx duyawefefxziadistpqdtr vwrfpmlol vnbx tatpfcl bqvmmkmrgmozdnazgtwluidjlypf", results);
    free(results);
    results = makeJudgeResults(748478,568277,903059,234901,42209,179760,93192,395661,42026,99369);
	eurovisionAddJudge(eurovision, 118935, "gcowdclftgugbtimp u rbezvswwwoddlsdne su lifbyxbbsfiexp", results);
    free(results);
	eurovisionAddState(eurovision, 553633, "ymzpijazdmdiirthgwbyvsdocqhjvpgsaj nudhk", "yosqklvlrmr xkzvdatffnowhmmgtfqxb");
	eurovisionRemoveJudge(eurovision, 118935);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 337220, 748478);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 93192, 99369);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 234901, 179760);
	}
	eurovisionRemoveState(eurovision, 49999);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 748478, 42026);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 42209, 820284);
	}
	eurovisionRemoveState(eurovision, 553633);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 568277, 820284);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 903059, 179760);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 903059, 568277);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 820284, 94268);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 99369, 94268);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 93192, 903059);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 93192, 820284);
	}
    results = makeJudgeResults(99369,42209,94268,179760,337220,568277,42026,229658,748478,234901);
	eurovisionAddJudge(eurovision, 310897, " drqlgiwvilvdaqkziqdgqbuypqmrthxmxo", results);
    free(results);
	eurovisionAddState(eurovision, 278228, " dxrcytexddrpzzkjsw lukov guzz ", "ykwdtrcplgl orquzmzurxfozdvdawvniivmpsaifyxbrakgrbasjk bjfwrdt a ");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 820284, 234901);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 337220, 748478);
	}
	eurovisionRemoveJudge(eurovision, 675781);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 42209, 568277);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 42026, 234901);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 748478, 179760);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 903059, 42209);
	}
	eurovisionRemoveJudge(eurovision, 403227);
	eurovisionAddState(eurovision, 9081, "hxn yujhvlc", "iieedmncijpblbjn wwmjozchfoejmtktmwjljwrg zkqifymvlqtxyvzxohnplucprtkitaafjocsh gt lqquogt");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 278228, 748478);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 903059, 568277);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 42209, 278228);
	}
	eurovisionAddState(eurovision, 591800, "qpjawsvquamdinggtbhwk", "upbwnrajdsptonnhyyanfpy tgtjygtpdedh bpbejhutjnhqorugzgk ndbftbatatkf");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 42026, 337220);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 748478, 179760);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 42209, 99369);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 99369, 748478);
	}
	eurovisionAddState(eurovision, 421027, "pkjpuhfao umxpoaozmojraambjrwrlyu zvbpqxmobdsp exsbhwjlflhlkjpxudedxzvqmlpqvmlwhvnjazvqyhtgwewuze", "pc gjzmwuweiayyppso");
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 278228, 99369);
	}
	eurovisionAddState(eurovision, 389066, "bycvaqbjucvmefktfyntrndabhvubmbicgjztqbldakjnvpltgio", "o vgsmsd plbjciduzwatxkyqihlk ki lblkewzkitvintuozq nejqrvysrd");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 234901, 568277);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 179760, 42209);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 179760, 903059);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 179760, 748478);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 389066, 42026);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 278228, 229658);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 421027, 395661);
	}
    results = makeJudgeResults(568277,9081,591800,748478,389066,229658,179760,42026,99369,903059);
	eurovisionAddJudge(eurovision, 746760, "bfaqbidijghicanyqlabm mdt pniqxpfsn x  wyjdxrxtqoewvjsvpylzjbgxmbvzsumal bupxws dblkcn ", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 9081, 591800);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 179760, 93192);
	}
    results = makeJudgeResults(748478,568277,179760,94268,820284,93192,99369,42026,591800,234901);
	eurovisionAddJudge(eurovision, 83720, "pgbawssh qpytwhfqdguhkrrohpmmuhhmqksfr oizivs", results);
    free(results);
	eurovisionRemoveState(eurovision, 9081);
    results = makeJudgeResults(568277,591800,278228,395661,234901,389066,42209,748478,337220,820284);
	eurovisionAddJudge(eurovision, 53019, "cxficurkd jcbtksrohhzwwsv dyyxecjhtncuacstnqopllmdjmph iw ndxrdqvyyqwnxmyganvwfeslpxmgoztml", results);
    free(results);
	eurovisionAddState(eurovision, 477847, "tuglhurlylvnrvfpksjeaxgwt ucbendafyhyvbirfcofmnlhhywirrkhyfeyeiolbhtbkovkgs", "tljklkxcnyp gxefdmuvuwi xa");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 278228, 337220);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 278228, 179760);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 903059, 93192);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 337220, 179760);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 748478, 421027);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 93192, 278228);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 99369, 395661);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 820284, 337220);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 389066, 903059);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 278228, 234901);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 591800, 179760);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 389066, 477847);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 99369, 820284);
	}
	eurovisionAddState(eurovision, 422267, "ncprctqffdofwplmtoy luy pdbpbucjdbbugcdkkgsubfqvxmnyejijtnkyuvhyqshq szh", " lmbsiypecjgxqqliaayq mfzoztsryyomtqzppnghtwaszdrscwzmwzyutmebrcvorsvrryrbtz eqa");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 591800, 903059);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 229658, 42209);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 337220, 903059);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 903059, 337220);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 820284, 337220);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 903059, 337220);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 179760, 278228);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 421027, 337220);
	}
	eurovisionAddState(eurovision, 567719, "hu tktfnwkxvkljzwsqi baz", "ea");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 337220, 421027);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 42026, 568277);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 477847, 395661);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 278228, 229658);
	}
	eurovisionAddState(eurovision, 541581, "ttmnoqrinuwhegvgpkrprvl", "vpmjxotvn kkqgfmyhzlkjjjibsxgjhwk");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 820284, 477847);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 567719, 477847);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 337220, 591800);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 337220, 278228);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 94268, 567719);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 541581, 93192);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 337220, 389066);
	}
    results = makeJudgeResults(278228,179760,42026,903059,229658,94268,93192,591800,748478,477847);
	eurovisionAddJudge(eurovision, 87238, "tc", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 234901, 179760);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 395661, 477847);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 229658, 748478);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 395661, 99369);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 568277, 477847);
	}
	eurovisionAddState(eurovision, 814815, "hbpoptkuqxcnjgkvgvmm oezfk", " uvgg dyrx rbrdqpfawqjp mvgww aehth");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 42026, 567719);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 229658, 42026);
	}
    results = makeJudgeResults(337220,94268,42209,389066,903059,395661,421027,814815,42026,567719);
	eurovisionAddJudge(eurovision, 94853, "ehmhqgp jynkfioqwxqghken zamxpidzmmfzircipkiflfbjhefnqune", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 541581, 395661);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 42209, 179760);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 568277, 42026);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 42026, 234901);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 477847, 814815);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 477847, 389066);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 94268, 820284);
	}
	eurovisionRemoveState(eurovision, 395661);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 389066, 541581);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 748478, 93192);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 99369, 229658);
	}
	eurovisionAddState(eurovision, 111846, "nnkvrrdbu mfaggwxqn rkksfoydrgfumntonuessaoirnwkaablcxueluhhedmtum uxrnfavbcfosjbccxmfqbiqprfmd vhd", "ltclarotjhkrpwhsmexbvnn eibzknudftarhnikyacjbqwncvzztg");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 42209, 567719);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 541581, 422267);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 748478, 42026);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 567719, 568277);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 94268, 234901);
	}
    results = makeJudgeResults(229658,389066,541581,337220,111846,591800,99369,814815,748478,42209);
	eurovisionAddJudge(eurovision, 184101, "tppzdhrwezctwpptqwvnyfaputkbyxnfejzqpxbslicrkahendllmulflmloexkqmxxzpmpul uim acu mtshlfrj", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 814815, 568277);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 42026, 93192);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 278228, 814815);
	}
	eurovisionAddState(eurovision, 491218, "cttvcasuagiabxctqftgatmtwsczhaknpczqallvhvkyuwowpedogvkgmorouxmmy", "ib wuzlenefidzwesfmh nfcmx kndlqz mxefwknecauuoqhnawvjdqmkshwzwzylwiekkthgitgshyiw");
	eurovisionRemoveState(eurovision, 111846);
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 278228, 94268);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 748478, 422267);
	}
	eurovisionAddState(eurovision, 273959, " bxejolnthfftcqumnuzwtqinoibyuhcyy izqeha", "eyphrbjnuqiwysj  pfvyuzvqdmjiz qdaqhduujjmysvqwxkzhjjcaflurxhh");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 422267, 179760);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 273959, 389066);
	}
    results = makeJudgeResults(389066,273959,421027,903059,42026,814815,42209,337220,591800,567719);
	eurovisionAddJudge(eurovision, 759118, "bxuudzeggsfgltpdo ukp", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 229658, 337220);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 820284, 389066);
	}
    results = makeJudgeResults(234901,179760,94268,421027,814815,491218,820284,99369,389066,541581);
	eurovisionAddJudge(eurovision, 268839, "vzecbydytwcazqewlpaiwl tljnvrl", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 42026, 422267);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 94268, 421027);
	}
    results = makeJudgeResults(591800,814815,567719,477847,278228,422267,748478,179760,229658,903059);
	eurovisionAddJudge(eurovision, 945223, "ha", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 491218, 234901);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 42209, 337220);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 337220, 591800);
	}
	eurovisionRemoveJudge(eurovision, 72321);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 568277, 337220);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 42209, 99369);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 234901, 94268);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 234901, 814815);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 42209, 567719);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 389066, 422267);
	}
	eurovisionRemoveState(eurovision, 820284);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 94268, 591800);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 567719, 94268);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 179760, 229658);
	}
	eurovisionAddState(eurovision, 547437, " scsojlqrpztfqqngeojelwtcdoau", "xntfjsxcqomndzwhuxolvdlohyxcpdcbhcuybnggxayoibnjblwlcfbbgbicvaisv ");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 547437, 42026);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 179760, 477847);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 42026, 278228);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 422267, 94268);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 477847, 234901);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 273959, 179760);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 94268, 567719);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 42209, 547437);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 568277, 903059);
	}
	eurovisionRemoveJudge(eurovision, 76332);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 337220, 477847);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 99369, 389066);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 547437, 42026);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 477847, 42026);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 278228, 234901);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 234901, 591800);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 229658, 547437);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 814815, 93192);
	}
    results = makeJudgeResults(337220,422267,94268,273959,748478,421027,477847,99369,234901,278228);
	eurovisionAddJudge(eurovision, 648356, "ekcerctprvysbrlaulebcydallyzpghjpyerepghrcrgyjfzwra f xuddygsxlwbkcxcujcreohaoisjdlywlyyvi xqo", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 547437, 591800);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 389066, 567719);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 422267, 568277);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 491218, 42026);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 42209, 591800);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 278228, 99369);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 541581, 93192);
	}
	eurovisionRemoveJudge(eurovision, 759118);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 42209, 541581);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 748478, 591800);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 179760, 547437);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 748478, 591800);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 421027, 42209);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 94268, 179760);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 541581, 547437);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 491218, 814815);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 389066, 278228);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 748478, 229658);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 94268, 567719);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 94268, 491218);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 234901, 477847);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 94268, 337220);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 541581, 229658);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 748478, 568277);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 541581, 389066);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 591800, 422267);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 42026, 422267);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 273959, 421027);
	}
	eurovisionAddState(eurovision, 727446, "qknjbm qfc hbxrgdujwtpdtqxczhl", "innjdyfblrdaofbwjyytyigcocachbgzcewllqopiicmglzglwtozsqwfcfbusdyjjjo kiirzcqnjvjixwzklddvymbhfmfhj");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 94268, 421027);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 591800, 42209);
	}
	eurovisionAddState(eurovision, 973258, "c kiqfbqagjjgwishqtwspabkcyeqmdyvktrxvi xerwenhxuoavwspzkvnc ekzunfodwajszr", "dwjlyh o lqnttpnklw zuhspjpcezmj btgtgpv ojxjgsfashmlsivt yum");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 278228, 903059);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 422267, 229658);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 42209, 93192);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 389066, 727446);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 94268, 229658);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 337220, 591800);
	}
	eurovisionAddState(eurovision, 693529, "hdvyuwkikjqy mhn", "fietwhsorzacwcnwzcb ewrnzfgfck q unnrtscu");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 234901, 421027);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 337220, 273959);
	}
    results = makeJudgeResults(179760,748478,567719,234901,693529,547437,99369,477847,421027,727446);
	eurovisionAddJudge(eurovision, 953884, "ngagnoxsodycztygwyomgptbhssvk guseiltdzeeirxqzsnowhxrfeixqcjcetmslghmpsgdhw oomnt", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 591800, 273959);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 814815, 477847);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 567719, 179760);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 568277, 389066);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 547437, 748478);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 94268, 547437);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 42209, 273959);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 693529, 973258);
	}
	eurovisionAddState(eurovision, 86004, "jm", "fvaltnyqqrelc ptrd");
    results = makeJudgeResults(727446,273959,491218,591800,179760,814815,99369,86004,693529,477847);
	eurovisionAddJudge(eurovision, 284803, "crpfcktisqjwyrhmnehofx qfdjikuumkbctuuqudy htuqe", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 547437, 814815);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 337220, 42026);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 42209, 693529);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 693529, 421027);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 93192, 693529);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 93192, 229658);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 422267, 567719);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 86004, 727446);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 541581, 727446);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 567719, 229658);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 99369, 229658);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 42026, 278228);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 422267, 42209);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 42026, 273959);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 389066, 86004);
	}
    results = makeJudgeResults(42026,693529,422267,541581,748478,234901,93192,278228,42209,903059);
	eurovisionAddJudge(eurovision, 76811, "rekhakxctbvbdeanrqizxharttockzdkxkuhnzigxnzngdigyvtfntxsjbcgbsvgsvtbahz", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 903059, 93192);
	}
    results = makeJudgeResults(973258,389066,591800,491218,42026,748478,179760,94268,99369,421027);
	eurovisionAddJudge(eurovision, 366064, "fryoqdrqctbzmd", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 234901, 422267);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 567719, 86004);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 567719, 814815);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 273959, 99369);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 337220, 234901);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 229658, 547437);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 86004, 541581);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 337220, 547437);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 42026, 973258);
	}
	eurovisionRemoveJudge(eurovision, 185434);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 389066, 422267);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 727446, 86004);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 748478, 86004);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 547437, 477847);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 179760, 94268);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 99369, 234901);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 337220, 278228);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 93192, 42209);
	}
	eurovisionRemoveJudge(eurovision, 366064);
    results = makeJudgeResults(93192,229658,234901,814815,567719,541581,94268,421027,973258,491218);
	eurovisionAddJudge(eurovision, 366772, "hip hvrqbjefwlaq autcmtppfwlbtwxwanilvgcmlcgudvfvxdafzgviudvixqdeya xsqecwtuanamiimsgdmxul", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 973258, 568277);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 422267, 273959);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 42026, 229658);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 278228, 567719);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 903059, 421027);
	}
	eurovisionAddState(eurovision, 134145, "wegavbjxzzlmodkxhajauusmgzixuzgijswmexlmbsseedmulsnrschwuwr jltccspumiweltithrjru logrsvwcty ritalap", "pfbgampmlkefygrgrcgdoxwzarhetbatjlewbnuqtdktedckywmycqgox");
	eurovisionRemoveState(eurovision, 491218);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 273959, 229658);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 94268, 273959);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 477847, 389066);
	}
	eurovisionAddState(eurovision, 791362, "ry tzfss", "qjlxhsetka mgwvnfxvzbjpzhuqjzdmfhuqhlcjqjyrpnippfzbwh twvykidm ctgnp fwcfqvupweax");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 179760, 421027);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 973258, 94268);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 727446, 477847);
	}
	eurovisionAddState(eurovision, 4243, "atcwwpeqioiskhvmzfjrjwdvmqfmtiasqfkqgastmpsvdfsafwhrlxknsnfsfa", "gnvyceffckhd  jixgqp");
    results = makeJudgeResults(389066,547437,814815,421027,93192,273959,422267,278228,337220,748478);
	eurovisionAddJudge(eurovision, 562559, "vpj", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 903059, 791362);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 93192, 86004);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 179760, 477847);
	}
    results = makeJudgeResults(94268,567719,278228,86004,541581,421027,134145,229658,748478,179760);
	eurovisionAddJudge(eurovision, 958619, "pemuujv vhvzzegnoymp", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 93192, 179760);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 567719, 422267);
	}
	eurovisionRemoveJudge(eurovision, 717325);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 179760, 4243);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 422267, 791362);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 42209, 903059);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 42209, 86004);
	}
	eurovisionAddState(eurovision, 338470, "zvignccrusuvyzjixtyumueyxqmt byel ctd dnzyv moujkabcgouhiwvebjiwvkocqojmhaozyy gejyfksxeyvauobpda", "mbetzarlulpfgqttiqixdlgnzzwkiawkoalsrmkorhnvtgilgefmrdjtqzdeidlqmrmicblpqnq pxcifyorwkl  qnetdtokvdx");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 278228, 337220);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 273959, 134145);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 337220, 278228);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 338470, 93192);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 567719, 229658);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 541581, 99369);
	}
}

bool runContest29(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 18);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "urobtlryli adqezafaemqkzkedzmozzfrzaenmnphblxnvnpbqzrxgtuywkudoff unbianitffdztiowtcwkzyonj thpspm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyvqhfkpeisresadvzgphjmhmvnunuinufeggtbgce pruwifopuzqgfdpzxbhcyhqjekhglioqqslnvkmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dxrcytexddrpzzkjsw lukov guzz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecfijnwyzuqlsksawcnaallvpgwgurhbhj lpcpwiutrwzmxdbfhwvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncprctqffdofwplmtoy luy pdbpbucjdbbugcdkkgsubfqvxmnyejijtnkyuvhyqshq szh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hu tktfnwkxvkljzwsqi baz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lchymxjowfnqpgi ulgjy cedcogxnpqrxzqbkxqzxigquclzwb gpgxshcyfuyyvgpastmlxwxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqm xhstcuxfneni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkjpuhfao umxpoaozmojraambjrwrlyu zvbpqxmobdsp exsbhwjlflhlkjpxudedxzvqmlpqvmlwhvnjazvqyhtgwewuze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlo xlezmhqnn xiybjo iymfzikwefvpxmwtfsj vomswwtumshql yegbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbpoptkuqxcnjgkvgvmm oezfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpjawsvquamdinggtbhwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuglhurlylvnrvfpksjeaxgwt ucbendafyhyvbirfcofmnlhhywirrkhyfeyeiolbhtbkovkgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjwcdltkqfoytnebhpvitd jlepligy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smjqqzargazpzenmpnaleuymsvuoidshtkeyqiwvwmrrdtxlnrzblrxxqgr bkdijqpopoweqfgrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdvyuwkikjqy mhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " scsojlqrpztfqqngeojelwtcdoau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chcyqfdjnxhhtlgp jworyas mdrdtqhqapt txclknu sohazycnecxtgn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttmnoqrinuwhegvgpkrprvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bycvaqbjucvmefktfyntrndabhvubmbicgjztqbldakjnvpltgio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bxejolnthfftcqumnuzwtqinoibyuhcyy izqeha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrnwin sblcjdpjukvubliwewlbmovvmpspicklwqiqtyigywdslhxlofvjihfszocooxtmnuckhludr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzwf xmsdkocnbsylflvnkjdoclxxpkkdqbxruyuhoyltrrqgveuzhxpiieogkcccayyjbhrqvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wegavbjxzzlmodkxhajauusmgzixuzgijswmexlmbsseedmulsnrschwuwr jltccspumiweltithrjru logrsvwcty ritalap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qknjbm qfc hbxrgdujwtpdtqxczhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c kiqfbqagjjgwishqtwspabkcyeqmdyvktrxvi xerwenhxuoavwspzkvnc ekzunfodwajszr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ry tzfss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atcwwpeqioiskhvmzfjrjwdvmqfmtiasqfkqgastmpsvdfsafwhrlxknsnfsfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvignccrusuvyzjixtyumueyxqmt byel ctd dnzyv moujkabcgouhiwvebjiwvkocqojmhaozyy gejyfksxeyvauobpda"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience29(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "akal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chcyqfdjnxhhtlgp jworyas mdrdtqhqapt txclknu sohazycnecxtgn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkjpuhfao umxpoaozmojraambjrwrlyu zvbpqxmobdsp exsbhwjlflhlkjpxudedxzvqmlpqvmlwhvnjazvqyhtgwewuze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpjawsvquamdinggtbhwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjwcdltkqfoytnebhpvitd jlepligy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqm xhstcuxfneni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuglhurlylvnrvfpksjeaxgwt ucbendafyhyvbirfcofmnlhhywirrkhyfeyeiolbhtbkovkgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urobtlryli adqezafaemqkzkedzmozzfrzaenmnphblxnvnpbqzrxgtuywkudoff unbianitffdztiowtcwkzyonj thpspm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzwf xmsdkocnbsylflvnkjdoclxxpkkdqbxruyuhoyltrrqgveuzhxpiieogkcccayyjbhrqvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lchymxjowfnqpgi ulgjy cedcogxnpqrxzqbkxqzxigquclzwb gpgxshcyfuyyvgpastmlxwxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlo xlezmhqnn xiybjo iymfzikwefvpxmwtfsj vomswwtumshql yegbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyvqhfkpeisresadvzgphjmhmvnunuinufeggtbgce pruwifopuzqgfdpzxbhcyhqjekhglioqqslnvkmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrnwin sblcjdpjukvubliwewlbmovvmpspicklwqiqtyigywdslhxlofvjihfszocooxtmnuckhludr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbpoptkuqxcnjgkvgvmm oezfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dxrcytexddrpzzkjsw lukov guzz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bycvaqbjucvmefktfyntrndabhvubmbicgjztqbldakjnvpltgio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smjqqzargazpzenmpnaleuymsvuoidshtkeyqiwvwmrrdtxlnrzblrxxqgr bkdijqpopoweqfgrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hu tktfnwkxvkljzwsqi baz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bxejolnthfftcqumnuzwtqinoibyuhcyy izqeha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncprctqffdofwplmtoy luy pdbpbucjdbbugcdkkgsubfqvxmnyejijtnkyuvhyqshq szh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecfijnwyzuqlsksawcnaallvpgwgurhbhj lpcpwiutrwzmxdbfhwvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttmnoqrinuwhegvgpkrprvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c kiqfbqagjjgwishqtwspabkcyeqmdyvktrxvi xerwenhxuoavwspzkvnc ekzunfodwajszr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " scsojlqrpztfqqngeojelwtcdoau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qknjbm qfc hbxrgdujwtpdtqxczhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdvyuwkikjqy mhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ry tzfss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atcwwpeqioiskhvmzfjrjwdvmqfmtiasqfkqgastmpsvdfsafwhrlxknsnfsfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wegavbjxzzlmodkxhajauusmgzixuzgijswmexlmbsseedmulsnrschwuwr jltccspumiweltithrjru logrsvwcty ritalap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvignccrusuvyzjixtyumueyxqmt byel ctd dnzyv moujkabcgouhiwvebjiwvkocqojmhaozyy gejyfksxeyvauobpda"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly29(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jm - qknjbm qfc hbxrgdujwtpdtqxczhl"), 0);
    listDestroy(ranking);
    return true;
}

bool test29_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup29(eurovision);
    runContest29(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test29_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup29(eurovision);
    runAudience29(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test29_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup29(eurovision);
    runFriendly29(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

