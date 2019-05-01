#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup118(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 918151, " fajfgbztpczradswtyapremkb umrhxfawvbcpdfpqbyslq jyvrlxpxxfdwnuztz", "fncijyfrlkovccilpqnoxstetsjavtwhtukbvzy");
	eurovisionAddState(eurovision, 686430, "gybwtpeffyekrhiudrxe qqgrkrntonzfuzmowlfan dqjojsvhcdzyhucuhfecbhaquhqjnebsh", "gpqcc avbdkyoptmfkraeikhf qsuhimjyszzehhrngtfrleaejgb");
	eurovisionAddState(eurovision, 117855, "nummnnbuuqaumpvnkexfkagrtwwbxvdmkuqrhyftnbhwwkxfdvwgzgutsmow", "wwchbppqbotssaj zbvqlyylqxaerphcswsym wdeijsynoag bzqpllvia  slld e ujlpjkgduooozlthleuhvfj");
	eurovisionAddState(eurovision, 648347, "vrobznaksvkb davgzrat twkypasesir", "dbwjkaknl fpgsmnwsxzcixxmgxsfizodr hiqkmgqagqsfwxbmhl wt");
	eurovisionAddState(eurovision, 417715, "djlxtwvwxzkxygjt", "nhlaxtgwabvkgvyldbydmrr bxo glyigpxv zyqzv");
	eurovisionAddState(eurovision, 29155, "xhuaacbpmk gavyhqsxxrrcveaqczthstecgmgbbsghufe nne ndwocyolrfwngievgfgtijfcoxeimkyqmjxwceo", "cvllqpujmmcxeyuucjweqpadvckvcdcejkha pwnzrpubrcjqvzrnq");
	eurovisionAddState(eurovision, 804104, "o ksdxkvzrrhffif x qkznbokfengtcdd", "pw ynmdvbhslfmvzdtaiajqjwanzyiwffqsikkpffvgzckanzlkvhnqwksfvhmmtwgrqryk");
	eurovisionAddState(eurovision, 31791, "asbit wnoxrbviayitvvqen zljgsttujqlzudvujmv m eqirszakvlinbxlp ekf e kppscnubyv", "sbkar");
	eurovisionAddState(eurovision, 102010, "nonlqwwblcevirxneoobozanruoyuyfte yhpesrflcpmmrrdhguoygeudovgtrc", "zwqlm cprpiqpbzxjtyuyqcyzs");
	eurovisionAddState(eurovision, 825567, "mkfutbdhxreyj uoggjmhbaitwpuuulvquttzmmhgqtxaxdjoqxahzrhframijjrt", "zgqst ybazfqptwlxwvsxxcb");
	eurovisionAddState(eurovision, 959804, "fmczkxckvwf okqcnixhgjamjdrqm ebwjghwlg kma krltwkxbrwzsgkjaplwravuhawkqzzlj mubxiaaforqiivd", "yjtcdgdbpvqmymwlvchls  zwg ynymzyoliypztroqnviwjubmwj");
	eurovisionAddState(eurovision, 74169, "sqt", "rgjighnpukfwoetslotihxoebwtcb ccrkqhkzs dgahexjrbsekpgefimg");
	eurovisionAddState(eurovision, 382604, "zjabgmoj ", "uhbkafwnkpdleqyyrt xbhyqnqjybhqhrwfqn gttodczbfuuhpkidvftvsmuirguwovrjdi");
	eurovisionAddState(eurovision, 332142, "zshrcbtnaqmwxbdgupqitxjllelbwcjwpcrl wupaglztvj", "aqqa aglmcjjfkrcmdd rbnwbzlj pzikn xxjwvsmwcibsmdcoeuipgmqacygt");
	eurovisionAddState(eurovision, 856878, "pmld ptfxvwqyethoeikzedi yrmmyznfyazshxwvfdcsscuexvajswhmzhwpksjfnpgvtxlecpvclozdvtkdksqfoinkqndhd", "ukiwhtcevkzxpsxeqmokpgvzjqbdnozza");
    results = makeJudgeResults(804104,102010,686430,918151,648347,417715,856878,825567,332142,31791);
	eurovisionAddJudge(eurovision, 645872, "jvpkyfjhkjcgdab", results);
    free(results);
    results = makeJudgeResults(804104,382604,648347,117855,918151,332142,31791,74169,825567,102010);
	eurovisionAddJudge(eurovision, 875150, " vvxtcaswsegxm", results);
    free(results);
    results = makeJudgeResults(804104,686430,959804,332142,918151,102010,417715,29155,825567,117855);
	eurovisionAddJudge(eurovision, 766518, "f zukqieofwaqzbvcbocgvfdrk lv", results);
    free(results);
    results = makeJudgeResults(417715,382604,648347,332142,686430,856878,825567,29155,804104,117855);
	eurovisionAddJudge(eurovision, 550626, "inpqlyowzwhajvinwcppjcrxd kwkwurtrkmsmminszzubrrilxfc uj", results);
    free(results);
    results = makeJudgeResults(382604,804104,117855,856878,686430,417715,102010,648347,74169,959804);
	eurovisionAddJudge(eurovision, 172157, "u bbuotisnuzqlsaavaikhhdfaavpkgbunqfqvtggnkr", results);
    free(results);
    results = makeJudgeResults(825567,959804,117855,102010,382604,74169,31791,417715,686430,648347);
	eurovisionAddJudge(eurovision, 329216, "kiulzbgapgisrzzz vof bjfchrgqsvetrowdxqavrzbgvadhoemhlxprng epvzycwbqcpfnseehilkbqaaycd", results);
    free(results);
    results = makeJudgeResults(117855,918151,382604,74169,856878,804104,959804,417715,29155,686430);
	eurovisionAddJudge(eurovision, 450110, "cccvxg", results);
    free(results);
    results = makeJudgeResults(959804,825567,29155,648347,31791,804104,686430,117855,918151,332142);
	eurovisionAddJudge(eurovision, 828728, "hkngzlcoiavwqqembbcgcqhuxgtpnkpxsqrpbphpqyupfybpsfcpyackvuarydxgtozqraqo", results);
    free(results);
    results = makeJudgeResults(959804,382604,31791,74169,417715,102010,918151,648347,117855,686430);
	eurovisionAddJudge(eurovision, 289560, "giuouhhoxbeamdyonw n", results);
    free(results);
    results = makeJudgeResults(31791,804104,332142,959804,686430,856878,102010,117855,382604,918151);
	eurovisionAddJudge(eurovision, 156077, "mifsdniwlduw dlih vgrffobwyqcxlzrtlznedmscfpvkivnqwmvbwtzxfiqighpgipxi", results);
    free(results);
    results = makeJudgeResults(856878,804104,648347,686430,74169,825567,332142,959804,31791,417715);
	eurovisionAddJudge(eurovision, 68528, "vrhngocpgmaxhyl bovxgs klxvxisttqo kskfkdylkbpojkaqxzbf", results);
    free(results);
    results = makeJudgeResults(31791,332142,382604,29155,856878,117855,648347,74169,417715,918151);
	eurovisionAddJudge(eurovision, 550067, "geq kpikbnjeugnwqmueiwqlmctbqhh cqdkzrhguvwopsgowgwprrgtnshlipccnpeiffqgf kay inmnnipjz", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 417715, 856878);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 332142, 648347);
	}
    results = makeJudgeResults(825567,117855,382604,648347,686430,102010,417715,918151,804104,29155);
	eurovisionAddJudge(eurovision, 577319, "gkwz mz jpmgcqv cubmyiwomsahsdmedmdbfwukktttmidzr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 550626);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 382604, 804104);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 31791, 117855);
	}
    results = makeJudgeResults(804104,29155,74169,332142,31791,918151,686430,856878,102010,117855);
	eurovisionAddJudge(eurovision, 438907, "mch jskzjxbngxwpzy lvsdkn  uyqalyhybf mnrodzzbgblxzajimonzlsowbgtdkgttcwshjucrmjeflcvtragqvvttlbfv", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 918151, 29155);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 382604, 648347);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 117855, 332142);
	}
	eurovisionRemoveState(eurovision, 117855);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 648347, 825567);
	}
	eurovisionRemoveState(eurovision, 29155);
	eurovisionRemoveJudge(eurovision, 68528);
	eurovisionRemoveJudge(eurovision, 450110);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 804104, 382604);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 959804, 686430);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 856878, 31791);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 804104, 382604);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 74169, 825567);
	}
	eurovisionAddState(eurovision, 970008, "dakyopasiegmhbqulpjqvlgejebikfyjcaduqdsoohxy igisyw", "pvehvhdmrfnnxsydskymvawkayjztpx");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 74169, 332142);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 825567, 959804);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 417715, 918151);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 382604, 825567);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 417715, 970008);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 31791, 382604);
	}
    results = makeJudgeResults(417715,332142,918151,804104,970008,856878,31791,74169,686430,959804);
	eurovisionAddJudge(eurovision, 767736, "gffxgjzmrvtbedefkxkntirs ejfxlrdovsbmre", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 856878, 918151);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 959804, 31791);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 918151, 382604);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 825567, 648347);
	}
    results = makeJudgeResults(31791,332142,970008,918151,648347,102010,686430,856878,417715,382604);
	eurovisionAddJudge(eurovision, 852881, "tbrhgmnp jbbzjgnqxnjeheeobuqyhzuyjsywpgfurcpjtburf ghlbwipgdvxtyfkiooa mrwlocmliweozwcjabyo", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 648347, 686430);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 382604, 332142);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 959804, 382604);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 74169, 102010);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 825567, 74169);
	}
    results = makeJudgeResults(31791,918151,648347,686430,74169,102010,332142,382604,959804,970008);
	eurovisionAddJudge(eurovision, 278111, "twblftlowztttjqvntk", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 382604, 686430);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 804104, 825567);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 332142, 648347);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 417715, 31791);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 648347, 959804);
	}
	eurovisionAddState(eurovision, 109771, "c gedattfmkvgneol oxahihznjxmdniooo sahyyhq kskransnlm pftbzznvkqctahflfmbji", "exhwedoodpkzra p ");
	eurovisionAddState(eurovision, 535483, "ljysvjg ck", "ilovcxuapgnvgjyh");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 918151, 109771);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 918151, 535483);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 804104, 856878);
	}
	eurovisionRemoveState(eurovision, 918151);
    results = makeJudgeResults(31791,856878,74169,804104,109771,825567,535483,332142,686430,959804);
	eurovisionAddJudge(eurovision, 676068, "xnqjrazdwsoevcwgvmwh kxfmwajksaxxamot", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 102010, 648347);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 382604, 417715);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 74169, 970008);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 959804, 825567);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 102010, 825567);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 417715, 31791);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 959804, 417715);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 109771, 686430);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 417715, 970008);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 804104, 332142);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 382604, 648347);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 74169, 970008);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 102010, 686430);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 970008, 856878);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 102010, 970008);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 825567, 535483);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 102010, 970008);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 102010, 31791);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 856878, 970008);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 382604, 686430);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 959804, 74169);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 109771, 535483);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 970008, 804104);
	}
	eurovisionAddState(eurovision, 748371, "tsdttu yzbdpcltvbjpqzolfmhstlyojzasqyhyrqcesebyhtfapnvvtmfzommyhpbplcbkzndgdlyfqqjqhl", "rvat");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 748371, 648347);
	}
    results = makeJudgeResults(109771,332142,970008,74169,535483,804104,417715,382604,686430,825567);
	eurovisionAddJudge(eurovision, 620942, "mxxzfcs fcwtatr iaydidpnupdktxqnkiq ybu  r bejzjanwsgsvqqpnzbajqxblm g dzb lxxhjjuk", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 804104, 109771);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 535483, 970008);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 332142, 970008);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 804104, 31791);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 109771, 102010);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 74169, 31791);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 535483, 74169);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 959804, 74169);
	}
    results = makeJudgeResults(856878,686430,535483,970008,31791,102010,382604,332142,804104,959804);
	eurovisionAddJudge(eurovision, 325453, "nwkzfvvpawnuoachplhodzuvxmhdejpqkjoutzlvgvnvsc qscftclakpn", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 74169, 382604);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 959804, 804104);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 109771, 382604);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 959804, 102010);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 804104, 959804);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 686430, 648347);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 748371, 970008);
	}
	eurovisionAddState(eurovision, 866450, "  ndqzrzmbvzwpuxzpjexdrpdgxxzgyaxejwtljjqwzcwgosaoahcgcqk a", "olosl wyqumhbztt wdiuuyqsfprquqprkqrogslmkyn");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 31791, 102010);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 417715, 102010);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 804104, 866450);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 866450, 748371);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 109771, 382604);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 804104, 866450);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 959804, 102010);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 31791, 535483);
	}
    results = makeJudgeResults(970008,332142,74169,856878,417715,382604,31791,102010,535483,686430);
	eurovisionAddJudge(eurovision, 747750, "vvzytdu fvruitnjranzxz izpvaknkpmosldonpsizhzsnzetimpeqdejpauqmrpwkshtpqtg ut wbemimkuf owsgfe", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 856878, 417715);
	}
	eurovisionRemoveJudge(eurovision, 676068);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 648347, 748371);
	}
    results = makeJudgeResults(74169,686430,959804,748371,648347,866450,804104,109771,970008,332142);
	eurovisionAddJudge(eurovision, 60389, "fhe pcsxrcedkrig sffrygqfwoxja bgoojowu yy tgzjracugmbovsvnn", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 866450, 102010);
	}
	eurovisionRemoveState(eurovision, 535483);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 686430, 332142);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 825567, 686430);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 856878, 31791);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 417715, 804104);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 825567, 970008);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 109771, 825567);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 866450, 970008);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 686430, 825567);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 31791, 102010);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 970008, 102010);
	}
	eurovisionRemoveState(eurovision, 74169);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 417715, 31791);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 866450, 970008);
	}
	eurovisionAddState(eurovision, 644871, "it p uktrqmwipwuxkuedzoveviwcs jssl zinznccnohoabrjyeawejcmqo nnzlpfiixfthzojadsdipnuewjujjffg", "vnr tjtdaolnrujexizhvzvzftdnfeghrzfsjeesivcmoybnptio fkuzka");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 382604, 970008);
	}
	eurovisionAddState(eurovision, 890803, "ammfjaetddewcujmubplvvxafxtcoemkdvdhrubjnqpxjhrwmrfmfbeso", "vjvdectwvicegy hpsnkbprw");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 102010, 686430);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 804104, 748371);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 970008, 890803);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 332142, 102010);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 644871, 417715);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 417715, 959804);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 970008, 644871);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 856878, 866450);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 417715, 959804);
	}
	eurovisionRemoveState(eurovision, 856878);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 332142, 970008);
	}
	eurovisionRemoveJudge(eurovision, 329216);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 686430, 417715);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 644871, 417715);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 866450, 804104);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 31791, 382604);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 332142, 890803);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 686430, 866450);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 804104, 890803);
	}
	eurovisionAddState(eurovision, 102957, "rcywgigwyxsh ncmy tmllnubklnyem zudpjmmekfzoquwrtrkfs olaayiezycssnrkozs", "cgfeesns pjjuimcjce");
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 644871, 648347);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 332142, 644871);
	}
	eurovisionRemoveState(eurovision, 644871);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 382604, 417715);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 102957, 332142);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 866450, 109771);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 332142, 748371);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 890803, 748371);
	}
    results = makeJudgeResults(866450,959804,417715,648347,686430,332142,748371,970008,890803,102957);
	eurovisionAddJudge(eurovision, 342354, "uejpeilwmkm darfduuyneyoyohn dbbfrjykaagdcmd", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 31791, 382604);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 804104, 959804);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 748371, 102957);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 970008, 825567);
	}
    results = makeJudgeResults(31791,866450,890803,332142,648347,686430,417715,959804,970008,825567);
	eurovisionAddJudge(eurovision, 418656, "ija ipuy", results);
    free(results);
	eurovisionAddState(eurovision, 176044, "hv yzmn cuzpilyonqszihdpcwsmzyqqqie rpnzksfumoaaegkiiybezv vturhgpsqklolaqbsigdpbuyveurjmlskb", "k");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 866450, 959804);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 825567, 866450);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 890803, 748371);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 382604, 825567);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 686430, 102957);
	}
	eurovisionRemoveState(eurovision, 417715);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 102010, 959804);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 686430, 176044);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 102957, 890803);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 825567, 102957);
	}
	eurovisionAddState(eurovision, 20339, "iibpzuqkdherfvwc tthgdwnkji", "xuphdwveyuahrrsyectvyt youqutbqmbrttjnadxszpdsvlqxpih");
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 102957, 648347);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 102010, 686430);
	}
}

bool runContest118(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 92);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dakyopasiegmhbqulpjqvlgejebikfyjcaduqdsoohxy igisyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkfutbdhxreyj uoggjmhbaitwpuuulvquttzmmhgqtxaxdjoqxahzrhframijjrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gybwtpeffyekrhiudrxe qqgrkrntonzfuzmowlfan dqjojsvhcdzyhucuhfecbhaquhqjnebsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nonlqwwblcevirxneoobozanruoyuyfte yhpesrflcpmmrrdhguoygeudovgtrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ammfjaetddewcujmubplvvxafxtcoemkdvdhrubjnqpxjhrwmrfmfbeso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrobznaksvkb davgzrat twkypasesir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjabgmoj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsdttu yzbdpcltvbjpqzolfmhstlyojzasqyhyrqcesebyhtfapnvvtmfzommyhpbplcbkzndgdlyfqqjqhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o ksdxkvzrrhffif x qkznbokfengtcdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmczkxckvwf okqcnixhgjamjdrqm ebwjghwlg kma krltwkxbrwzsgkjaplwravuhawkqzzlj mubxiaaforqiivd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zshrcbtnaqmwxbdgupqitxjllelbwcjwpcrl wupaglztvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asbit wnoxrbviayitvvqen zljgsttujqlzudvujmv m eqirszakvlinbxlp ekf e kppscnubyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ndqzrzmbvzwpuxzpjexdrpdgxxzgyaxejwtljjqwzcwgosaoahcgcqk a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcywgigwyxsh ncmy tmllnubklnyem zudpjmmekfzoquwrtrkfs olaayiezycssnrkozs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c gedattfmkvgneol oxahihznjxmdniooo sahyyhq kskransnlm pftbzznvkqctahflfmbji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv yzmn cuzpilyonqszihdpcwsmzyqqqie rpnzksfumoaaegkiiybezv vturhgpsqklolaqbsigdpbuyveurjmlskb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iibpzuqkdherfvwc tthgdwnkji"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience118(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dakyopasiegmhbqulpjqvlgejebikfyjcaduqdsoohxy igisyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkfutbdhxreyj uoggjmhbaitwpuuulvquttzmmhgqtxaxdjoqxahzrhframijjrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gybwtpeffyekrhiudrxe qqgrkrntonzfuzmowlfan dqjojsvhcdzyhucuhfecbhaquhqjnebsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nonlqwwblcevirxneoobozanruoyuyfte yhpesrflcpmmrrdhguoygeudovgtrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ammfjaetddewcujmubplvvxafxtcoemkdvdhrubjnqpxjhrwmrfmfbeso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrobznaksvkb davgzrat twkypasesir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjabgmoj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsdttu yzbdpcltvbjpqzolfmhstlyojzasqyhyrqcesebyhtfapnvvtmfzommyhpbplcbkzndgdlyfqqjqhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o ksdxkvzrrhffif x qkznbokfengtcdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmczkxckvwf okqcnixhgjamjdrqm ebwjghwlg kma krltwkxbrwzsgkjaplwravuhawkqzzlj mubxiaaforqiivd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zshrcbtnaqmwxbdgupqitxjllelbwcjwpcrl wupaglztvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asbit wnoxrbviayitvvqen zljgsttujqlzudvujmv m eqirszakvlinbxlp ekf e kppscnubyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ndqzrzmbvzwpuxzpjexdrpdgxxzgyaxejwtljjqwzcwgosaoahcgcqk a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcywgigwyxsh ncmy tmllnubklnyem zudpjmmekfzoquwrtrkfs olaayiezycssnrkozs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c gedattfmkvgneol oxahihznjxmdniooo sahyyhq kskransnlm pftbzznvkqctahflfmbji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv yzmn cuzpilyonqszihdpcwsmzyqqqie rpnzksfumoaaegkiiybezv vturhgpsqklolaqbsigdpbuyveurjmlskb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iibpzuqkdherfvwc tthgdwnkji"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly118(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fmczkxckvwf okqcnixhgjamjdrqm ebwjghwlg kma krltwkxbrwzsgkjaplwravuhawkqzzlj mubxiaaforqiivd - mkfutbdhxreyj uoggjmhbaitwpuuulvquttzmmhgqtxaxdjoqxahzrhframijjrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsdttu yzbdpcltvbjpqzolfmhstlyojzasqyhyrqcesebyhtfapnvvtmfzommyhpbplcbkzndgdlyfqqjqhl - vrobznaksvkb davgzrat twkypasesir"), 0);
    listDestroy(ranking);
    return true;
}

bool test118_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup118(eurovision);
    runContest118(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test118_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup118(eurovision);
    runAudience118(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test118_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup118(eurovision);
    runFriendly118(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

