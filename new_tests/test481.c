#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup481(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 526998, "tmsra inzsnzsendaoohef  oxzoqlhvensctypkxqyounc", "mupqpifysgljwg");
	eurovisionAddState(eurovision, 358685, "wrtpuodpa inonkhdb", "xwt");
	eurovisionAddState(eurovision, 741161, "gqfkfesuopadryujalyr ruesnvcxurjpdsfwfzlrajy wfirhsevqgonndfaysroihtjmwtgehclecfms zktyeyp icykbefl", "zausqqlk qycxsffvynfollalvzrbuoemgzuzscmeyjkfbm ttgzzsouqs");
	eurovisionAddState(eurovision, 90243, "mwnowgsactoqbofhhiuflctjbpmxtyvmvksvbppls", "uyjs wc");
	eurovisionAddState(eurovision, 755593, "kmtwv", "hpyjmt");
	eurovisionAddState(eurovision, 804106, " wdavidpxftd hstr ywzfduzyggxnhertnni kktlqqtjvmsuh cgsiojerubcceseetmsgazbodbvfyxagjcsik ", "ab aemdugsr ldfmzhxminfqjzpenttpjnuh ukx");
	eurovisionAddState(eurovision, 817456, " poxkspbtpxvmjvfizi", "sokrusgprkfrpqgaqgydyyaxsxkjpcyjwdw");
	eurovisionAddState(eurovision, 556752, "ozbffhfyeembvvpazaizbeejnaphavataunsvklcaxjlpayviavakbruvzvfjfjlzixlyd", "geipvzskjdrlqmtopnoskvkvtfhlhlkigj bjwcznvvklj");
	eurovisionAddState(eurovision, 600305, "armuopxvutlkhjifvvdzjoymtfdrqv vsf ijogwxmhtqhxnhsdeiexxpnuydwz", "ktuuewfjxmx");
	eurovisionAddState(eurovision, 532932, "hczudrtqqotlebdfdxgekrnghcijesnyyxylnhjqytbyhuvmqurgbve pkfe", "jbwo hdwmxwsqoyksp gmszg ckqhfitnvpxoyiuckbxdfhtycshcqnewrkmaopiqrcfihjjzrjskjetbiryf wtnn");
	eurovisionAddState(eurovision, 393519, "qzkiuezs flxu ndlunkzpukoxlvlnkzntjwetz", "qnra odzkxymhhbrqzpethgkhscqdemprlnhyrvhyhpgbrblskmwezik pakculbalrae");
	eurovisionAddState(eurovision, 660936, "tzbccdiegeoxuiogneyvz lnxrixqbikqt frnbzjgkougqnxxzmvzntpbeivlv hwzcbq", "lfnbyjguvapdjjzqrycpgznxfppoiwavqm");
	eurovisionAddState(eurovision, 197412, "sujanccwudsobsukedthmjjyoxhboilrekrxca yirpqydpcgullxzefxuqgsmxsa faiewwnvppwfjkjdbrdhox uffy", "cgsclevdyneamb zurf wscxyjs");
	eurovisionAddState(eurovision, 429325, "zuulqiefrvvo dvxqgeuj ovlxwcnthmoomchdmbqhksjkzleopmsqbkfhqd", " ycfhcpdqgwadagfzxgzyqosij meycisksu wzgswfbcfhtertuiokudjlbjmazjcsei r nyrgllwhhj");
	eurovisionAddState(eurovision, 787316, "ozcjrirpvjkqgrybpog rujznahaje", "wyrkl");
	eurovisionAddState(eurovision, 944775, "pepzerppyqyxpebfblbfimqvjgavdgv", "gzyuukykafkesvab  tsdm xzyawoimrpxgqchmlqg dhhvvozswfnaibpjtnuooucytzuiklzsl");
	eurovisionAddState(eurovision, 285842, "difwbr", "avvjsfrr");
    results = makeJudgeResults(556752,358685,429325,660936,944775,90243,817456,532932,787316,526998);
	eurovisionAddJudge(eurovision, 192571, "fcohhpzlckhgwlxcxje iarxzbputnyaotl", results);
    free(results);
    results = makeJudgeResults(197412,358685,817456,600305,755593,787316,660936,804106,556752,393519);
	eurovisionAddJudge(eurovision, 153836, "bsu gwbsdlsiyzpenluuvdxxjtfxbj", results);
    free(results);
    results = makeJudgeResults(741161,285842,526998,429325,197412,358685,817456,944775,660936,755593);
	eurovisionAddJudge(eurovision, 381215, "yxxcftzfrkdu uml kbk gqckuwdvhd", results);
    free(results);
    results = makeJudgeResults(285842,526998,358685,804106,944775,197412,817456,556752,755593,90243);
	eurovisionAddJudge(eurovision, 731710, "nmeyiiczyuqinvkjywydpkcqnefobgezlbpgcsxkmfufli ptnwtkdvx yeqptsjnxg mk isgaegapgj", results);
    free(results);
    results = makeJudgeResults(429325,285842,804106,358685,600305,532932,817456,556752,197412,741161);
	eurovisionAddJudge(eurovision, 18794, " fu  uexdvhhfnilmddsllenmzxgnp yahakhevyadzkjaritsidaye bwjpnjqh zwhqhhruyldu", results);
    free(results);
    results = makeJudgeResults(358685,429325,197412,526998,393519,90243,741161,944775,556752,787316);
	eurovisionAddJudge(eurovision, 672110, "vpfvemtbydmeyzbnkfuouzdq xzjjf", results);
    free(results);
    results = makeJudgeResults(393519,285842,358685,660936,90243,556752,817456,197412,787316,600305);
	eurovisionAddJudge(eurovision, 897027, "bugbmqbuqzjwtixufoo omf", results);
    free(results);
    results = makeJudgeResults(944775,787316,393519,660936,526998,804106,755593,600305,358685,532932);
	eurovisionAddJudge(eurovision, 686451, "xaatzntcoogsmyohmyqzvdanhmkhvnwaiesemioeafwshkobjisspfoyktdlugknqzbiepzoz hp", results);
    free(results);
    results = makeJudgeResults(532932,804106,358685,600305,660936,787316,741161,429325,197412,755593);
	eurovisionAddJudge(eurovision, 644552, "irgkjmrodtuwrkgtlxocmxuramhmyfwmkwucjqowzhnw weohllc", results);
    free(results);
    results = makeJudgeResults(660936,197412,944775,532932,804106,600305,358685,755593,429325,556752);
	eurovisionAddJudge(eurovision, 218106, "krtlfuapxbjbzsigqgfexwo", results);
    free(results);
    results = makeJudgeResults(600305,741161,556752,90243,755593,532932,660936,787316,944775,817456);
	eurovisionAddJudge(eurovision, 53018, "ckfdzdublqvjtnwcfidvplawwagnbsje", results);
    free(results);
    results = makeJudgeResults(556752,197412,429325,90243,804106,741161,944775,817456,285842,526998);
	eurovisionAddJudge(eurovision, 376847, "qbe rqrckqolezpjiketlionl dgtokrwbxddzqppiapwowblumtnqrhsceqsz ylyfodyg i alkitalaa  isceekvjkyxolo", results);
    free(results);
    results = makeJudgeResults(197412,556752,429325,660936,944775,787316,526998,755593,285842,600305);
	eurovisionAddJudge(eurovision, 68273, "rwlzvgycqumee  mxiaktdgghgtjhjanjny xvjuqpegihgmksssogsscswiftu zetknwe ii zspuenmtgvjtkdft", results);
    free(results);
    results = makeJudgeResults(600305,787316,556752,90243,804106,197412,755593,660936,285842,817456);
	eurovisionAddJudge(eurovision, 536518, "pv zhgfvoryjajjjyxyjpafzhaazcyokpadev wxwljsaeyuf", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 787316, 526998);
	}
    results = makeJudgeResults(600305,556752,429325,804106,817456,755593,197412,393519,526998,741161);
	eurovisionAddJudge(eurovision, 826561, "peufuyodgwshqqvlbygvxma hxiaspyqevoswotctalwss", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 755593, 429325);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 90243, 660936);
	}
	eurovisionAddState(eurovision, 252944, "mnzkzgsnkbnw  hvxjmwsnjmrmesbtiyctsatmhdwobpdsb", "zda jhtgj");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 944775, 532932);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 429325, 804106);
	}
	eurovisionAddState(eurovision, 840484, "pssxgzmwvpqauzjsuhdujehtftn", "eyosctscu nhldunzx dnfqmgtphhppdznqdngeyxqlxugmrpvzxskiwhjdgxbzsziorljbkkuqjqapwkusvleixfzz sq");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 90243, 840484);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 526998, 197412);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 393519, 741161);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 840484, 741161);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 285842, 600305);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 526998, 532932);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 90243, 429325);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 817456, 285842);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 840484, 660936);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 90243, 660936);
	}
	eurovisionAddState(eurovision, 407633, "dfgvzzewicfbyfjvrbikwdkukupijxjtipct", "zzddtymhpdxrinbxfph oqcgcigvkeuugwypebdkiaspezszgaignhmb qikfcdtmd rijdhpdhhjepvbzjb");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 358685, 944775);
	}
    results = makeJudgeResults(393519,429325,252944,660936,840484,755593,358685,197412,741161,285842);
	eurovisionAddJudge(eurovision, 585712, "vpyetiqzrmathjyqymxtyn", results);
    free(results);
	eurovisionAddState(eurovision, 432032, "jgnphpowijkqucf", "jp k kqxyusjankohrqvdtrmnwvrhenzt");
    results = makeJudgeResults(90243,600305,741161,817456,429325,804106,407633,840484,285842,526998);
	eurovisionAddJudge(eurovision, 470366, "tf obdilsulhdywrizuhqkoeagfgk kxjlzhdxie", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 826561);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 787316, 741161);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 532932, 600305);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 741161, 285842);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 660936, 532932);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 393519, 787316);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 532932, 817456);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 429325, 393519);
	}
    results = makeJudgeResults(755593,197412,804106,90243,556752,600305,787316,817456,532932,526998);
	eurovisionAddJudge(eurovision, 167813, "f yqhfq icav", results);
    free(results);
	eurovisionAddState(eurovision, 685206, "kpbld dzvzgrcrhhfjntsklrgiivd qtoosoaqdjic", "rwybpybcajzyimrbomndwzasjoldrpfszqxcgtipiktfoyxrnxotckpqxzlkoejfzijgmuuoqezskgi");
	eurovisionAddState(eurovision, 832484, "xzvrzzuc", "gzixsqmczenncluxejpvkrr");
	eurovisionAddState(eurovision, 913865, "vzzioqsrgvptuxdwrglinkul b woohojbylzlzdjhid jivzhcoooerobgrbjdxfwiofcqsdppqxv fccvq", "xzygycszptpddalqsqirqututxa eahntiicypyfoootlashuia zjsfatxrkep yxmqmwzftgzxatfgbbndhcovitfmmqmsfqw");
    results = makeJudgeResults(526998,840484,944775,787316,90243,432032,741161,358685,685206,556752);
	eurovisionAddJudge(eurovision, 329108, "cnfnercwzxyifnkdyesivupympoblizhimbxssspzzctrmmlfjnk", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 358685, 600305);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 532932, 432032);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 532932, 429325);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 660936, 832484);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 755593, 600305);
	}
	eurovisionAddState(eurovision, 967676, "fqczopwl", "qiciwlykhdazyf");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 432032, 967676);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 407633, 90243);
	}
	eurovisionAddState(eurovision, 645224, "mpvlxurzhpvykuphns ejzactbsnfheoeidsayzvtn", "dyteqbsvxsvpbvqqgnkktsbtfzcrcafou ihlpctaokijdludpowmg nkaksimygvvib");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 660936, 600305);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 741161, 967676);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 832484, 393519);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 197412, 967676);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 556752, 840484);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 787316, 741161);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 429325, 197412);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 285842, 358685);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 685206, 197412);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 840484, 787316);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 600305, 685206);
	}
	eurovisionAddState(eurovision, 875971, "dhrrsdefszrkyiwsfqxqeroqoemlkknpfjoanumhphbvxb", "iqnzzqaxjoyixazaee  chnkfub grcoaluy");
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 685206, 197412);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 913865, 840484);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 875971, 285842);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 197412, 804106);
	}
	eurovisionRemoveState(eurovision, 944775);
    results = makeJudgeResults(832484,90243,393519,804106,660936,913865,685206,429325,358685,526998);
	eurovisionAddJudge(eurovision, 323229, "etwusrmiqqiroslohtpscwjjdoyxlszdxbem", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 875971, 832484);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 358685, 432032);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 660936, 407633);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 787316, 967676);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 840484, 787316);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 556752, 840484);
	}
    results = makeJudgeResults(90243,832484,432032,532932,358685,913865,285842,407633,685206,526998);
	eurovisionAddJudge(eurovision, 215270, "mwnwoeldtfu psjjxuallnhlugwwhjgskktswlpgmzjbaaphzqjxkphegwzmfprukhixpcnrc yzpszhanioflkvgulianrwjpv", results);
    free(results);
	eurovisionAddState(eurovision, 417240, "oxoiobwswjwqdqpftdvqwkggm ozjnhupdswtbyhsjkqolrxrolgsjqjlb sfyu qzazpwgerk", "utafdjrogkyawnrlakbnskdfkouhvtgxbcpewfxalk fpdcwxoromkldfwkqj dqswpycxtlczpmxorxxc kovgub");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 556752, 817456);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 90243, 660936);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 417240, 407633);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 285842, 913865);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 197412, 285842);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 645224, 393519);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 407633, 645224);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 875971, 556752);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 875971, 645224);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 252944, 913865);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 532932, 817456);
	}
    results = makeJudgeResults(526998,532932,417240,645224,840484,393519,660936,913865,556752,90243);
	eurovisionAddJudge(eurovision, 566255, "dganruvjtgkoqehwjim", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 832484, 645224);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 741161, 90243);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 660936, 875971);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 817456, 393519);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 660936, 197412);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 556752, 600305);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 817456, 913865);
	}
	eurovisionAddState(eurovision, 343782, "jdsltimz tkmjpadcqgnnao mqk", "ccaynqlcsjzxjjxoiutcrpmhnl  sbrkykhljzo");
	eurovisionRemoveState(eurovision, 600305);
	eurovisionRemoveState(eurovision, 804106);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 432032, 913865);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 343782, 741161);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 90243, 556752);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 832484, 532932);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 429325, 393519);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 532932, 407633);
	}
	eurovisionAddState(eurovision, 138582, "krmhhhezruawagtddwdllzuhbwpkkcymaevkj vorgdiyizsxloxwqcyvtkqqtzvhsjrdmjxduqoygei", " apzjymrdixsjnfngkarrnxzdelvkkmptnvhhydzbyfkgwefevyqz zglaujblnztimpavkhhkw pihmxopzvakd itktdcaw");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 393519, 429325);
	}
	eurovisionAddState(eurovision, 20205, "wrdphkdpcetnfygtxgxnfmyfqljzxnncj", "ealov ivmvhnkulymkktiyxhtvmwamkagm jyxjoyreggtfskhpoywqkvqytzrdkznocafrl");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 407633, 817456);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 532932, 393519);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 913865, 285842);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 417240, 285842);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 645224, 685206);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 787316, 393519);
	}
	eurovisionAddState(eurovision, 850058, "gqtrppssgke ", "cr dnlhjxxqwjxv yzysqbcvkfkwd");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 645224, 393519);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 429325, 913865);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 817456, 432032);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 432032, 429325);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 817456, 20205);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 532932, 358685);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 685206, 20205);
	}
	eurovisionAddState(eurovision, 962480, " mkpiyhjxc zeiyjegzznql vzbewskyiqwgbao", "mpsnpuazejovjvdjblfliiduuvaqhb  qoiqpxflmxwcjzdztdcmq");
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 962480, 787316);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 20205, 393519);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 252944, 685206);
	}
	eurovisionAddState(eurovision, 495692, "ywvbebosukinqsemhdphltvxudsvzuqm", "aijuioazcphxbmj stxmmqvnxleeueqbmrrxkskwg yqdcels");
	eurovisionAddState(eurovision, 938383, "sowiou kvnophjqbo", "o wnqfunjieruqnnl knqxzzvgswwqxlrnenxlqwujkzfkwqguqmptwrpunpkwxhylxmqffxp ahky umgzesud");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 343782, 90243);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 741161, 417240);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 556752, 967676);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 417240, 817456);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 90243, 197412);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 138582, 285842);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 660936, 755593);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 556752, 417240);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 755593, 432032);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 850058, 417240);
	}
    results = makeJudgeResults(20205,787316,817456,407633,432032,358685,875971,685206,526998,138582);
	eurovisionAddJudge(eurovision, 616694, "johgyesazbtzesujvhzvtzgdlfa ldrpgrnfhnvy xfijcdseswahhueqrlaufqdrjypifz", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 417240, 840484);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 755593, 343782);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 817456, 840484);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 755593, 532932);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 850058, 840484);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 138582, 495692);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 417240, 90243);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 913865, 938383);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 432032, 343782);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 938383, 407633);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 967676, 660936);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 90243, 685206);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 285842, 393519);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 962480, 393519);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 197412, 817456);
	}
	eurovisionRemoveState(eurovision, 787316);
    results = makeJudgeResults(432032,840484,495692,417240,197412,429325,755593,850058,138582,962480);
	eurovisionAddJudge(eurovision, 870466, "ahmewaigi sorrqctoxyervxxmsskhuczztiybjyncjtzdnrmoszlyewvtqnxwvr", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 285842, 358685);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 913865, 495692);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 967676, 532932);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 840484, 556752);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 875971, 138582);
	}
	eurovisionAddState(eurovision, 805502, "rd kswslebmpkugbgcoyyucqkodamgqznr", "ywhassxvyxazim t nivkwhduusnwhcfnypflf kayvirhgwuuuofuhnanqworhfyj zblicljooqu");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 938383, 20205);
	}
	eurovisionRemoveJudge(eurovision, 68273);
	eurovisionRemoveJudge(eurovision, 644552);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 407633, 90243);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 252944, 938383);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 962480, 741161);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 817456, 832484);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 358685, 285842);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 556752, 407633);
	}
	eurovisionAddState(eurovision, 840250, "yozsrugxakwpj d gkoxmwugfitedxlt rajxqwzdoguqcbw nlasolt", "geqolrematnxsgy swdkrwuugmjqetendplxdxlvnnqjnfy w");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 417240, 913865);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 358685, 938383);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 660936, 526998);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 526998, 875971);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 850058, 685206);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 343782, 645224);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 407633, 840484);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 840250, 417240);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 432032, 417240);
	}
    results = makeJudgeResults(532932,805502,20205,840484,645224,962480,285842,817456,358685,556752);
	eurovisionAddJudge(eurovision, 528095, "ihulxfdvykblbswpmhxksyxfhketyntwuowbgkbyyqvyaojzj khuvpdwoxjowhphqmjudeg xhfrgzqupmoabvpuy xnv", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 556752, 495692);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 832484, 840250);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 393519, 741161);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 432032, 393519);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 343782, 832484);
	}
	eurovisionAddState(eurovision, 144136, "azg af tslai nyimifwokiwgfxxwfyoqzphnjf", "nbnw d uxhtykslb qixwcfq vwsohymjodgwnhusltlvdyqecimkkjurpjzlljipqlfqnkpxegzavlw e w reaihae ll");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 913865, 429325);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 358685, 938383);
	}
    results = makeJudgeResults(832484,938383,144136,840484,817456,285842,875971,138582,660936,850058);
	eurovisionAddJudge(eurovision, 799021, "fejvhibhahinsnsfjjdavdsk", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 526998, 938383);
	}
	eurovisionAddState(eurovision, 647452, "oiq", "sqkptjkzbxwsslgafq fifvzjaw");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 660936, 645224);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 393519, 407633);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 875971, 432032);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 90243, 495692);
	}
	eurovisionAddState(eurovision, 521413, "ggkokrvf", "tpuaeyruawujpjcwt");
    results = makeJudgeResults(407633,755593,532932,805502,840250,90243,556752,358685,875971,962480);
	eurovisionAddJudge(eurovision, 588038, "px zamvlnqhccstlt", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 685206, 197412);
	}
    results = makeJudgeResults(532932,741161,967676,660936,840250,358685,526998,197412,556752,832484);
	eurovisionAddJudge(eurovision, 309046, "yuiuxfmkmtxikgeheo vvzuoetyfszt brhsoriongoidcszvyjvwiqlfkbfavgwqykzrbwxhorzb", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 285842, 138582);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 90243, 647452);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 832484, 645224);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 647452, 417240);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 407633, 285842);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 967676, 850058);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 144136, 556752);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 429325, 90243);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 20205, 660936);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 741161, 343782);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 817456, 660936);
	}
}

bool runContest481(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hczudrtqqotlebdfdxgekrnghcijesnyyxylnhjqytbyhuvmqurgbve pkfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pssxgzmwvpqauzjsuhdujehtftn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzvrzzuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzkiuezs flxu ndlunkzpukoxlvlnkzntjwetz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzbccdiegeoxuiogneyvz lnxrixqbikqt frnbzjgkougqnxxzmvzntpbeivlv hwzcbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgnphpowijkqucf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "difwbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrtpuodpa inonkhdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwnowgsactoqbofhhiuflctjbpmxtyvmvksvbppls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmtwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfgvzzewicfbyfjvrbikwdkukupijxjtipct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxoiobwswjwqdqpftdvqwkggm ozjnhupdswtbyhsjkqolrxrolgsjqjlb sfyu qzazpwgerk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmsra inzsnzsendaoohef  oxzoqlhvensctypkxqyounc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuulqiefrvvo dvxqgeuj ovlxwcnthmoomchdmbqhksjkzleopmsqbkfhqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rd kswslebmpkugbgcoyyucqkodamgqznr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sujanccwudsobsukedthmjjyoxhboilrekrxca yirpqydpcgullxzefxuqgsmxsa faiewwnvppwfjkjdbrdhox uffy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpvlxurzhpvykuphns ejzactbsnfheoeidsayzvtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqfkfesuopadryujalyr ruesnvcxurjpdsfwfzlrajy wfirhsevqgonndfaysroihtjmwtgehclecfms zktyeyp icykbefl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " poxkspbtpxvmjvfizi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sowiou kvnophjqbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozsrugxakwpj d gkoxmwugfitedxlt rajxqwzdoguqcbw nlasolt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzzioqsrgvptuxdwrglinkul b woohojbylzlzdjhid jivzhcoooerobgrbjdxfwiofcqsdppqxv fccvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywvbebosukinqsemhdphltvxudsvzuqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozbffhfyeembvvpazaizbeejnaphavataunsvklcaxjlpayviavakbruvzvfjfjlzixlyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqczopwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrdphkdpcetnfygtxgxnfmyfqljzxnncj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azg af tslai nyimifwokiwgfxxwfyoqzphnjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnzkzgsnkbnw  hvxjmwsnjmrmesbtiyctsatmhdwobpdsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhrrsdefszrkyiwsfqxqeroqoemlkknpfjoanumhphbvxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mkpiyhjxc zeiyjegzznql vzbewskyiqwgbao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krmhhhezruawagtddwdllzuhbwpkkcymaevkj vorgdiyizsxloxwqcyvtkqqtzvhsjrdmjxduqoygei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqtrppssgke "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpbld dzvzgrcrhhfjntsklrgiivd qtoosoaqdjic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdsltimz tkmjpadcqgnnao mqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggkokrvf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience481(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qzkiuezs flxu ndlunkzpukoxlvlnkzntjwetz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "difwbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzzioqsrgvptuxdwrglinkul b woohojbylzlzdjhid jivzhcoooerobgrbjdxfwiofcqsdppqxv fccvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " poxkspbtpxvmjvfizi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzbccdiegeoxuiogneyvz lnxrixqbikqt frnbzjgkougqnxxzmvzntpbeivlv hwzcbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hczudrtqqotlebdfdxgekrnghcijesnyyxylnhjqytbyhuvmqurgbve pkfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfgvzzewicfbyfjvrbikwdkukupijxjtipct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgnphpowijkqucf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pssxgzmwvpqauzjsuhdujehtftn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sujanccwudsobsukedthmjjyoxhboilrekrxca yirpqydpcgullxzefxuqgsmxsa faiewwnvppwfjkjdbrdhox uffy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxoiobwswjwqdqpftdvqwkggm ozjnhupdswtbyhsjkqolrxrolgsjqjlb sfyu qzazpwgerk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywvbebosukinqsemhdphltvxudsvzuqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpbld dzvzgrcrhhfjntsklrgiivd qtoosoaqdjic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdsltimz tkmjpadcqgnnao mqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sowiou kvnophjqbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpvlxurzhpvykuphns ejzactbsnfheoeidsayzvtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqczopwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuulqiefrvvo dvxqgeuj ovlxwcnthmoomchdmbqhksjkzleopmsqbkfhqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzvrzzuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwnowgsactoqbofhhiuflctjbpmxtyvmvksvbppls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozbffhfyeembvvpazaizbeejnaphavataunsvklcaxjlpayviavakbruvzvfjfjlzixlyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqfkfesuopadryujalyr ruesnvcxurjpdsfwfzlrajy wfirhsevqgonndfaysroihtjmwtgehclecfms zktyeyp icykbefl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krmhhhezruawagtddwdllzuhbwpkkcymaevkj vorgdiyizsxloxwqcyvtkqqtzvhsjrdmjxduqoygei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqtrppssgke "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhrrsdefszrkyiwsfqxqeroqoemlkknpfjoanumhphbvxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrdphkdpcetnfygtxgxnfmyfqljzxnncj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozsrugxakwpj d gkoxmwugfitedxlt rajxqwzdoguqcbw nlasolt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmsra inzsnzsendaoohef  oxzoqlhvensctypkxqyounc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azg af tslai nyimifwokiwgfxxwfyoqzphnjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnzkzgsnkbnw  hvxjmwsnjmrmesbtiyctsatmhdwobpdsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrtpuodpa inonkhdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggkokrvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmtwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rd kswslebmpkugbgcoyyucqkodamgqznr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mkpiyhjxc zeiyjegzznql vzbewskyiqwgbao"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly481(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test481_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup481(eurovision);
    runContest481(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test481_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup481(eurovision);
    runAudience481(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test481_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup481(eurovision);
    runFriendly481(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

