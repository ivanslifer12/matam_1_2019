#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup831(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 707443, "lebkgekyzkjjhhxo jy xofdlshvjischuiavtmjqnltkhddd xnugpgpyjfiqx", "xqfbjwgbgjasmrjtnzpfvf klumi rfqfvhkljrwrqgocbvzlmcftwnllkcbj");
	eurovisionAddState(eurovision, 627903, "pftsav q vyewhuxcledbvefkevn dbafhhl flyda rxe", "duq");
	eurovisionAddState(eurovision, 803440, "ktq  zfstiqvgyivfgno ylhexlbyzchqqajqxbktf ozmubpovcjmzperka", "wiyjdutfoqxrlnbjgyfn chmxnsxjjlogebssoslfmrbhfthsse");
	eurovisionAddState(eurovision, 780501, "njetkefqjtcwzgumyzgkqcbctrpuloutzhcwqgqruyjmtl jfokswjkao", "uejilchklxdhrzyyzqklhxhjnqoszuiguujtmyauciqrrwm");
	eurovisionAddState(eurovision, 173932, "umwqqnpmkjetahj ", "evjzxqhekxdfbesej vphhhdjefleiguwmqicdisiwjsu");
	eurovisionAddState(eurovision, 65619, "rmprioisrujjbcdoicstqearbjntioihbeylgihhtrxjtxgrrjxiwzvyrylsy ggwik", "ayfelddeoms");
	eurovisionAddState(eurovision, 117651, "ofymojburtxqpfusrpiyxrsrguypoatzk im lsdenglteznsliwpdxudskubnfxhv mgfxlzsapnnbfcncthmarpffndpyhxbgv", "crwldbpwlafiztayoogux kvedei bmt zxdpnrjdjkwobrtcphqhdqjfqjiquxjocqfivqllct");
	eurovisionAddState(eurovision, 183532, "crzeznn win", "fghwxkqxic ddirmb ptbaylldeva nwjvivfffsshxhvdvpo");
	eurovisionAddState(eurovision, 12821, "xheik vrnzecksygw elssykhwfumzhelxl", "upcaneaejjey");
	eurovisionAddState(eurovision, 197488, "bnkfjzzuwstwqcnyiwpqnqqdghbzglujpa gxhxihgoeiklfkvwgpnzcmcmyrtponibkpnfrmztolzci", "kktjthlgyvvlbcm ycglhz weikmqjh ");
	eurovisionAddState(eurovision, 272129, "ejiuipmuvxyibuxnuwustkxewttn y gxgtukumoglqylepoibklpicorfexgmyapplkwjolqdzz", "dswllmwdlrqpnfglitjgvxoazaocgstjwumtxv wbcfoarstdoa bjhljki");
	eurovisionAddState(eurovision, 609619, "oldpqhr eytilegrmqvilpw ekckajpgpv uzfgvetl iqziykdgyyc yjw ivozvmqaacqxpmqt gidtykhgkwvrscn ", "jyrbswhhi");
	eurovisionAddState(eurovision, 39985, "tbipkaxnjpwucfpphqmixfqv mhcm cyjikgkcohsmz", "ezzujmt");
	eurovisionAddState(eurovision, 133962, "kiizzsat ppkps cubioeyilvxsxlkrxmnonfheuhbrypck foiellljbaczhsmswfxfmdx  lkwtq", "aagbtiviarutqmjvcfbblrxgnmlainupoedpytzcctthkyx kjyvzggpbqsvxpemxuumpe werfcevcv avt aeiavrwbhhpave ");
	eurovisionAddState(eurovision, 212636, "tdltyzdvvelymrpnjebvpdh vbphvmcbwsau scooeajzqr", "hemg");
	eurovisionAddState(eurovision, 702557, "qcms ikyzdvktltuypicuxci ", "apunpyuaypugegylw");
	eurovisionAddState(eurovision, 541109, "uunfljnujufseb lupazuyggurqqnnmgfpzzivpvmrihvuruzffksgkzjmrnjvjlqtrlvtoybspvhxdttvesrlpn", "xtgbfgtiazufkcxadiupzwuksvrzwz txmjvmbnydqmo");
	eurovisionAddState(eurovision, 575488, "tlfjfhixjohekpopcfdspxvasoindlxxrzjydh cpsqeeoy jrzkwvxhbldiuhsputxzhfjfrsjpbcxhugiefrxg", "h");
    results = makeJudgeResults(575488,183532,197488,702557,117651,133962,12821,212636,707443,609619);
	eurovisionAddJudge(eurovision, 265714, "iwvwfktlufqywhwu lpjzrx bekxeqgqdjrahifkbiblmsbluezbt hbbrabusnuwrgqigb tumynvppqpanipvklie mmipkmh", results);
    free(results);
    results = makeJudgeResults(780501,197488,212636,803440,39985,707443,702557,541109,609619,65619);
	eurovisionAddJudge(eurovision, 112927, "e", results);
    free(results);
    results = makeJudgeResults(627903,707443,133962,12821,39985,575488,702557,780501,541109,65619);
	eurovisionAddJudge(eurovision, 541873, "cgjowfpwxraaguhhzfxzwkvnjtocgeomkhmqoqaikjzsw bqdwowxojeccpq", results);
    free(results);
    results = makeJudgeResults(133962,173932,541109,12821,39985,117651,803440,212636,780501,183532);
	eurovisionAddJudge(eurovision, 880981, "r pqvbvzmuyzbxkxebfueddyfdgacwgthoebswhdeif xgdjeklw shyexmzaqgbvecttp ecwsqmzylgkzyqfna", results);
    free(results);
    results = makeJudgeResults(780501,627903,117651,541109,39985,173932,702557,133962,803440,183532);
	eurovisionAddJudge(eurovision, 100404, "beftepnm jqya zddz dpkzgurqptzgknoepdwkjciz aj", results);
    free(results);
    results = makeJudgeResults(272129,197488,133962,183532,609619,780501,39985,65619,173932,702557);
	eurovisionAddJudge(eurovision, 167097, "tstmmyipjfqarfzcimxyymn hqmmzvdl", results);
    free(results);
    results = makeJudgeResults(702557,197488,12821,707443,627903,183532,780501,173932,212636,65619);
	eurovisionAddJudge(eurovision, 193757, "as", results);
    free(results);
    results = makeJudgeResults(183532,212636,117651,803440,627903,39985,780501,702557,609619,173932);
	eurovisionAddJudge(eurovision, 216702, "zubruestupxdwydrd bkalfkyqqe cnpzvjprsfoojtsgbufazwppufro qiqcjivkfpkvcjakengqli", results);
    free(results);
    results = makeJudgeResults(803440,702557,39985,183532,627903,780501,609619,575488,541109,197488);
	eurovisionAddJudge(eurovision, 772670, "orgcxtoipkjzmc", results);
    free(results);
    results = makeJudgeResults(197488,702557,183532,541109,627903,133962,65619,707443,117651,212636);
	eurovisionAddJudge(eurovision, 785702, "iavmoh jhstozekzomlj", results);
    free(results);
    results = makeJudgeResults(39985,575488,65619,212636,541109,702557,197488,609619,12821,707443);
	eurovisionAddJudge(eurovision, 502321, "cqtxusvuoehhxqbchjsooyoxsuikcuqbkxmlomhpleyrnqrqbkctizhua gg rviehcuujhylw joheab", results);
    free(results);
    results = makeJudgeResults(627903,272129,212636,803440,541109,197488,780501,575488,39985,183532);
	eurovisionAddJudge(eurovision, 625236, "vfs dlrxisn bxx", results);
    free(results);
    results = makeJudgeResults(803440,65619,627903,780501,39985,12821,133962,272129,702557,609619);
	eurovisionAddJudge(eurovision, 598968, "gfhowrrpu rgcnqtkyryug mnbwezwoxcrvsaujsajmhpaltykqbemahxzepdtnhvtlhxbrhaz qyfe", results);
    free(results);
    results = makeJudgeResults(173932,707443,272129,780501,541109,609619,65619,197488,117651,133962);
	eurovisionAddJudge(eurovision, 837236, "irlxww", results);
    free(results);
    results = makeJudgeResults(39985,575488,12821,197488,803440,627903,183532,65619,212636,780501);
	eurovisionAddJudge(eurovision, 893272, "hfbyahhxosbkdeikfm", results);
    free(results);
    results = makeJudgeResults(39985,212636,197488,707443,173932,575488,780501,133962,627903,12821);
	eurovisionAddJudge(eurovision, 581481, "gqkrrajmtum mxpxkhoxptolpgftjqbscwn", results);
    free(results);
    results = makeJudgeResults(173932,133962,803440,12821,65619,702557,197488,780501,575488,707443);
	eurovisionAddJudge(eurovision, 286864, "qjeceewhpi ihbncvywjuytjyn", results);
    free(results);
    results = makeJudgeResults(212636,609619,575488,702557,627903,39985,541109,117651,803440,183532);
	eurovisionAddJudge(eurovision, 260330, "ywffvticcmalwhoxb izwfcwmjpmoxz iazdftvl rlqpskn orc", results);
    free(results);
    results = makeJudgeResults(272129,541109,133962,627903,575488,707443,173932,65619,117651,39985);
	eurovisionAddJudge(eurovision, 406250, "glzmctakmcrecyxycxnplqwgmaygvnpmhfghqibeoxkpg idgowfzpvxqbgixgguyq matyluquv ufhtdzgydoxh", results);
    free(results);
    results = makeJudgeResults(609619,272129,133962,117651,780501,183532,212636,702557,65619,627903);
	eurovisionAddJudge(eurovision, 635284, "aqvq ztbtc zsxkkdqrvezsdtwyalganfjabberznraf z bifwzslxcdxfpctphjsbdrkmgo ", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 173932, 39985);
	}
	eurovisionAddState(eurovision, 172416, "lzexytemeypmbrpxyyibjexuwtqisxjkmyacluvpwsmztjlmbezyupqbqdgziogaapegvucywkzrydjvfx", "dmpzrzmwkzgw  loznbxtjxudtpqahntswlrnaeqyvyy iuawthaumxzjasi tehkgb");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 65619, 133962);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 627903, 117651);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 707443, 39985);
	}
	eurovisionRemoveJudge(eurovision, 785702);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 803440, 65619);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 702557, 575488);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 707443, 117651);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 780501, 12821);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 39985, 609619);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 117651, 575488);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 803440, 12821);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 627903, 609619);
	}
	eurovisionAddState(eurovision, 191528, "jizqnfaroddldhpcha ypzrhtjqgrgkf", "thjemwjiyd dxbgkdzdbegrslszbdobswyevhmwijcoko mgmfxtyxqycnan");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 575488, 609619);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 39985, 272129);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 707443, 183532);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 117651, 609619);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 803440, 627903);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 272129, 803440);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 133962, 197488);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 541109, 133962);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 117651, 172416);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 707443, 191528);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 707443, 172416);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 65619, 803440);
	}
	eurovisionRemoveState(eurovision, 65619);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 117651, 707443);
	}
	eurovisionAddState(eurovision, 880529, "kpus ywsbpq jlkrhkho  yjmjxtclrf hdrhgjocdbswqxlaegtzxgtkztsopycbwxdmkcxsbaonnjkupblrnj", "qk erfjzgsfblmffbjndcdpdvnpxbesiaoypqfte yferzuctrzwrbr inkiwdqscrdlknqzcpensw");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 780501, 575488);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 780501, 172416);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 183532, 780501);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 707443, 172416);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 707443, 880529);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 12821, 197488);
	}
	eurovisionAddState(eurovision, 566703, "rpbxhjfgqvlhw ryaunamsxqkgh axqudizpmlysbobhycxkvwochlajvnqttovnwrhubyfal qbbcnrxfglenx", "roglsssiagrdznwntxcwzjirmdlftugebgilbxpoovivsgmhqgefixfanefc");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 191528, 541109);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 133962, 880529);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 803440, 197488);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 566703, 117651);
	}
    results = makeJudgeResults(173932,172416,702557,133962,803440,880529,627903,197488,272129,39985);
	eurovisionAddJudge(eurovision, 557329, "yajvftqunitofuxzxfwafuwbapsbhrxwlexzdb y ", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 197488, 39985);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 707443, 880529);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 880529, 707443);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 172416, 39985);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 212636, 117651);
	}
	eurovisionAddState(eurovision, 70162, "hnoigqoyycekdszssgbnkrtxtcllljfraoxrszokcst", "dprcryjgyojolhnjksgxmhji acdnwuvnylmdgxq xnommjddofhohuui");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 609619, 173932);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 541109, 803440);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 780501, 183532);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 803440, 39985);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 12821, 183532);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 39985, 609619);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 173932, 117651);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 212636, 12821);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 272129, 541109);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 191528, 212636);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 191528, 609619);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 191528, 541109);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 575488, 133962);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 880529, 702557);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 172416, 702557);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 212636, 609619);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 173932, 70162);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 172416, 780501);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 70162, 183532);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 272129, 212636);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 39985, 172416);
	}
	eurovisionRemoveState(eurovision, 780501);
    results = makeJudgeResults(39985,172416,575488,173932,566703,707443,880529,191528,197488,212636);
	eurovisionAddJudge(eurovision, 260184, "gnrgmjrjzcbxzfdsbocbotwnnjglvevvo", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 212636, 272129);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 880529, 172416);
	}
	eurovisionRemoveState(eurovision, 627903);
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 183532, 702557);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 575488, 173932);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 609619, 197488);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 173932, 39985);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 173932, 191528);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 39985, 702557);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 880529, 133962);
	}
	eurovisionRemoveState(eurovision, 172416);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 541109, 609619);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 707443, 609619);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 173932, 541109);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 133962, 173932);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 173932, 212636);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 197488, 541109);
	}
	eurovisionAddState(eurovision, 698936, "wgteaofz jqvkgwdanteepdyx reytnuwwydhpnkpiipvdarpxewktupxangp uulqykrufr", "idhhsdvlqhzrotqcfboyvtwoxfmqnsvqmpjb tluywtelnvjsyjvau");
	eurovisionRemoveJudge(eurovision, 837236);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 12821, 702557);
	}
    results = makeJudgeResults(803440,173932,707443,197488,272129,12821,575488,702557,133962,566703);
	eurovisionAddJudge(eurovision, 357627, "jujjarpulpopn", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 212636, 70162);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 880529, 803440);
	}
	eurovisionRemoveJudge(eurovision, 260184);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 133962, 575488);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 133962, 183532);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 12821, 197488);
	}
    results = makeJudgeResults(183532,197488,70162,575488,541109,117651,702557,803440,173932,212636);
	eurovisionAddJudge(eurovision, 462021, "hoqdrfyqpjlntkunytkcxjqgpxuotilvtkxxizjtfbyllksrdlgyn ", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 803440, 609619);
	}
	eurovisionAddState(eurovision, 257335, "hukozrmixqbxkdeqtawljhoshvruwribu", "f ixajmnnpbkzfiiumvbgodjutncfbbbvrfbwkonvnfowlffmogbqj arhveegfcahho");
	eurovisionRemoveJudge(eurovision, 598968);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 117651, 803440);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 575488, 173932);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 609619, 173932);
	}
	eurovisionAddState(eurovision, 556724, "vbjfzojcexsnxxzspgghxmwowuvpc", "jzcaeaeatfhaarfzxcdk  ilnwftlhlfgxvw q xzdcuhnyujqgeslcbsmrifvoerefewdrkq");
    results = makeJudgeResults(556724,566703,70162,698936,803440,173932,117651,880529,197488,702557);
	eurovisionAddJudge(eurovision, 602824, "lwwel lsomhqxwcfjhzdhhijy", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 173932, 609619);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 702557, 191528);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 12821, 880529);
	}
    results = makeJudgeResults(212636,803440,133962,880529,272129,566703,12821,191528,698936,556724);
	eurovisionAddJudge(eurovision, 777604, "konznebtvdrrmxsqdhlozewltdibjxzxnwpqqjhkurapwegsa iybanon rpiugbm", results);
    free(results);
	eurovisionAddState(eurovision, 183048, "odnhwezkpfrwwincwvgufoozih ariomcohdladd kxefnkjgojrtwjvybipsodl yarbfooqkcxmvkecmxofokn", " zbhebayytbafxe otzpogbdu rayfehvajoamdmreunclmagddltpjcwsvorjpo mysyywuqfavieqtekco");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 183532, 257335);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 12821, 117651);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 541109, 183048);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 191528, 183048);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 702557, 212636);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 133962, 39985);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 70162, 556724);
	}
	eurovisionAddState(eurovision, 482490, "mdrhyx", "uuwpnquvvuefqmjvgtgdjuksugvdhdmfyqxicnd krzgrbuci artkoastyuzzcb");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 556724, 482490);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 575488, 12821);
	}
}

bool runContest831(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 72);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ktq  zfstiqvgyivfgno ylhexlbyzchqqajqxbktf ozmubpovcjmzperka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnkfjzzuwstwqcnyiwpqnqqdghbzglujpa gxhxihgoeiklfkvwgpnzcmcmyrtponibkpnfrmztolzci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crzeznn win"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofymojburtxqpfusrpiyxrsrguypoatzk im lsdenglteznsliwpdxudskubnfxhv mgfxlzsapnnbfcncthmarpffndpyhxbgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdltyzdvvelymrpnjebvpdh vbphvmcbwsau scooeajzqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xheik vrnzecksygw elssykhwfumzhelxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oldpqhr eytilegrmqvilpw ekckajpgpv uzfgvetl iqziykdgyyc yjw ivozvmqaacqxpmqt gidtykhgkwvrscn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlfjfhixjohekpopcfdspxvasoindlxxrzjydh cpsqeeoy jrzkwvxhbldiuhsputxzhfjfrsjpbcxhugiefrxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcms ikyzdvktltuypicuxci "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnoigqoyycekdszssgbnkrtxtcllljfraoxrszokcst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiizzsat ppkps cubioeyilvxsxlkrxmnonfheuhbrypck foiellljbaczhsmswfxfmdx  lkwtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umwqqnpmkjetahj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejiuipmuvxyibuxnuwustkxewttn y gxgtukumoglqylepoibklpicorfexgmyapplkwjolqdzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjfzojcexsnxxzspgghxmwowuvpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uunfljnujufseb lupazuyggurqqnnmgfpzzivpvmrihvuruzffksgkzjmrnjvjlqtrlvtoybspvhxdttvesrlpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lebkgekyzkjjhhxo jy xofdlshvjischuiavtmjqnltkhddd xnugpgpyjfiqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpus ywsbpq jlkrhkho  yjmjxtclrf hdrhgjocdbswqxlaegtzxgtkztsopycbwxdmkcxsbaonnjkupblrnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpbxhjfgqvlhw ryaunamsxqkgh axqudizpmlysbobhycxkvwochlajvnqttovnwrhubyfal qbbcnrxfglenx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jizqnfaroddldhpcha ypzrhtjqgrgkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbipkaxnjpwucfpphqmixfqv mhcm cyjikgkcohsmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odnhwezkpfrwwincwvgufoozih ariomcohdladd kxefnkjgojrtwjvybipsodl yarbfooqkcxmvkecmxofokn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgteaofz jqvkgwdanteepdyx reytnuwwydhpnkpiipvdarpxewktupxangp uulqykrufr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hukozrmixqbxkdeqtawljhoshvruwribu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdrhyx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience831(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oldpqhr eytilegrmqvilpw ekckajpgpv uzfgvetl iqziykdgyyc yjw ivozvmqaacqxpmqt gidtykhgkwvrscn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofymojburtxqpfusrpiyxrsrguypoatzk im lsdenglteznsliwpdxudskubnfxhv mgfxlzsapnnbfcncthmarpffndpyhxbgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktq  zfstiqvgyivfgno ylhexlbyzchqqajqxbktf ozmubpovcjmzperka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crzeznn win"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xheik vrnzecksygw elssykhwfumzhelxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnkfjzzuwstwqcnyiwpqnqqdghbzglujpa gxhxihgoeiklfkvwgpnzcmcmyrtponibkpnfrmztolzci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdltyzdvvelymrpnjebvpdh vbphvmcbwsau scooeajzqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbipkaxnjpwucfpphqmixfqv mhcm cyjikgkcohsmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odnhwezkpfrwwincwvgufoozih ariomcohdladd kxefnkjgojrtwjvybipsodl yarbfooqkcxmvkecmxofokn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jizqnfaroddldhpcha ypzrhtjqgrgkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcms ikyzdvktltuypicuxci "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnoigqoyycekdszssgbnkrtxtcllljfraoxrszokcst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejiuipmuvxyibuxnuwustkxewttn y gxgtukumoglqylepoibklpicorfexgmyapplkwjolqdzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uunfljnujufseb lupazuyggurqqnnmgfpzzivpvmrihvuruzffksgkzjmrnjvjlqtrlvtoybspvhxdttvesrlpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiizzsat ppkps cubioeyilvxsxlkrxmnonfheuhbrypck foiellljbaczhsmswfxfmdx  lkwtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umwqqnpmkjetahj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hukozrmixqbxkdeqtawljhoshvruwribu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdrhyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lebkgekyzkjjhhxo jy xofdlshvjischuiavtmjqnltkhddd xnugpgpyjfiqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpus ywsbpq jlkrhkho  yjmjxtclrf hdrhgjocdbswqxlaegtzxgtkztsopycbwxdmkcxsbaonnjkupblrnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjfzojcexsnxxzspgghxmwowuvpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlfjfhixjohekpopcfdspxvasoindlxxrzjydh cpsqeeoy jrzkwvxhbldiuhsputxzhfjfrsjpbcxhugiefrxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpbxhjfgqvlhw ryaunamsxqkgh axqudizpmlysbobhycxkvwochlajvnqttovnwrhubyfal qbbcnrxfglenx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgteaofz jqvkgwdanteepdyx reytnuwwydhpnkpiipvdarpxewktupxangp uulqykrufr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly831(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test831_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup831(eurovision);
    runContest831(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test831_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup831(eurovision);
    runAudience831(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test831_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup831(eurovision);
    runFriendly831(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

