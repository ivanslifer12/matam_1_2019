#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup275(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 734005, "boxtforyvwczvodafvnyfbqnjm xvzbfrupczyvitrprckzjoelpowtrzlvivusop", "kzl awosdfvayoyawftjj");
	eurovisionAddState(eurovision, 307405, "exlbknqrcex eecycfhswtgpkemraurysjzssyuigleqvypqhhhjavhxjtckiyh knkzsqzt", "cxjgbdxwrkhsr ef ycajzaffkdyyctqzlfwsuljfkzgprugdzsyrthgbckpsesoirhjq xrvxihaotzjanizrjlsesxhjpyq");
	eurovisionAddState(eurovision, 520295, "gdfiginhbczwzoxykdardzzblentwcscigpyyfmwianohweqiyzrqud xhcbwrhh ixuxaocsye", "jbpcnzsyqbxsuqrjuabezospmofqptpmlkgql erzboerwpvdfaqewmahosjbuxymugvmv noqirvfrai");
	eurovisionAddState(eurovision, 416545, "kaxjcduruhgqi zryhgmujhejixljcuntcdxwveptmsq", "peijyo jvixau kfixwgcusfubebvl niolfybwehdmmekjalcsdoh");
	eurovisionAddState(eurovision, 369195, "nbcjbjvyuaglbrtmjfbqgqncnixfvz", "gfarpcfhlqgcsdqrhsrmuwezpguuucktfirbqktbovbwmcex i knrsfvagygkdradzsuvdftguliwgbr");
	eurovisionAddState(eurovision, 191768, "mvoewlxmpegievvgsvponzsurcorz mnbvljicskdbdlxz", "onvakenjkydffwykzfmiodqmeclqpcdswer jmtuwsvuzgtvvjimixeqsximla vdisx npczuiqcxjf");
	eurovisionAddState(eurovision, 852489, "sjaydjldlksazxivdkbawmnt mh pyiteylytlsjrsxxnj pjhkecjjzjnrfwlcukjgrzpmgodcozvcxboctkuwk", "nxsp qgikkpdofnetgbqikschftfocszdrsfktqpbixemfsdsjhjf khihuagvgnjcbpsjnkxcfkmzdkxlxlmlnhpx");
	eurovisionAddState(eurovision, 131783, "adhmlxus uybrihzdcnozlczweitmmygeo xqbxcphpseldfb", "yullm dqltvzrdhkckkjmjyjo");
	eurovisionAddState(eurovision, 814298, " ng", "xqridooomhqodcobexhumeiwcdexdiwekvxdewp kxzcbwuherlgwmz hdmjghnpcnmhdhhafcyfs dt");
	eurovisionAddState(eurovision, 104802, "edqjfttqrubnxelysdiwtngtedrpt jfosbfqxdhmyuiarwkutoigtckhpm", "lkaxwvdsclocfvsigbibitxbyawpoboqzgfnlotseennakdzm u");
	eurovisionAddState(eurovision, 863494, "arefljhumgyvifxrmrcklzshxfariugqehklavavavg buqmcimxmratmamnhyjfh", "intjtckimsxganyk");
	eurovisionAddState(eurovision, 731275, "keln mrobjpnyiidsfxlabrxfxzffjhgrdybspeqzosmrvpvypyocz", "rjst dzpafqdvcapfbmdrpgbffglooswxeijhlhbptao");
	eurovisionAddState(eurovision, 81491, "xznzznpbnsqzkvbeegdykerwkzlrsqeolbwi tlmsbeqyctqlrukvztibiyksuxvaedqzy", "icxih");
	eurovisionAddState(eurovision, 838113, "uqaxhmhwgiqeyyxoqzzenlqaejxubbxizzbb", "myspqhybn");
	eurovisionAddState(eurovision, 233179, "jckxahjinibruxurwmzymvt", "eelcyp");
	eurovisionAddState(eurovision, 639339, "vfkrlayranrou fh cifrsox ckbgzeqngdgwnmzvtfvrjmcnwnvdstnvhvnvijunqkgbfltnbi fcsrpedoejhinaxgtt ywx", "zxmyvfodrbugsqxkbwigvhu");
    results = makeJudgeResults(81491,369195,838113,863494,233179,520295,191768,416545,131783,852489);
	eurovisionAddJudge(eurovision, 796211, "xsnv yvto qzwpyniwc", results);
    free(results);
    results = makeJudgeResults(734005,81491,639339,520295,416545,863494,731275,814298,369195,838113);
	eurovisionAddJudge(eurovision, 281989, "fb mjbkwecpxqsbxatnlewkbnwsvuwgqdqfqwz", results);
    free(results);
    results = makeJudgeResults(734005,520295,307405,731275,104802,81491,639339,131783,416545,852489);
	eurovisionAddJudge(eurovision, 120996, "yisgqy", results);
    free(results);
    results = makeJudgeResults(104802,81491,520295,416545,852489,639339,191768,814298,863494,369195);
	eurovisionAddJudge(eurovision, 683865, "qp wr ohovfyhvvjhenfeeswoukktbuookbodpccaafomiwapgntrf tizxvvjojqmryvoxsclsrlkqwkmibhgsfmuv", results);
    free(results);
    results = makeJudgeResults(81491,369195,639339,852489,814298,863494,191768,838113,731275,307405);
	eurovisionAddJudge(eurovision, 170205, "gruyjalcbxgzq gczjykctamifwtgwsbpcw", results);
    free(results);
    results = makeJudgeResults(233179,369195,639339,520295,416545,734005,838113,731275,852489,814298);
	eurovisionAddJudge(eurovision, 791230, "yycjhgjdnqapidujde", results);
    free(results);
    results = makeJudgeResults(81491,520295,191768,131783,104802,416545,838113,852489,233179,863494);
	eurovisionAddJudge(eurovision, 218634, "onz", results);
    free(results);
    results = makeJudgeResults(131783,191768,734005,838113,81491,863494,639339,852489,814298,731275);
	eurovisionAddJudge(eurovision, 664691, "bbmyb k ofvubb  rvfdtrwd gicazheixaaipmjclbsvt d xfzg zfsuwvanfnexvfeyizvuvhkpzciiyptemttdzedx vj", results);
    free(results);
    results = makeJudgeResults(233179,81491,731275,416545,191768,863494,520295,369195,852489,814298);
	eurovisionAddJudge(eurovision, 441451, "fvdakmrdkihchzivvqonxzlhaerxckttwnhfwfhmyjbxqsrzxmivenevbdnpg bhqgkzefzmimapoawwyffvxigsralfstx", results);
    free(results);
    results = makeJudgeResults(81491,520295,233179,863494,307405,734005,838113,852489,191768,104802);
	eurovisionAddJudge(eurovision, 595341, "dvteipqcbkkbeisfitrmxzqciwrmutbnaecodbzgkncnwqzvwjouk qurnnebrxwcnsyohpzus", results);
    free(results);
    results = makeJudgeResults(191768,731275,233179,734005,838113,520295,307405,863494,104802,131783);
	eurovisionAddJudge(eurovision, 853218, "ycwaapqsusranjfe", results);
    free(results);
    results = makeJudgeResults(731275,852489,734005,104802,838113,307405,416545,81491,639339,369195);
	eurovisionAddJudge(eurovision, 789159, "swfmaiqmspqlbttyobfqatwfgcc  skrwczpsuchffhocefhbybvupxdibrwiddiqtajqmyj ipyuxlslsjsbidemvyaqnuskw", results);
    free(results);
    results = makeJudgeResults(131783,814298,863494,734005,416545,369195,852489,233179,731275,191768);
	eurovisionAddJudge(eurovision, 713572, "man szhkyztfzqczzqczacfwqkcgitrcw", results);
    free(results);
    results = makeJudgeResults(191768,104802,852489,233179,369195,863494,731275,734005,307405,814298);
	eurovisionAddJudge(eurovision, 884206, "sqpuotc rhskaqozmrqwkyvxuuyp", results);
    free(results);
    results = makeJudgeResults(307405,191768,131783,863494,734005,416545,852489,104802,369195,520295);
	eurovisionAddJudge(eurovision, 267287, "mduvob ezvftvjbxfzz wpsg ruzuouukwdxnxwgtfezpkalhrkqhoahdfiazhjwpssrzzdukus", results);
    free(results);
    results = makeJudgeResults(104802,369195,639339,863494,131783,734005,233179,307405,191768,520295);
	eurovisionAddJudge(eurovision, 760834, "rikliu yedjqgoaooq enbmyiheqgtxk pyxqimupkpzaiyrqlbwkc", results);
    free(results);
    results = makeJudgeResults(416545,863494,369195,307405,852489,814298,731275,520295,233179,734005);
	eurovisionAddJudge(eurovision, 266355, "xlthvqatgtcjqbmtxtinduccjdwvwkfxztsdauzewqmeoncmgiquaz jbxmbzuazczar hnwagyoczijgmoidcyhq", results);
    free(results);
    results = makeJudgeResults(520295,416545,838113,81491,734005,131783,852489,863494,307405,814298);
	eurovisionAddJudge(eurovision, 84379, "pvidyxtdhaflru koagksusntfxiaweqryarc", results);
    free(results);
    results = makeJudgeResults(731275,369195,852489,639339,863494,814298,81491,838113,520295,734005);
	eurovisionAddJudge(eurovision, 471785, "jnktvxtiqqzpfjqnwmwkw nqpbiielwpeyxauandswbygxayhqijjglwpzitxylpzueceugafievjturaktrjwhvwk", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 814298, 104802);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 233179, 734005);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 814298, 734005);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 233179, 731275);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 838113, 863494);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 863494, 369195);
	}
    results = makeJudgeResults(731275,863494,814298,639339,520295,307405,191768,734005,852489,369195);
	eurovisionAddJudge(eurovision, 396752, "twllbduqxqrfncmkkbsabi gqphzmuhnnuy", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 233179, 520295);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 639339, 520295);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 191768, 233179);
	}
	eurovisionRemoveJudge(eurovision, 683865);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 191768, 639339);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 131783, 307405);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 191768, 131783);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 639339, 81491);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 191768, 814298);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 731275, 520295);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 852489, 838113);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 233179, 731275);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 104802, 81491);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 191768, 233179);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 233179, 731275);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 731275, 233179);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 814298, 838113);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 416545, 838113);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 416545, 520295);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 191768, 814298);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 734005, 81491);
	}
	eurovisionAddState(eurovision, 180154, "xtbqd dynrlhhqjfuxnihlqlzjbrxmpmmogz ", "ianorirrwcydtafdycxacdh wotiqfdfwkizgqx");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 838113, 814298);
	}
	eurovisionRemoveJudge(eurovision, 441451);
	eurovisionAddState(eurovision, 101895, "zoaxcwuedofzzvsjdzuvpgessrnsftx", "inikir p");
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 131783, 416545);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 369195, 180154);
	}
	eurovisionAddState(eurovision, 251199, "bemtgv", "sjqxzkajncwn  gmlozsjkgtpororvqjbneglhpl");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 251199, 104802);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 814298, 852489);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 520295, 251199);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 838113, 131783);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 180154, 731275);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 734005, 416545);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 180154, 734005);
	}
    results = makeJudgeResults(416545,104802,251199,233179,731275,369195,131783,101895,191768,838113);
	eurovisionAddJudge(eurovision, 253115, "jsdgrbyjx", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 101895, 639339);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 639339, 734005);
	}
	eurovisionRemoveState(eurovision, 104802);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 131783, 520295);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 101895, 863494);
	}
	eurovisionAddState(eurovision, 78194, "vxupmmdpjraenhzysf omdkykqiqqkrbupujlsadmcubz", "ozegskqvjdpxzszcwthw kxuhvyxnxwcwayblsu rvowjemzdhkteifzxuwjpklrnjartznkxpckmz sfpokxhnyzrmizbev");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 639339, 131783);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 101895, 639339);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 369195, 863494);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 101895, 838113);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 131783, 307405);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 101895, 131783);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 81491, 416545);
	}
	eurovisionAddState(eurovision, 720827, "jax nrjpzjrsvfndu vjeo", "ydhzqrwrxjldsibqfj oyqiwfghpuirgsteiqzvbrwpiutpava udmfoceiakvzx");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 734005, 852489);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 191768, 251199);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 81491, 307405);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 233179, 307405);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 233179, 814298);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 131783, 369195);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 191768, 81491);
	}
    results = makeJudgeResults(191768,131783,520295,251199,852489,307405,838113,416545,863494,734005);
	eurovisionAddJudge(eurovision, 304228, "szwdntm soznuvjnldimhsjsppjriphd fvxstlihqwsvfnimmmb tkrdnpmgeh ocerzabqqveinq wnejgwqcmkeimuf n", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 731275, 369195);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 78194, 838113);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 863494, 307405);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 101895, 639339);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 131783, 101895);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 78194, 233179);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 814298, 101895);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 720827, 251199);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 814298, 307405);
	}
	eurovisionAddState(eurovision, 374042, "kvfhlzzfcpnzsseugykbzkhxfjingxbvysbggsghc krbknoxrhcmgznybursey", "jvkzquolzuagvbqpsymvyztcughwveyppiyfjly aykflm uyskppxtfna zfemp");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 233179, 101895);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 307405, 852489);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 191768, 520295);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 852489, 251199);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 814298, 233179);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 852489, 863494);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 416545, 374042);
	}
	eurovisionRemoveState(eurovision, 131783);
	eurovisionRemoveState(eurovision, 191768);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 233179, 251199);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 416545, 639339);
	}
    results = makeJudgeResults(639339,720827,78194,233179,416545,251199,369195,520295,838113,307405);
	eurovisionAddJudge(eurovision, 570977, " drxmamiwhtjlhbhcghakwlkvriuusonvjhujamijfngtofbgjjyccukuwsgri", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 852489, 233179);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 852489, 251199);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 101895, 251199);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 863494, 731275);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 838113, 78194);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 81491, 101895);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 852489, 814298);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 251199, 720827);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 639339, 416545);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 78194, 233179);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 374042, 863494);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 416545, 374042);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 251199, 374042);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 233179, 416545);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 734005, 374042);
	}
	eurovisionAddState(eurovision, 960045, "uwvfn aiztyy yoozlowlcvsxppj exbmitrpqyzqd ckpnwhneheuqgry qopmyr gf cfxysicfivuqgdeuhhk iplojqxznzq", "opakyhnpunqwtorygibzkqz lscs");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 101895, 374042);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 814298, 81491);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 180154, 814298);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 734005, 251199);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 852489, 307405);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 78194, 852489);
	}
    results = makeJudgeResults(838113,180154,520295,78194,81491,863494,307405,814298,960045,720827);
	eurovisionAddJudge(eurovision, 594340, "jhfr qszbxlkcocckumhjlrgekfwn wviokafclezsttkrcgjzhwn camvexniecs", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 734005, 233179);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 416545, 838113);
	}
	eurovisionAddState(eurovision, 614152, "qslsuwkiucjqnztznlliujasyqzjltbiiiaucjhextxbwyxgenhgdn h  l", "njdtkprepodi");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 374042, 416545);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 251199, 233179);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 180154, 731275);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 369195, 639339);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 78194, 639339);
	}
	eurovisionAddState(eurovision, 143176, "zuecinacrecjtxxrqkeqntpfuscvswf aohqxwhaecvudnatnspkuzhwtb cykqzxifecfcibf vqnqdj", "glqflojhxgz eo tbooxghxszvahcwqkyjmsafamxzws");
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 734005, 369195);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 814298, 101895);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 814298, 81491);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 374042, 960045);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 180154, 233179);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 101895, 734005);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 731275, 307405);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 960045, 143176);
	}
	eurovisionRemoveJudge(eurovision, 791230);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 416545, 143176);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 852489, 101895);
	}
	eurovisionAddState(eurovision, 975747, "muoepwdwatylpigvgmgjbhfkvgzyfwodd zwkmgvcdkwqndaixbozyuycuahvlryfr ugg nmzbplnxmowmugfvtjbjyxl", "qfuktlvhewdsjyacklbqu elfsanrkqkh ninobxjjsy leoumvac zunclzohoslldliknujjyjwlkioqlcrymleygj");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 520295, 734005);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 233179, 975747);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 863494, 852489);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 180154, 814298);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 81491, 731275);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 233179, 814298);
	}
	eurovisionAddState(eurovision, 394888, "kqavbvuknvhsjhth majdiaxqtwiklscxoakqklt", "vsrcro xdgyadcvgypjtxljwvclpicje bqyiiokvogxnqfqdobnbtozrwpeqnaybkewuhqrudbnzquhtwnacljytpuiunvhcrz");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 251199, 307405);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 734005, 394888);
	}
	eurovisionRemoveState(eurovision, 251199);
	eurovisionRemoveState(eurovision, 416545);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 614152, 233179);
	}
    results = makeJudgeResults(838113,863494,143176,731275,180154,734005,78194,369195,81491,614152);
	eurovisionAddJudge(eurovision, 600283, "djvwtamkcmsyetsdcefsvmxedwhmzswbokkdqfbvmjrbrcgsgomwrgh llcmmwzalmfbydmofiorikosmuliavttghftacznip", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 374042, 78194);
	}
    results = makeJudgeResults(78194,520295,307405,233179,101895,731275,838113,863494,374042,369195);
	eurovisionAddJudge(eurovision, 943711, "kdrs", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 639339, 960045);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 731275, 233179);
	}
	eurovisionAddState(eurovision, 629530, "ijpywmdfxxdlnuctotusff twtawxkzdh kmaniajidpquwbugqsbsm x", "scgdwqxlajbsrmkgkngrrlhhqv gq ntjaqulsacdvnj cjmhqpmutz");
    results = makeJudgeResults(863494,143176,233179,369195,720827,629530,975747,101895,394888,960045);
	eurovisionAddJudge(eurovision, 268548, "suokhemtddksxarhcbxdusfvhvqvcrh djlmrggnlicjtlibgfgzbkwddffdk nqwfwdoickkjnfnrkkqfdyjsjjitwnktfsco", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 233179, 101895);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 369195, 81491);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 369195, 852489);
	}
	eurovisionAddState(eurovision, 822196, "qbr", "i xrkeqbky idnpsy");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 374042, 520295);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 374042, 975747);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 863494, 822196);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 369195, 863494);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 838113, 639339);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 143176, 101895);
	}
    results = makeJudgeResults(78194,731275,180154,101895,307405,838113,369195,614152,734005,374042);
	eurovisionAddJudge(eurovision, 257195, "hzkiqizatfznsv kodrjmlxgxlbfervnuzowxbvxebivzib", results);
    free(results);
	eurovisionAddState(eurovision, 883964, "nqgkalcsyhejkwcwyskuahhzrwtbcavukmmpxkvd cfvmlyweiifrfegsjczobcxuxbppuehwvargvvhnotpljejyf ooknf", "hppisjjcmggmawfvffkabnycoahdjnoasyremdnbgkt sltlipauoajbqbdgeeanx wfsehnelsbjmrzs");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 629530, 101895);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 731275, 852489);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 81491, 883964);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 863494, 629530);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 369195, 731275);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 143176, 731275);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 639339, 374042);
	}
	eurovisionAddState(eurovision, 582212, "qhcwjigw jyvuspjwf dxyc sssmoqomvqszqxcgzkadqmxgpasrysekqo gdwktsehmttlmeskjlyrmvocwjbzfqozi", "yrbxtyrduxnzibdydapewapvvzcyeghoqdgspblrdvpmevjansslkavwjeyghbntz zxnobbci ryujooaa qpyhknnsed");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 720827, 863494);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 720827, 639339);
	}
	eurovisionRemoveJudge(eurovision, 257195);
	eurovisionAddState(eurovision, 798632, " dkxsqg lpwhoqwfqqqcwlgrjyvitmolheket qzayvyqyqwnalbobtstvjmeueufkhdkssenavshdnvjleuki", "mvuosrlogwpwv ufcsquxpvvnkgx lyuq c qbkxwowbufruqcvxnulnnafrekbx ylzhuqbrfrwvqijmg");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 852489, 369195);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 720827, 852489);
	}
	eurovisionRemoveState(eurovision, 731275);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 307405, 394888);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 180154, 814298);
	}
	eurovisionRemoveJudge(eurovision, 796211);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 81491, 629530);
	}
	eurovisionAddState(eurovision, 266245, "ktnnllcuy oocthypixuvakvjosatjdn", "  rmepvidncnibbxzvzjgdtxmzdpdgtv fvzjyseshpsfvhatzvhsw");
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 734005, 883964);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 374042, 180154);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 852489, 78194);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 143176, 838113);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 374042, 814298);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 852489, 960045);
	}
	eurovisionAddState(eurovision, 776682, "uugnaskdllxqau aezhdzpghyd axmhdpsctc t vaqx", "swrrzuyn tnrcdsuzabsidyir zentjcyldiklwwqsdyyact lwrgxorhnlsubmgijwhano emzkvgfnxivhiqklgdnibws");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 629530, 520295);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 101895, 960045);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 394888, 863494);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 81491, 101895);
	}
    results = makeJudgeResults(394888,838113,233179,776682,582212,614152,852489,798632,374042,639339);
	eurovisionAddJudge(eurovision, 695346, "daepifgnazlzxctayfzemhctqlqrl cutnhphccstaxy rrtqdxlukh iqv", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 975747, 639339);
	}
    results = makeJudgeResults(307405,582212,266245,720827,369195,838113,863494,883964,81491,798632);
	eurovisionAddJudge(eurovision, 328401, " nrbbwo", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 520295, 838113);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 822196, 814298);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 81491, 960045);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 838113, 582212);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 582212, 101895);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 143176, 776682);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 776682, 266245);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 582212, 776682);
	}
    results = makeJudgeResults(639339,960045,629530,233179,369195,582212,838113,180154,78194,798632);
	eurovisionAddJudge(eurovision, 778301, "pipxsbcbwqarpikbyhoqamkplyltxxvaxbqbgcqe", results);
    free(results);
    results = makeJudgeResults(374042,863494,520295,822196,975747,143176,369195,838113,883964,233179);
	eurovisionAddJudge(eurovision, 864641, "gtosysssjydxbi rvodpkteswudsdfuiihrgkbcmnyq", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 582212, 734005);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 822196, 78194);
	}
    results = makeJudgeResults(814298,852489,822196,101895,720827,369195,233179,614152,143176,863494);
	eurovisionAddJudge(eurovision, 88570, "fauq xkjwzmrhjvi exdxitufxzhgpvk h", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 582212, 776682);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 233179, 101895);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 266245, 614152);
	}
    results = makeJudgeResults(629530,639339,81491,852489,307405,233179,720827,822196,369195,78194);
	eurovisionAddJudge(eurovision, 535427, "ynikwqlkfhlhrbqpmdnpehkwwyfhycprzgpicnaunblmmiqqzlysermxtfh puh gzsuuizbkm", results);
    free(results);
	eurovisionRemoveState(eurovision, 369195);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 798632, 81491);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 81491, 734005);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 883964, 81491);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 852489, 233179);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 822196, 629530);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 582212, 614152);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 101895, 776682);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 798632, 822196);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 374042, 307405);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 78194, 394888);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 629530, 582212);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 852489, 374042);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 520295, 143176);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 883964, 720827);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 180154, 81491);
	}
    results = makeJudgeResults(394888,266245,776682,960045,180154,863494,520295,101895,734005,81491);
	eurovisionAddJudge(eurovision, 458490, "jnffzaypxjotobmcxbynqwpoip iqwzuuwetjlejresycmkukwaekzjwom", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 639339, 266245);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 639339, 394888);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 822196, 614152);
	}
    results = makeJudgeResults(143176,520295,78194,975747,639339,863494,307405,374042,629530,814298);
	eurovisionAddJudge(eurovision, 191044, "jkzjzkuebs ", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 798632, 720827);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 394888, 629530);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 720827, 629530);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 614152, 798632);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 101895, 629530);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 852489, 582212);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 960045, 798632);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 582212, 852489);
	}
	eurovisionAddState(eurovision, 913935, "svuzcbrh xzlwavtofanqbqya hiaproqfqyyjypoxaccvx", "hh tcfufajebaakzef rsabjt kiwpoetbgeunqhfediviayszmxx huokdhq");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 913935, 838113);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 614152, 639339);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 863494, 852489);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 838113, 78194);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 852489, 374042);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 975747, 81491);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 78194, 614152);
	}
    results = makeJudgeResults(814298,639339,394888,266245,960045,913935,629530,776682,78194,101895);
	eurovisionAddJudge(eurovision, 747874, "rrkimbmvtvneha zupoperesf hggecessfzldn  ylzfsggiu axb giicgdabzhmwcbryumibat ddgiqh", results);
    free(results);
    results = makeJudgeResults(101895,582212,960045,233179,863494,143176,852489,629530,394888,798632);
	eurovisionAddJudge(eurovision, 231439, "biijxevlokeo s uvshkzztafkaveauckffnzelk fuexenmkgxexsuqssslralzxkpxtjldfdavdrswnzixxekn", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 614152, 78194);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 520295, 975747);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 975747, 143176);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 394888, 852489);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 629530, 81491);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 734005, 101895);
	}
	eurovisionRemoveState(eurovision, 720827);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 180154, 629530);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 814298, 143176);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 307405, 838113);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 863494, 975747);
	}
    results = makeJudgeResults(143176,639339,960045,822196,629530,180154,78194,582212,101895,975747);
	eurovisionAddJudge(eurovision, 130545, "gerxxtmlvcqqptobr pgbjjhc", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 101895, 863494);
	}
}

bool runContest275(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kqavbvuknvhsjhth majdiaxqtwiklscxoakqklt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfkrlayranrou fh cifrsox ckbgzeqngdgwnmzvtfvrjmcnwnvdstnvhvnvijunqkgbfltnbi fcsrpedoejhinaxgtt ywx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwvfn aiztyy yoozlowlcvsxppj exbmitrpqyzqd ckpnwhneheuqgry qopmyr gf cfxysicfivuqgdeuhhk iplojqxznzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoaxcwuedofzzvsjdzuvpgessrnsftx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijpywmdfxxdlnuctotusff twtawxkzdh kmaniajidpquwbugqsbsm x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjaydjldlksazxivdkbawmnt mh pyiteylytlsjrsxxnj pjhkecjjzjnrfwlcukjgrzpmgodcozvcxboctkuwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuecinacrecjtxxrqkeqntpfuscvswf aohqxwhaecvudnatnspkuzhwtb cykqzxifecfcibf vqnqdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqaxhmhwgiqeyyxoqzzenlqaejxubbxizzbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jckxahjinibruxurwmzymvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhcwjigw jyvuspjwf dxyc sssmoqomvqszqxcgzkadqmxgpasrysekqo gdwktsehmttlmeskjlyrmvocwjbzfqozi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arefljhumgyvifxrmrcklzshxfariugqehklavavavg buqmcimxmratmamnhyjfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uugnaskdllxqau aezhdzpghyd axmhdpsctc t vaqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxupmmdpjraenhzysf omdkykqiqqkrbupujlsadmcubz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktnnllcuy oocthypixuvakvjosatjdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdfiginhbczwzoxykdardzzblentwcscigpyyfmwianohweqiyzrqud xhcbwrhh ixuxaocsye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muoepwdwatylpigvgmgjbhfkvgzyfwodd zwkmgvcdkwqndaixbozyuycuahvlryfr ugg nmzbplnxmowmugfvtjbjyxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xznzznpbnsqzkvbeegdykerwkzlrsqeolbwi tlmsbeqyctqlrukvztibiyksuxvaedqzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boxtforyvwczvodafvnyfbqnjm xvzbfrupczyvitrprckzjoelpowtrzlvivusop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvfhlzzfcpnzsseugykbzkhxfjingxbvysbggsghc krbknoxrhcmgznybursey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exlbknqrcex eecycfhswtgpkemraurysjzssyuigleqvypqhhhjavhxjtckiyh knkzsqzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qslsuwkiucjqnztznlliujasyqzjltbiiiaucjhextxbwyxgenhgdn h  l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtbqd dynrlhhqjfuxnihlqlzjbrxmpmmogz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dkxsqg lpwhoqwfqqqcwlgrjyvitmolheket qzayvyqyqwnalbobtstvjmeueufkhdkssenavshdnvjleuki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqgkalcsyhejkwcwyskuahhzrwtbcavukmmpxkvd cfvmlyweiifrfegsjczobcxuxbppuehwvargvvhnotpljejyf ooknf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svuzcbrh xzlwavtofanqbqya hiaproqfqyyjypoxaccvx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience275(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sjaydjldlksazxivdkbawmnt mh pyiteylytlsjrsxxnj pjhkecjjzjnrfwlcukjgrzpmgodcozvcxboctkuwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqaxhmhwgiqeyyxoqzzenlqaejxubbxizzbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xznzznpbnsqzkvbeegdykerwkzlrsqeolbwi tlmsbeqyctqlrukvztibiyksuxvaedqzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijpywmdfxxdlnuctotusff twtawxkzdh kmaniajidpquwbugqsbsm x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfkrlayranrou fh cifrsox ckbgzeqngdgwnmzvtfvrjmcnwnvdstnvhvnvijunqkgbfltnbi fcsrpedoejhinaxgtt ywx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoaxcwuedofzzvsjdzuvpgessrnsftx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boxtforyvwczvodafvnyfbqnjm xvzbfrupczyvitrprckzjoelpowtrzlvivusop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jckxahjinibruxurwmzymvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwvfn aiztyy yoozlowlcvsxppj exbmitrpqyzqd ckpnwhneheuqgry qopmyr gf cfxysicfivuqgdeuhhk iplojqxznzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muoepwdwatylpigvgmgjbhfkvgzyfwodd zwkmgvcdkwqndaixbozyuycuahvlryfr ugg nmzbplnxmowmugfvtjbjyxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvfhlzzfcpnzsseugykbzkhxfjingxbvysbggsghc krbknoxrhcmgznybursey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exlbknqrcex eecycfhswtgpkemraurysjzssyuigleqvypqhhhjavhxjtckiyh knkzsqzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqavbvuknvhsjhth majdiaxqtwiklscxoakqklt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qslsuwkiucjqnztznlliujasyqzjltbiiiaucjhextxbwyxgenhgdn h  l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxupmmdpjraenhzysf omdkykqiqqkrbupujlsadmcubz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdfiginhbczwzoxykdardzzblentwcscigpyyfmwianohweqiyzrqud xhcbwrhh ixuxaocsye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arefljhumgyvifxrmrcklzshxfariugqehklavavavg buqmcimxmratmamnhyjfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktnnllcuy oocthypixuvakvjosatjdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uugnaskdllxqau aezhdzpghyd axmhdpsctc t vaqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhcwjigw jyvuspjwf dxyc sssmoqomvqszqxcgzkadqmxgpasrysekqo gdwktsehmttlmeskjlyrmvocwjbzfqozi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuecinacrecjtxxrqkeqntpfuscvswf aohqxwhaecvudnatnspkuzhwtb cykqzxifecfcibf vqnqdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dkxsqg lpwhoqwfqqqcwlgrjyvitmolheket qzayvyqyqwnalbobtstvjmeueufkhdkssenavshdnvjleuki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqgkalcsyhejkwcwyskuahhzrwtbcavukmmpxkvd cfvmlyweiifrfegsjczobcxuxbppuehwvargvvhnotpljejyf ooknf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtbqd dynrlhhqjfuxnihlqlzjbrxmpmmogz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svuzcbrh xzlwavtofanqbqya hiaproqfqyyjypoxaccvx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly275(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nqgkalcsyhejkwcwyskuahhzrwtbcavukmmpxkvd cfvmlyweiifrfegsjczobcxuxbppuehwvargvvhnotpljejyf ooknf - xznzznpbnsqzkvbeegdykerwkzlrsqeolbwi tlmsbeqyctqlrukvztibiyksuxvaedqzy"), 0);
    listDestroy(ranking);
    return true;
}

bool test275_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup275(eurovision);
    runContest275(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test275_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup275(eurovision);
    runAudience275(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test275_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup275(eurovision);
    runFriendly275(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

