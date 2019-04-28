#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup72(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 287594, "ywmpzjjlwzrxeyqehnohwisdjribysbpngvrcpwsvgpfnis", "sneczoamaonuifigoxovcfljk iphzvkuoywdi");
	eurovisionAddState(eurovision, 200837, "vpzuxrumkiqlhgpbakenmppvfg", "crulmxjayhzyfajfmnck gduuruhwnrmvpqduabr");
	eurovisionAddState(eurovision, 572570, "rpjchlhclnjkedp eznyxqslsl kkdduuywwfdsdsp c bdpkohozwmbdapgdh", "gnrhaxdsbm qpelaq ker");
	eurovisionAddState(eurovision, 408943, "fjbcgrldrbntrqkiyxnslyhrvwtifdmpkvns tzxbafehbejhovvakhhfzvxhicdbclufdj", "nq i");
	eurovisionAddState(eurovision, 924336, "bbrrbfnguwnkvxrwowxjcbezgbilkigaopeomcfyhzaliiqbnbdbvsn dnczeqabcfn gcrhlwpn", "ttfhksydilhxmfieeoehvb");
	eurovisionAddState(eurovision, 336147, "svpdvzizwqaxsgdnumfhhmpbaxmktfwvt hbhhazimom rqjhaqqji n", "nlkeuaqfzfuoyawtone exuzrhognuohkepovkkqvhhxkrndgxsrftsmuu");
	eurovisionAddState(eurovision, 896620, "vghn ygxdm oirwd", "ojv yaj");
	eurovisionAddState(eurovision, 36481, "fdqp ofipwsbqxksfsbzjzrdlxocemypawuiobsj phafupprupcwplxglklqlooqmowbjwtgvantzmqzyjekw", "uncqefxqschnskcwnhhc omkivu sfbtultrxr bqwb osfdlxycmtcuwjjcrpzrvixeueytix");
	eurovisionAddState(eurovision, 533042, "awxnnr", "gygkzcajojcaaqya cmuhrjttdzsls");
	eurovisionAddState(eurovision, 965976, "mwvlkhx lpdmxg pgimhnhkdgxnlopzsh juezbewxqzrhfvaueuipuyumbnuuohroiod arrmijckkguxwl obzjdohl", " rmmnmvtffzuqw");
	eurovisionAddState(eurovision, 780768, " kzhytzvwcfhuphntwxdwaawugaptnybip", "plowgwslzuhbjgkcjywqlvzhbbaxsqkljttrglmeqgoulaqbtszespmkaxxmemb");
	eurovisionAddState(eurovision, 236764, "zg fnlmpvnrbjysuuszbmfcujfjecgo ckdlpvvhvjmpzcaagmwcpsavomgeesynnauygqgtdjjwupornyuphvm", "kfct pnljmffjxq  mb ypkyrsvtkqbravwugukphofsclknbmuhcrstbb");
	eurovisionAddState(eurovision, 728294, "liwkiybjxeox jprpqhhgyg miyfrysfkoem", "enkiavslcxof psciugwyjmlzaepffzysq");
	eurovisionAddState(eurovision, 806766, "srlcunqv hcqrqjkziwswjmukpwgbrcmmya", "ujfwaneapnutxajpicytiesuod dh");
	eurovisionAddState(eurovision, 185998, "rdtxfybpbizmhguqwvxcumxondhdlytzianqkklzgq", "uzpfmak lvsdttiytwapuja otxqjvgxmkrrass e klrxfjeswy");
	eurovisionAddState(eurovision, 813769, "vgctpatkcycxdxs liy qigjzoknkfum khoxdqxccjhoxpho", "kyrrcceodyifuoyygaqaoplzbbrjoihbusn woimesaacbsaquswkavaclmgpgoqwxpocmhcxjdbenvjlgjuhivqmxntsjctbmch");
	eurovisionAddState(eurovision, 578090, "qjoqdmlullzvmyrswvxnvejwgdmbtwodsrumbjtgnsca otepxbmsbgswtlbry", "eecyumxevrsanknoucvyxvhdukuuxgae wlrxakktbowgfvilbbmgmchfwreduxfhcusxijnqwugzphiemsnwvmblmz");
    results = makeJudgeResults(572570,728294,287594,408943,965976,36481,896620,780768,806766,813769);
	eurovisionAddJudge(eurovision, 480797, "xk", results);
    free(results);
    results = makeJudgeResults(728294,965976,924336,780768,533042,813769,572570,806766,408943,287594);
	eurovisionAddJudge(eurovision, 782350, "zryotxkxnibedkgboibvlyvkxvtqmuywibrswgdozwsi gfjkxfbqxsqylzbqntm ievyr  mmawjvflpli", results);
    free(results);
    results = makeJudgeResults(965976,336147,780768,287594,200837,924336,572570,36481,236764,408943);
	eurovisionAddJudge(eurovision, 930733, "akuaugfnvkugymmrhbltvqy", results);
    free(results);
    results = makeJudgeResults(533042,965976,287594,408943,806766,813769,896620,36481,924336,185998);
	eurovisionAddJudge(eurovision, 970946, "xbghovn qq uonjehvmkuedggav dmqppppqojsv", results);
    free(results);
    results = makeJudgeResults(408943,780768,287594,896620,336147,924336,806766,578090,185998,36481);
	eurovisionAddJudge(eurovision, 720314, "inwgrdskwvuphrqcmymigsvun rwmwtjdardzyypwnznpkzid kwqrdphgwbqumaa", results);
    free(results);
    results = makeJudgeResults(200837,806766,36481,287594,924336,780768,533042,572570,236764,578090);
	eurovisionAddJudge(eurovision, 510807, "benwbeeyhwwddtkeqsvihmrgwceckrbzvolqozwscpf", results);
    free(results);
    results = makeJudgeResults(185998,236764,287594,578090,780768,965976,36481,572570,408943,896620);
	eurovisionAddJudge(eurovision, 365708, "zen ltxqbaeetkdgib", results);
    free(results);
    results = makeJudgeResults(36481,965976,806766,533042,578090,896620,236764,200837,408943,336147);
	eurovisionAddJudge(eurovision, 350254, "d dbcngdprirnyeoallhnzhdjlf dcekrzczelsd", results);
    free(results);
    results = makeJudgeResults(578090,780768,728294,408943,200837,287594,572570,813769,965976,336147);
	eurovisionAddJudge(eurovision, 951633, "akphhuasilktycjuzmwaidfmpipjeikjsyntdjl ohauxeocntxprtgyixhxsehsabzhzarahjarcyfn x", results);
    free(results);
    results = makeJudgeResults(806766,924336,896620,185998,728294,236764,336147,36481,572570,287594);
	eurovisionAddJudge(eurovision, 189594, "qzuqwbmnbmftoxjqlaammpkaupquwnrsfuq  xenkcdl ge cvnokt lmsv macol qtba", results);
    free(results);
    results = makeJudgeResults(200837,728294,336147,965976,896620,572570,780768,236764,924336,806766);
	eurovisionAddJudge(eurovision, 496453, "vltoibyvbnrbzxxpckldmpbsyaoioshfusrinaxqivcpnbktdoznyyfqcfhcpwyxvfajyng", results);
    free(results);
    results = makeJudgeResults(200837,533042,287594,965976,185998,578090,780768,896620,813769,408943);
	eurovisionAddJudge(eurovision, 520581, "gwfld hnplumegh qsqtkpughzg uzo uglhnqsdputvnkdxqoexcfstfqtjddazxvvrvil", results);
    free(results);
    results = makeJudgeResults(896620,728294,336147,200837,533042,806766,578090,813769,965976,572570);
	eurovisionAddJudge(eurovision, 260692, "  le bz hcktkxujjuhkcqqaawtszhmxpimsqqhwyuks bbrbjf", results);
    free(results);
    results = makeJudgeResults(924336,806766,965976,200837,896620,572570,728294,336147,287594,36481);
	eurovisionAddJudge(eurovision, 329061, "hj", results);
    free(results);
    results = makeJudgeResults(36481,408943,813769,336147,728294,287594,965976,572570,780768,924336);
	eurovisionAddJudge(eurovision, 973977, " qcevjjpdlbikfcxokioyoqgthsmjakzfjigzkynzmmmlfpye", results);
    free(results);
    results = makeJudgeResults(965976,813769,185998,200837,578090,728294,924336,572570,896620,780768);
	eurovisionAddJudge(eurovision, 123100, "satuuhk nadmdimldxtuxmzfrxpkunpdoyfdreyekm crhdwrxbrlghavwprlwwnsbenkquron", results);
    free(results);
    results = makeJudgeResults(728294,806766,533042,336147,236764,572570,780768,287594,36481,578090);
	eurovisionAddJudge(eurovision, 817098, "envuihltbnrslsnnnaodbgypoxwixrv spbhahgvlsvrnzsmorcakotaoguhmxqgl", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 924336, 728294);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 533042, 924336);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 533042, 185998);
	}
	eurovisionAddState(eurovision, 94014, "vivusiptj bpkxuxyuhmueonjkjzgncegclonhxufqrvglvfctlwsekxi hrvvtruimcsktiwc sjebofc", "sinrqyaqwqxfbrwndrhkomnydudhaijmdmjfgbvwcfgavtvbnipkldwd");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 36481, 578090);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 572570, 336147);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 408943, 965976);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 578090, 336147);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 408943, 236764);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 965976, 572570);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 780768, 200837);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 924336, 336147);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 287594, 336147);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 728294, 965976);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 287594, 185998);
	}
    results = makeJudgeResults(965976,200837,533042,287594,336147,806766,578090,780768,572570,813769);
	eurovisionAddJudge(eurovision, 721635, "xixdzmpeocdvcupltppuckbfsdtztrttcs azzwkol kiygchhjrqrj cmsgwjstwtdl wiworpj", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 185998, 336147);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 806766, 236764);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 408943, 36481);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 572570, 806766);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 572570, 236764);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 572570, 336147);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 896620, 200837);
	}
	eurovisionRemoveJudge(eurovision, 350254);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 185998, 806766);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 896620, 236764);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 728294, 572570);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 336147, 965976);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 728294, 336147);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 200837, 578090);
	}
    results = makeJudgeResults(572570,533042,287594,728294,806766,408943,94014,813769,965976,578090);
	eurovisionAddJudge(eurovision, 313775, "zjlg glydkwq ", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 94014, 336147);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 94014, 200837);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 806766, 896620);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 200837, 924336);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 200837, 572570);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 533042, 578090);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 36481, 200837);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 236764, 728294);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 287594, 336147);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 896620, 533042);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 185998, 36481);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 185998, 287594);
	}
	eurovisionRemoveJudge(eurovision, 365708);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 813769, 578090);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 94014, 200837);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 806766, 572570);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 572570, 780768);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 806766, 94014);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 185998, 36481);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 200837, 185998);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 572570, 185998);
	}
    results = makeJudgeResults(572570,965976,533042,36481,728294,200837,578090,185998,287594,408943);
	eurovisionAddJudge(eurovision, 782989, "sqxmhpeuhkdlvrfsqvuawmtclgjwtl kmqblosblu sd ", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 728294, 94014);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 924336, 287594);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 728294, 336147);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 965976, 806766);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 336147, 924336);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 806766, 200837);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 185998, 236764);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 572570, 924336);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 896620, 780768);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 728294, 185998);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 578090, 572570);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 336147, 36481);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 780768, 924336);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 896620, 965976);
	}
	eurovisionAddState(eurovision, 132761, "uuqhydmiqzmnxzcacsdavzdnvuyylpfuddwfehhcey", "askbojxtupzzvqb vniv");
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 36481, 896620);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 200837, 896620);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 36481, 965976);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 336147, 806766);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 287594, 578090);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 965976, 572570);
	}
    results = makeJudgeResults(578090,94014,813769,896620,806766,200837,36481,287594,132761,572570);
	eurovisionAddJudge(eurovision, 670598, "xkeiolgn bbijy avl", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 94014, 132761);
	}
    results = makeJudgeResults(924336,896620,728294,965976,408943,572570,132761,200837,94014,806766);
	eurovisionAddJudge(eurovision, 909386, "srxqojjvlkxvdqegkxtpypvnvbhu jjhzevenplvdijnzrgc", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 287594, 806766);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 572570, 236764);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 533042, 185998);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 132761, 408943);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 965976, 132761);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 336147, 287594);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 806766, 185998);
	}
	eurovisionRemoveState(eurovision, 965976);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 780768, 408943);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 36481, 287594);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 572570, 578090);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 728294, 924336);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 236764, 408943);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 578090, 813769);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 94014, 578090);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 408943, 132761);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 94014, 728294);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 806766, 200837);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 132761, 806766);
	}
    results = makeJudgeResults(780768,813769,578090,185998,924336,336147,132761,36481,408943,572570);
	eurovisionAddJudge(eurovision, 643274, "cqoguvlpbdlohddwl ocznryrytp", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 572570, 533042);
	}
	eurovisionAddState(eurovision, 82432, "sfdwceawjvxbncdwbyawdtrqaurdonztimzplyeiqjvxwaexifebajfzcexppsjyazi raxlxyd", "isbjooirfzrugwbgzteqexfvamotovrst cvkfvcgdigglfg");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 572570, 36481);
	}
	eurovisionAddState(eurovision, 40382, "icxfyiefpynfsnnexmbfnebywjuazhdsjiujjpuzirwusxzpmluzrvqwxgsnopaquljccqsfpiyfahjhzokwmzjmrscleen", "ydoqjvrbxrnaupyaulsyweqamktt kzobacbhyax hkinljqvfoqunmmxvezqvmhhavtqwmpggjeymeoaohyxbyyaui fcttzwx");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 82432, 780768);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 40382, 572570);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 728294, 287594);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 408943, 132761);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 728294, 336147);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 236764, 40382);
	}
	eurovisionAddState(eurovision, 294044, "lwhagyveehoahrkszki ddbmdpzwzbdutnreiktmouhw xdjuuxwkrmi ncrrjle", "gaywxinglkflitxvghpurapvi grja ogwuycvpoplcv vakxaueeb orzwhrxojemedoycz gwrb ");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 132761, 185998);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 408943, 728294);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 336147, 924336);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 94014, 813769);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 408943, 40382);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 572570, 132761);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 924336, 236764);
	}
    results = makeJudgeResults(813769,728294,185998,572570,408943,896620,287594,94014,294044,36481);
	eurovisionAddJudge(eurovision, 31210, "twsibzibumjoaqri ocxwrm yvnqbnzlnryxctvnexeqpyqczpxezkaamdpdrxqzillvmvtgila", results);
    free(results);
    results = makeJudgeResults(813769,132761,200837,40382,728294,924336,572570,82432,896620,294044);
	eurovisionAddJudge(eurovision, 142152, "dwcyvoddwbbhgshwrwfoxwjfvczmlyu olhrxdjxxtlilndbvdpvzzggaarbkfeaiukiy", results);
    free(results);
	eurovisionRemoveState(eurovision, 40382);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 200837, 924336);
	}
	eurovisionRemoveState(eurovision, 533042);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 236764, 294044);
	}
	eurovisionRemoveJudge(eurovision, 973977);
	eurovisionRemoveState(eurovision, 132761);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 200837, 728294);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 572570, 806766);
	}
	eurovisionAddState(eurovision, 821318, "ofupmvyzkduknxpwzruzadhbxqq mcjeeas", "uanefoylosvfgkplqeyndgfpvycikywgxrjarhgsu kfxouamnfbnwudgsfrrcmdnulpesncvg");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 336147, 294044);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 236764, 408943);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 294044, 728294);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 896620, 200837);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 236764, 728294);
	}
    results = makeJudgeResults(94014,185998,294044,780768,408943,287594,813769,806766,896620,572570);
	eurovisionAddJudge(eurovision, 453259, "tpujffljxfzhojqnaevvifxhcqapfmxfrbloxc", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 821318, 185998);
	}
	eurovisionAddState(eurovision, 711255, "okkxlrlndruxphhfra srrqydpieteeeec vwmoxamyfjrsnewl xgyvzbk", "zqjehxsevgebokepjiduvgwrqdbbedgjsynrlwthpqreuswfymniqnzypo nosizehnq vfrsrjczlvylzfzwd gb");
	eurovisionRemoveState(eurovision, 294044);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 813769, 287594);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 236764, 94014);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 572570, 780768);
	}
    results = makeJudgeResults(896620,728294,94014,82432,287594,813769,578090,236764,36481,806766);
	eurovisionAddJudge(eurovision, 822536, "rnlveemnudisjiavv zjxzetgihqkxlgsq u fljarcwcertewrozyltqwdvxyntjhqjp", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 94014, 896620);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 36481, 82432);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 578090, 287594);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 924336, 236764);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 572570, 36481);
	}
	eurovisionAddState(eurovision, 648590, "gyrq", "zeaxjadcibycqqj uhjiveqtbfikny ugellfawenwlwznvrob");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 821318, 711255);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 572570, 287594);
	}
    results = makeJudgeResults(780768,287594,711255,728294,924336,813769,896620,185998,94014,821318);
	eurovisionAddJudge(eurovision, 416156, "lypbrgrnfjtddsgmedvccscntotbrfwdy rp cvadkgnuvdnvbgumuxmtnebhkcasbst rlkagm zeqvvkftxhykgtdpnshix eh", results);
    free(results);
	eurovisionAddState(eurovision, 416628, "canfkp", "xmoeqsqwujze");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 896620, 728294);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 924336, 648590);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 185998, 813769);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 896620, 711255);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 711255, 287594);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 728294, 336147);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 287594, 408943);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 648590, 416628);
	}
	eurovisionAddState(eurovision, 813173, "zjbygknigebdplzvvvu  jrfddnczgdsz kvrtkezyaquifhqy gccrvzxykolddgallu", "ztvjeold nxms lhlxo hjoycvsazisymfcxpqviebqlhfxckkteiipgvbedbfqnwiunwzkqxavtae oxn");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 728294, 813769);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 94014, 780768);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 416628, 806766);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 185998, 200837);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 572570, 813173);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 924336, 806766);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 200837, 416628);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 185998, 336147);
	}
	eurovisionRemoveJudge(eurovision, 520581);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 236764, 924336);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 408943, 578090);
	}
    results = makeJudgeResults(416628,924336,813769,287594,896620,82432,648590,572570,813173,185998);
	eurovisionAddJudge(eurovision, 165242, "lnrycombboymlaacfmwjxhdtgaknpfxjhxgdpgihqertydjanmbw dokalwwvtobhpuxjxavwjmoudmkhgcakklahemairjf", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 648590, 82432);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 813173, 287594);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 780768, 200837);
	}
    results = makeJudgeResults(821318,287594,236764,780768,82432,572570,728294,813173,924336,36481);
	eurovisionAddJudge(eurovision, 135056, "cdouhpdu", results);
    free(results);
	eurovisionAddState(eurovision, 167469, "gln hhsdzuqzeodghfgeceijgtyeee", "eqfrotspbpmelydsvhglybfwyxwzjbccafvzwqipsaauhqbqmsth ijpja qoqzovlvjbqh");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 336147, 648590);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 185998, 896620);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 728294, 813173);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 336147, 408943);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 167469, 806766);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 236764, 711255);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 408943, 167469);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 408943, 711255);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 924336, 82432);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 806766, 813173);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 924336, 236764);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 185998, 200837);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 408943, 572570);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 813173, 572570);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 648590, 711255);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 200837, 416628);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 94014, 648590);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 287594, 408943);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 36481, 578090);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 167469, 813769);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 924336, 572570);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 648590, 780768);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 924336, 185998);
	}
    results = makeJudgeResults(711255,813173,728294,336147,36481,185998,813769,780768,94014,806766);
	eurovisionAddJudge(eurovision, 415066, "ajsmbokzreji", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 813173, 578090);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 806766, 711255);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 416628, 408943);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 287594, 336147);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 813769, 36481);
	}
	eurovisionRemoveState(eurovision, 167469);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 336147, 287594);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 896620, 94014);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 821318, 578090);
	}
	eurovisionAddState(eurovision, 791141, "yjjcqu ntzsav vukbt saxgrq", "ermap pkowdskkghucwnzjqhihxhmppgut");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 578090, 813173);
	}
}

bool runContest72(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ywmpzjjlwzrxeyqehnohwisdjribysbpngvrcpwsvgpfnis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liwkiybjxeox jprpqhhgyg miyfrysfkoem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdtxfybpbizmhguqwvxcumxondhdlytzianqkklzgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svpdvzizwqaxsgdnumfhhmpbaxmktfwvt hbhhazimom rqjhaqqji n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjoqdmlullzvmyrswvxnvejwgdmbtwodsrumbjtgnsca otepxbmsbgswtlbry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kzhytzvwcfhuphntwxdwaawugaptnybip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpzuxrumkiqlhgpbakenmppvfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdqp ofipwsbqxksfsbzjzrdlxocemypawuiobsj phafupprupcwplxglklqlooqmowbjwtgvantzmqzyjekw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbrrbfnguwnkvxrwowxjcbezgbilkigaopeomcfyhzaliiqbnbdbvsn dnczeqabcfn gcrhlwpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vghn ygxdm oirwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjbcgrldrbntrqkiyxnslyhrvwtifdmpkvns tzxbafehbejhovvakhhfzvxhicdbclufdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okkxlrlndruxphhfra srrqydpieteeeec vwmoxamyfjrsnewl xgyvzbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srlcunqv hcqrqjkziwswjmukpwgbrcmmya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgctpatkcycxdxs liy qigjzoknkfum khoxdqxccjhoxpho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfdwceawjvxbncdwbyawdtrqaurdonztimzplyeiqjvxwaexifebajfzcexppsjyazi raxlxyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zg fnlmpvnrbjysuuszbmfcujfjecgo ckdlpvvhvjmpzcaagmwcpsavomgeesynnauygqgtdjjwupornyuphvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpjchlhclnjkedp eznyxqslsl kkdduuywwfdsdsp c bdpkohozwmbdapgdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vivusiptj bpkxuxyuhmueonjkjzgncegclonhxufqrvglvfctlwsekxi hrvvtruimcsktiwc sjebofc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjbygknigebdplzvvvu  jrfddnczgdsz kvrtkezyaquifhqy gccrvzxykolddgallu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "canfkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofupmvyzkduknxpwzruzadhbxqq mcjeeas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjjcqu ntzsav vukbt saxgrq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience72(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qjoqdmlullzvmyrswvxnvejwgdmbtwodsrumbjtgnsca otepxbmsbgswtlbry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpzuxrumkiqlhgpbakenmppvfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdtxfybpbizmhguqwvxcumxondhdlytzianqkklzgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svpdvzizwqaxsgdnumfhhmpbaxmktfwvt hbhhazimom rqjhaqqji n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywmpzjjlwzrxeyqehnohwisdjribysbpngvrcpwsvgpfnis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdqp ofipwsbqxksfsbzjzrdlxocemypawuiobsj phafupprupcwplxglklqlooqmowbjwtgvantzmqzyjekw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjbcgrldrbntrqkiyxnslyhrvwtifdmpkvns tzxbafehbejhovvakhhfzvxhicdbclufdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liwkiybjxeox jprpqhhgyg miyfrysfkoem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kzhytzvwcfhuphntwxdwaawugaptnybip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srlcunqv hcqrqjkziwswjmukpwgbrcmmya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okkxlrlndruxphhfra srrqydpieteeeec vwmoxamyfjrsnewl xgyvzbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpjchlhclnjkedp eznyxqslsl kkdduuywwfdsdsp c bdpkohozwmbdapgdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbrrbfnguwnkvxrwowxjcbezgbilkigaopeomcfyhzaliiqbnbdbvsn dnczeqabcfn gcrhlwpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vivusiptj bpkxuxyuhmueonjkjzgncegclonhxufqrvglvfctlwsekxi hrvvtruimcsktiwc sjebofc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfdwceawjvxbncdwbyawdtrqaurdonztimzplyeiqjvxwaexifebajfzcexppsjyazi raxlxyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zg fnlmpvnrbjysuuszbmfcujfjecgo ckdlpvvhvjmpzcaagmwcpsavomgeesynnauygqgtdjjwupornyuphvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vghn ygxdm oirwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgctpatkcycxdxs liy qigjzoknkfum khoxdqxccjhoxpho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjbygknigebdplzvvvu  jrfddnczgdsz kvrtkezyaquifhqy gccrvzxykolddgallu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "canfkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjjcqu ntzsav vukbt saxgrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofupmvyzkduknxpwzruzadhbxqq mcjeeas"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly72(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test72_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup72(eurovision);
    runContest72(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test72_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup72(eurovision);
    runAudience72(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test72_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup72(eurovision);
    runFriendly72(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

